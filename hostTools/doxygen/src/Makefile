#
# This file was generated from Makefile.in on Sat Jun 10 21:08:33 CEST 2006
#

DOXYGEN   = /home/dimitri/doxygen
TMAKEPATH = /home/dimitri/doxygen/tmake/lib/linux-g++
ENV       = env TMAKEPATH=$(TMAKEPATH)
TMAKE     = /home/dimitri/doxygen/tmake/bin/tmake
MAKE      = /usr/bin/gmake
PERL      = /usr/bin/perl
RM        = rm -f
CP        = cp
VERSION   = 1.4.6
INSTALL   = /usr/local
INSTTOOL  = /usr/bin/install
DOXYDOCS  = ..
DOCDIR    = /usr/local/share/doc/packages/doxygen
QTDIR     = /usr/qt/3
HAVE_DOT  = /usr/local/bin/dot

#
# $Id: Makefile,v 1.2 2014/11/19 09:12:45 wtchen Exp $
#
# Copyright (C) 1997-2006 by Dimitri van Heesch.
# 
# Permission to use, copy, modify, and distribute this software and its
# documentation under the terms of the GNU General Public License is hereby 
# granted. No representations are made about the suitability of this software 
# for any purpose. It is provided "as is" without express or implied warranty.
# See the GNU General Public License for more details.
# 
# Documents produced by Doxygen are derivative works derived from the
# input used in their production; they are not affected by this license.
# 

all: Makefile.libdoxygen Makefile.libdoxycfg Makefile.doxygen Makefile.doxytag Makefile
	$(MAKE) -f Makefile.libdoxycfg PERL=$(PERL) $@
	$(MAKE) -f Makefile.libdoxygen PERL=$(PERL) $@
	$(MAKE) -f Makefile.doxygen    PERL=$(PERL) $@
	$(MAKE) -f Makefile.doxytag    PERL=$(PERL) $@

Makefile.libdoxygen: libdoxygen.pro libdoxygen.t 
	$(ENV) $(PERL) $(TMAKE) libdoxygen.pro >Makefile.libdoxygen

Makefile.libdoxycfg: libdoxycfg.pro libdoxycfg.t 
	$(ENV) $(PERL) $(TMAKE) libdoxycfg.pro >Makefile.libdoxycfg

Makefile.doxygen: doxygen.pro 
	$(ENV) $(PERL) $(TMAKE) doxygen.pro >Makefile.doxygen

Makefile.doxytag: doxytag.pro doxytag.t 
	$(ENV) $(PERL) $(TMAKE) doxytag.pro >Makefile.doxytag

tmake: 
	$(ENV) $(PERL) $(TMAKE) libdoxygen.pro >Makefile.libdoxygen
	$(ENV) $(PERL) $(TMAKE) libdoxycfg.pro >Makefile.libdoxycfg
	$(ENV) $(PERL) $(TMAKE) doxygen.pro >Makefile.doxygen
	$(ENV) $(PERL) $(TMAKE) doxytag.pro >Makefile.doxytag

clean: Makefile.libdoxygen Makefile.libdoxycfg Makefile.doxygen Makefile.doxytag 
	$(MAKE) -f Makefile.libdoxygen clean 
	$(MAKE) -f Makefile.libdoxycfg clean 
	$(MAKE) -f Makefile.doxygen    clean 
	$(MAKE) -f Makefile.doxytag    clean

distclean: clean
	-$(RM) scanner.cpp code.cpp config.cpp pre.cpp ce_lex.cpp \
               ce_parse.cpp ce_parse.h doxytag.cpp tag.cpp commentscan.cpp \
	       declinfo.cpp defargs.cpp commentcnv.cpp doctokenizer.cpp \
	       pycode.cpp pyscanner.cpp           

FORCE:
