/* header auto-generated by pidl */

#include "librpc/ndr/libndr.h"
#include "librpc/gen_ndr/drsblobs.h"

#ifndef _HEADER_NDR_drsblobs
#define _HEADER_NDR_drsblobs

#define NDR_DRSBLOBS_UUID "12345778-1234-abcd-0001-00000001"
#define NDR_DRSBLOBS_VERSION 0.0
#define NDR_DRSBLOBS_NAME "drsblobs"
#define NDR_DRSBLOBS_HELPSTRING "Active Directory Replication LDAP Blobs"
extern const struct ndr_interface_table ndr_table_drsblobs;
#define NDR_DECODE_REPLPROPERTYMETADATA (0x00)

#define NDR_DECODE_REPLUPTODATEVECTOR (0x01)

#define NDR_DECODE_REPSFROMTO (0x02)

#define NDR_DECODE_PARTIALATTRIBUTESET (0x03)

#define NDR_DECODE_PREFIXMAP (0x04)

#define NDR_DECODE_LDAPCONTROLDIRSYNC (0x05)

#define NDR_DECODE_SUPPLEMENTALCREDENTIALS (0x06)

#define NDR_DECODE_PACKAGES (0x07)

#define NDR_DECODE_PRIMARYKERBEROS (0x08)

#define NDR_DECODE_PRIMARYCLEARTEXT (0x09)

#define NDR_DECODE_PRIMARYWDIGEST (0x0a)

#define NDR_DECODE_TRUSTAUTHINOUT (0x0b)

#define NDR_DECODE_DSCOMPRESSED (0x0c)

