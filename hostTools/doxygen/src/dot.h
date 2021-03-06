/******************************************************************************
 *
 * $Id: dot.h,v 1.2 2014/11/19 09:12:48 wtchen Exp $
 *
 *
 * Copyright (C) 1997-2006 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

#ifndef _DOT_H
#define _DOT_H

#include "qtbc.h"
#include <qlist.h>
#include <qdict.h>
#include "sortdict.h"

class ClassDef;
class FileDef;
class QTextStream;
class DotNodeList;
class ClassSDict;
class MemberDef;
class Definition;
class DirDef;
class GroupDef;
class DotGroupCollaboration;

enum GraphOutputFormat { BITMAP , EPS };

struct EdgeInfo
{
  enum Colors { Blue=0, Green=1, Red=2, Purple=3, Grey=4, Orange=5 };
  enum Styles { Solid=0, Dashed=1 };
  EdgeInfo() : m_color(0), m_style(0), m_labColor(0) {}
 ~EdgeInfo() {}
  int m_color;
  int m_style;
  QCString m_label;
  QCString m_url;
  int m_labColor;
};

class DotNode
{
  public:
    enum GraphType { Dependency, Inheritance, Collaboration, Hierarchy, CallGraph };
    DotNode(int n,const char *lab,const char *url,int distance = 0,bool rootNode=FALSE,ClassDef *cd=0);
   ~DotNode();
    void addChild(DotNode *n,
                  int edgeColor=EdgeInfo::Purple,
                  int edgeStyle=EdgeInfo::Solid,
                  const char *edgeLab=0,
                  const char *edgeURL=0,
                  int edgeLabCol=-1
                 );
    void setDistance(int distance);
    void addParent(DotNode *n);
    void deleteNode(DotNodeList &deletedList,SDict<DotNode> *skipNodes=0);
    void removeChild(DotNode *n);
    void removeParent(DotNode *n);
    int findParent( DotNode *n );
    void write(QTextStream &t,GraphType gt,GraphOutputFormat f,
               bool topDown,bool toChildren,int maxDistance,bool backArrows,bool reNumber);
    int  m_subgraphId;
    void clearWriteFlag();
    void writeXML(QTextStream &t,bool isClassGraph);
    void writeDEF(QTextStream &t);
    QCString label() const { return m_label; }
    int  number() const { return m_number; }

  private:
    void colorConnectedNodes(int curColor);
    void writeBox(QTextStream &t,GraphType gt,GraphOutputFormat f,
                  bool hasNonReachableChildren, bool reNumber=FALSE);
    void writeArrow(QTextStream &t,GraphType gt,GraphOutputFormat f,DotNode *cn,
                    EdgeInfo *ei,bool topDown, bool pointBack=TRUE, bool reNumber=FALSE);
    const DotNode   *findDocNode() const; // only works for acyclic graphs!
    int              m_number;
    QCString         m_label;     //!< label text
    QCString         m_url;       //!< url of the node (format: remote$local)
    QList<DotNode>  *m_parents;   //!< list of parent nodes (incoming arrows)
    QList<DotNode>  *m_children;  //!< list of child nodes (outgoing arrows)
    QList<EdgeInfo> *m_edgeInfo;  //!< edge info for each child
    bool             m_deleted;   //!< used to mark a node as deleted
    bool             m_written;   //!< used to mark a node as written
    bool             m_hasDoc;    //!< used to mark a node as documented
    int              m_distance;  //!< distance to the root node
    bool             m_isRoot;    //!< indicates if this is a root node
    ClassDef *       m_classDef;  //!< class representing this node (can be 0)

    friend class DotGfxHierarchyTable;
    friend class DotClassGraph;
    friend class DotInclDepGraph;
    friend class DotNodeList;
    friend class DotCallGraph;
    friend class DotGroupCollaboration;

    friend void writeDotGraph(
                      DotNode *root, GraphType gt,
                      GraphOutputFormat f, const QCString &baseName,
                      bool lrRank, bool renderParents,
                      int distance, bool backArrows, bool reNumber
                     );
    friend QCString computeMd5Signature(
                      DotNode *root, GraphType gt,
                      GraphOutputFormat f, 
                      bool lrRank, bool renderParents,
                      int distance, bool backArrows
                     );
};
inline
int DotNode::findParent( DotNode *n )
{
    if( !m_parents )
        return -1;
    return m_parents->find(n);
}

class DotGfxHierarchyTable
{
  public:
    DotGfxHierarchyTable();
   ~DotGfxHierarchyTable();
    void writeGraph(QTextStream &t,const char *path);
  
  private:
    void addHierarchy(DotNode *n,ClassDef *cd,bool hide);
    void addClassList(ClassSDict *cl);

    QList<DotNode> *m_rootNodes; 
    QDict<DotNode> *m_usedNodes; 
    static int      m_curNodeNumber;
    DotNodeList    *m_rootSubgraphs;
};

class DotClassGraph
{
  public:
    //enum GraphType { Interface, Implementation, Inheritance };
    DotClassGraph(ClassDef *cd,DotNode::GraphType t,int maxRecusionDepth);
   ~DotClassGraph();
    bool isTrivial() const;
    QCString writeGraph(QTextStream &t,GraphOutputFormat f,const char *path,
                    const char *relPath, bool TBRank=TRUE,bool imageMap=TRUE);

    void writeXML(QTextStream &t);
    void writeDEF(QTextStream &t);
    QCString diskName() const;

  private:
    void buildGraph(ClassDef *cd,DotNode *n,int level,bool base);
    void addClass(ClassDef *cd,DotNode *n,int prot,const char *label,
                  int level,const char *usedName,const char *templSpec,
                  bool base);
    DotNode        *   m_startNode;
    QDict<DotNode> *   m_usedNodes;
    static int         m_curNodeNumber;
    DotNode::GraphType m_graphType;
    int                m_recDepth;
    QCString           m_diskName;
    int                m_maxDistance;
};

class DotInclDepGraph
{
  public:
    DotInclDepGraph(FileDef *fd,int maxRecusionDepth,bool inverse);
   ~DotInclDepGraph();
    QCString writeGraph(QTextStream &t, GraphOutputFormat f,const char *path,
                    const char *relPath,
                    bool writeImageMap=TRUE);
    bool isTrivial() const;
    QCString diskName() const;
    void writeXML(QTextStream &t);

  private:
    void buildGraph(DotNode *n,FileDef *fd,int distance);
    DotNode        *m_startNode;
    QDict<DotNode> *m_usedNodes;
    static int      m_curNodeNumber;
    QCString        m_diskName;
    int             m_maxDistance;
    bool            m_inverse;
    int             m_recDepth;
};

class DotCallGraph
{
  public:
    DotCallGraph(MemberDef *md,int maxRecursionDepth, bool inverse);
   ~DotCallGraph();
    QCString writeGraph(QTextStream &t, GraphOutputFormat f,
                        const char *path,const char *relPath,bool writeImageMap=TRUE);
    void buildGraph(DotNode *n,MemberDef *md,int distance);
    bool isTrivial() const;
    
  private:
    DotNode        *m_startNode;
    static int      m_curNodeNumber;
    QDict<DotNode> *m_usedNodes;
    int             m_maxDistance;
    int             m_recDepth;
    bool            m_inverse;
    QCString        m_diskName;
    Definition *    m_scope;
};

class DotDirDeps
{
  public:
    DotDirDeps(DirDef *dir);
   ~DotDirDeps();
    bool isTrivial() const;
    QCString writeGraph(QTextStream &out,
                        GraphOutputFormat format,
                        const char *path,
                        const char *relPath,
                        bool writeImageMap=TRUE);
  private:
    DirDef *m_dir;
};

class DotGroupCollaboration
{
  public :
    enum EdgeType 
    {  tmember = 0,
       tclass,
       tnamespace,
       tfile,
       tpages,
       tdir,
       thierarchy 
    };

    class Link
    {
      public:
        Link(const QCString lab,const QCString &u) : label(lab), url(u) {}
        QCString label;
        QCString url;
    };

    class Edge
    {
      public :
        Edge(DotNode *start,DotNode *end,EdgeType type) 
          : pNStart(start), pNEnd(end), eType(type)
        { links.setAutoDelete(TRUE); }

        DotNode* pNStart;
        DotNode* pNEnd;
        EdgeType eType;

        QList<Link> links;
        void write( QTextStream &t, int& curNodeId );
    };

    DotGroupCollaboration(GroupDef* gd);
    ~DotGroupCollaboration();
    QCString writeGraph(QTextStream &t, GraphOutputFormat format,
                    const char *path,const char *relPath,
                    bool writeImageMap=TRUE);
    void buildGraph(GroupDef* gd,int distance);
    bool isTrivial() const;
  private :
    void addCollaborationMember( Definition* def, QCString& url, EdgeType eType );
    void addMemberList( class MemberList* ml );
    void writeGraphHeader(QTextStream &t);
    Edge* addEdge( DotNode* _pNStart, DotNode* _pNEnd, EdgeType _eType,
                   const QCString& _label, const QCString& _url );

    DotNode        *m_rootNode;
    int             m_curNodeId;
    QDict<DotNode> *m_usedNodes;
    QCString        m_diskName;
    QList<Edge>     m_edges;
};

/** @brief Helper class to run dot from doxygen.
 */
class DotRunner
{
  public:
    /** Creates a runner for a dot \a file. */
    DotRunner(const char *file);

    /** Adds an additional job to the run.
     *  Performing multiple jobs one file can be faster.
     */
    void addJob(const char *format,const char *output);

    /** Runs dot for all jobs added. */
    bool run();
  private:
    QList<QCString> m_jobs;
    QCString m_file;
};



void generateGraphLegend(const char *path);
void writeDotGraphFromFile(const char *inFile,const char *outDir,
                           const char *outFile,GraphOutputFormat format);
QString getDotImageMapFromFile(const QString& inFile, const QString& outDir,
                               const QCString& relPath);


#endif
