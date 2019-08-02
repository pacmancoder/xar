/* #undef HAVE_SYS_STATFS_H */
#define HAVE_SYS_XATTR_H 1
/* #undef HAVE_SYS_EXTATTR_H */
#define HAVE_SYS_PARAM_H 1
/* #undef HAVE_LGETXATTR */
/* #undef HAVE_LSETXATTR */
#define HAVE_GETXATTR 1
#define HAVE_GETATTRLIST 1
#define HAVE_SETATTRLIST 1
#define HAVE_CHFLAGS 1
#define HAVE_STATVFS 1
/* #undef HAVE_EXT2FS_EXT2_FS_H */
#ifdef __APPLE__
    #define HAVE_STRUCT_STAT_ST_FLAGS 1
    #define HAVE_LCHMOD 1
    #define HAVE_STRMODE 1
#endif
/* #undef HAVE_STRUCT_STATVFS_F_FSTYPENAME */
#define HAVE_SYS_ACL_H 1
/* #undef HAVE_LIBUTIL_H */
#define HAVE_LIBPTHREAD 1
#define HAVE_ASPRINTF 1
#define HAVE_LIBBZ2 1
/* #undef HAVE_LIBLZMA */
#define HAVE_LCHOWN 1
#define INO_STRING PRId64
#define INO_HEXSTRING PRIx64
#define INO_CAST (uint64_t)
#define DEV_STRING PRId32
#define DEV_HEXSTRING PRIx32
#define DEV_CAST (uint32_t)