#define NDR_DRSBLOBS_CALL_COUNT (13)
void ndr_print_replPropertyMetaData1(struct ndr_print *ndr, const char *name, const struct replPropertyMetaData1 *r);
void ndr_print_replPropertyMetaDataCtr1(struct ndr_print *ndr, const char *name, const struct replPropertyMetaDataCtr1 *r);
void ndr_print_replPropertyMetaDataCtr(struct ndr_print *ndr, const char *name, const union replPropertyMetaDataCtr *r);
enum ndr_err_code ndr_push_replPropertyMetaDataBlob(struct ndr_push *ndr, int ndr_flags, const struct replPropertyMetaDataBlob *r);
enum ndr_err_code ndr_pull_replPropertyMetaDataBlob(struct ndr_pull *ndr, int ndr_flags, struct replPropertyMetaDataBlob *r);
void ndr_print_replPropertyMetaDataBlob(struct ndr_print *ndr, const char *name, const struct replPropertyMetaDataBlob *r);
void ndr_print_replUpToDateVectorCtr1(struct ndr_print *ndr, const char *name, const struct replUpToDateVectorCtr1 *r);
void ndr_print_replUpToDateVectorCtr2(struct ndr_print *ndr, const char *name, const struct replUpToDateVectorCtr2 *r);
void ndr_print_replUpToDateVectorCtr(struct ndr_print *ndr, const char *name, const union replUpToDateVectorCtr *r);
enum ndr_err_code ndr_push_replUpToDateVectorBlob(struct ndr_push *ndr, int ndr_flags, const struct replUpToDateVectorBlob *r);
enum ndr_err_code ndr_pull_replUpToDateVectorBlob(struct ndr_pull *ndr, int ndr_flags, struct replUpToDateVectorBlob *r);
void ndr_print_replUpToDateVectorBlob(struct ndr_print *ndr, const char *name, const struct replUpToDateVectorBlob *r);
enum ndr_err_code ndr_push_repsFromTo1OtherInfo(struct ndr_push *ndr, int ndr_flags, const struct repsFromTo1OtherInfo *r);
enum ndr_err_code ndr_pull_repsFromTo1OtherInfo(struct ndr_pull *ndr, int ndr_flags, struct repsFromTo1OtherInfo *r);
void ndr_print_repsFromTo1OtherInfo(struct ndr_print *ndr, const char *name, const struct repsFromTo1OtherInfo *r);
size_t ndr_size_repsFromTo1OtherInfo(const struct repsFromTo1OtherInfo *r, int flags);
enum ndr_err_code ndr_push_repsFromTo1(struct ndr_push *ndr, int ndr_flags, const struct repsFromTo1 *r);
enum ndr_err_code ndr_pull_repsFromTo1(struct ndr_pull *ndr, int ndr_flags, struct repsFromTo1 *r);
void ndr_print_repsFromTo1(struct ndr_print *ndr, const char *name, const struct repsFromTo1 *r);
size_t ndr_size_repsFromTo1(const struct repsFromTo1 *r, int flags);
void ndr_print_repsFromTo(struct ndr_print *ndr, const char *name, const union repsFromTo *r);
enum ndr_err_code ndr_push_repsFromToBlob(struct ndr_push *ndr, int ndr_flags, const struct repsFromToBlob *r);
enum ndr_err_code ndr_pull_repsFromToBlob(struct ndr_pull *ndr, int ndr_flags, struct repsFromToBlob *r);
void ndr_print_repsFromToBlob(struct ndr_print *ndr, const char *name, const struct repsFromToBlob *r);
void ndr_print_partialAttributeSetCtr1(struct ndr_print *ndr, const char *name, const struct partialAttributeSetCtr1 *r);
void ndr_print_partialAttributeSetCtr(struct ndr_print *ndr, const char *name, const union partialAttributeSetCtr *r);
enum ndr_err_code ndr_push_partialAttributeSetBlob(struct ndr_push *ndr, int ndr_flags, const struct partialAttributeSetBlob *r);
enum ndr_err_code ndr_pull_partialAttributeSetBlob(struct ndr_pull *ndr, int ndr_flags, struct partialAttributeSetBlob *r);
void ndr_print_partialAttributeSetBlob(struct ndr_print *ndr, const char *name, const struct partialAttributeSetBlob *r);
void ndr_print_prefixMapVersion(struct ndr_print *ndr, const char *name, enum prefixMapVersion r);
void ndr_print_prefixMapCtr(struct ndr_print *ndr, const char *name, const union prefixMapCtr *r);
enum ndr_err_code ndr_push_prefixMapBlob(struct ndr_push *ndr, int ndr_flags, const struct prefixMapBlob *r);
enum ndr_err_code ndr_pull_prefixMapBlob(struct ndr_pull *ndr, int ndr_flags, struct prefixMapBlob *r);
void ndr_print_prefixMapBlob(struct ndr_print *ndr, const char *name, const struct prefixMapBlob *r);
void ndr_print_ldapControlDirSyncExtra(struct ndr_print *ndr, const char *name, const union ldapControlDirSyncExtra *r);
void ndr_print_ldapControlDirSyncBlob(struct ndr_print *ndr, const char *name, const struct ldapControlDirSyncBlob *r);
enum ndr_err_code ndr_push_ldapControlDirSyncCookie(struct ndr_push *ndr, int ndr_flags, const struct ldapControlDirSyncCookie *r);
enum ndr_err_code ndr_pull_ldapControlDirSyncCookie(struct ndr_pull *ndr, int ndr_flags, struct ldapControlDirSyncCookie *r);
void ndr_print_ldapControlDirSyncCookie(struct ndr_print *ndr, const char *name, const struct ldapControlDirSyncCookie *r);
void ndr_print_supplementalCredentialsPackage(struct ndr_print *ndr, const char *name, const struct supplementalCredentialsPackage *r);
void ndr_print_supplementalCredentialsSignature(struct ndr_print *ndr, const char *name, enum supplementalCredentialsSignature r);
void ndr_print_supplementalCredentialsSubBlob(struct ndr_print *ndr, const char *name, const struct supplementalCredentialsSubBlob *r);
enum ndr_err_code ndr_push_supplementalCredentialsBlob(struct ndr_push *ndr, int ndr_flags, const struct supplementalCredentialsBlob *r);
enum ndr_err_code ndr_pull_supplementalCredentialsBlob(struct ndr_pull *ndr, int ndr_flags, struct supplementalCredentialsBlob *r);
void ndr_print_supplementalCredentialsBlob(struct ndr_print *ndr, const char *name, const struct supplementalCredentialsBlob *r);
enum ndr_err_code ndr_push_package_PackagesBlob(struct ndr_push *ndr, int ndr_flags, const struct package_PackagesBlob *r);
enum ndr_err_code ndr_pull_package_PackagesBlob(struct ndr_pull *ndr, int ndr_flags, struct package_PackagesBlob *r);
void ndr_print_package_PackagesBlob(struct ndr_print *ndr, const char *name, const struct package_PackagesBlob *r);
void ndr_print_package_PrimaryKerberosString(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosString *r);
void ndr_print_package_PrimaryKerberosKey3(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosKey3 *r);
void ndr_print_package_PrimaryKerberosCtr3(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosCtr3 *r);
void ndr_print_package_PrimaryKerberosKey4(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosKey4 *r);
void ndr_print_package_PrimaryKerberosCtr4(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosCtr4 *r);
void ndr_print_package_PrimaryKerberosCtr(struct ndr_print *ndr, const char *name, const union package_PrimaryKerberosCtr *r);
enum ndr_err_code ndr_push_package_PrimaryKerberosBlob(struct ndr_push *ndr, int ndr_flags, const struct package_PrimaryKerberosBlob *r);
enum ndr_err_code ndr_pull_package_PrimaryKerberosBlob(struct ndr_pull *ndr, int ndr_flags, struct package_PrimaryKerberosBlob *r);
void ndr_print_package_PrimaryKerberosBlob(struct ndr_print *ndr, const char *name, const struct package_PrimaryKerberosBlob *r);
enum ndr_err_code ndr_push_package_PrimaryCLEARTEXTBlob(struct ndr_push *ndr, int ndr_flags, const struct package_PrimaryCLEARTEXTBlob *r);
enum ndr_err_code ndr_pull_package_PrimaryCLEARTEXTBlob(struct ndr_pull *ndr, int ndr_flags, struct package_PrimaryCLEARTEXTBlob *r);
void ndr_print_package_PrimaryCLEARTEXTBlob(struct ndr_print *ndr, const char *name, const struct package_PrimaryCLEARTEXTBlob *r);
void ndr_print_package_PrimaryWDigestHash(struct ndr_print *ndr, const char *name, const struct package_PrimaryWDigestHash *r);
enum ndr_err_code ndr_push_package_PrimaryWDigestBlob(struct ndr_push *ndr, int ndr_flags, const struct package_PrimaryWDigestBlob *r);
enum ndr_err_code ndr_pull_package_PrimaryWDigestBlob(struct ndr_pull *ndr, int ndr_flags, struct package_PrimaryWDigestBlob *r);
void ndr_print_package_PrimaryWDigestBlob(struct ndr_print *ndr, const char *name, const struct package_PrimaryWDigestBlob *r);
void ndr_print_trustAuthInOutSecret1(struct ndr_print *ndr, const char *name, const struct trustAuthInOutSecret1 *r);
void ndr_print_trustAuthInOutCtr1(struct ndr_print *ndr, const char *name, const struct trustAuthInOutCtr1 *r);
void ndr_print_trustAuthInOutSecret2V1(struct ndr_print *ndr, const char *name, const struct trustAuthInOutSecret2V1 *r);
void ndr_print_trustAuthInOutSecret2V2(struct ndr_print *ndr, const char *name, const struct trustAuthInOutSecret2V2 *r);
void ndr_print_trustAuthInOutCtr2(struct ndr_print *ndr, const char *name, const struct trustAuthInOutCtr2 *r);
void ndr_print_trustAuthInOutCtr(struct ndr_print *ndr, const char *name, const union trustAuthInOutCtr *r);
enum ndr_err_code ndr_push_trustAuthInOutBlob(struct ndr_push *ndr, int ndr_flags, const struct trustAuthInOutBlob *r);
enum ndr_err_code ndr_pull_trustAuthInOutBlob(struct ndr_pull *ndr, int ndr_flags, struct trustAuthInOutBlob *r);
void ndr_print_trustAuthInOutBlob(struct ndr_print *ndr, const char *name, const struct trustAuthInOutBlob *r);
enum ndr_err_code ndr_push_DsCompressedChunk(struct ndr_push *ndr, int ndr_flags, const struct DsCompressedChunk *r);
enum ndr_err_code ndr_pull_DsCompressedChunk(struct ndr_pull *ndr, int ndr_flags, struct DsCompressedChunk *r);
void ndr_print_DsCompressedChunk(struct ndr_print *ndr, const char *name, const struct DsCompressedChunk *r);
enum ndr_err_code ndr_push_DsCompressedBlob(struct ndr_push *ndr, int ndr_flags, const struct DsCompressedBlob *r);
enum ndr_err_code ndr_pull_DsCompressedBlob(struct ndr_pull *ndr, int ndr_flags, struct DsCompressedBlob *r);
void ndr_print_DsCompressedBlob(struct ndr_print *ndr, const char *name, const struct DsCompressedBlob *r);
void ndr_print_decode_replPropertyMetaData(struct ndr_print *ndr, const char *name, int flags, const struct decode_replPropertyMetaData *r);
void ndr_print_decode_replUpToDateVector(struct ndr_print *ndr, const char *name, int flags, const struct decode_replUpToDateVector *r);
void ndr_print_decode_repsFromTo(struct ndr_print *ndr, const char *name, int flags, const struct decode_repsFromTo *r);
void ndr_print_decode_partialAttributeSet(struct ndr_print *ndr, const char *name, int flags, const struct decode_partialAttributeSet *r);
void ndr_print_decode_prefixMap(struct ndr_print *ndr, const char *name, int flags, const struct decode_prefixMap *r);
void ndr_print_decode_ldapControlDirSync(struct ndr_print *ndr, const char *name, int flags, const struct decode_ldapControlDirSync *r);
void ndr_print_decode_supplementalCredentials(struct ndr_print *ndr, const char *name, int flags, const struct decode_supplementalCredentials *r);
void ndr_print_decode_Packages(struct ndr_print *ndr, const char *name, int flags, const struct decode_Packages *r);
void ndr_print_decode_PrimaryKerberos(struct ndr_print *ndr, const char *name, int flags, const struct decode_PrimaryKerberos *r);
void ndr_print_decode_PrimaryCLEARTEXT(struct ndr_print *ndr, const char *name, int flags, const struct decode_PrimaryCLEARTEXT *r);
void ndr_print_decode_PrimaryWDigest(struct ndr_print *ndr, const char *name, int flags, const struct decode_PrimaryWDigest *r);
void ndr_print_decode_trustAuthInOut(struct ndr_print *ndr, const char *name, int flags, const struct decode_trustAuthInOut *r);
void ndr_print_decode_DsCompressed(struct ndr_print *ndr, const char *name, int flags, const struct decode_DsCompressed *r);
#endif /* _HEADER_NDR_drsblobs */
