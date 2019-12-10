/* OSAL coverage stub replacement for fcntl.h */
#ifndef _OSAL_OVERRIDE_FCNTL_H_
#define _OSAL_OVERRIDE_FCNTL_H_

#include <OCS_fcntl.h>

/* ----------------------------------------- */
/* mappings for declarations in fcntl.h */
/* ----------------------------------------- */
#define  S_IXOTH         OCS_S_IXOTH
#define  S_IXGRP         OCS_S_IXGRP
#define  S_IXUSR         OCS_S_IXUSR
#define  S_IROTH         OCS_S_IROTH
#define  S_IRGRP         OCS_S_IRGRP
#define  S_IRUSR         OCS_S_IRUSR
#define  S_IWOTH         OCS_S_IWOTH
#define  S_IWGRP         OCS_S_IWGRP
#define  S_IWUSR         OCS_S_IWUSR
#define  S_IFDIR         OCS_S_IFDIR
#define  S_ISDIR(x)      OCS_S_ISDIR(x)
#define  O_RDONLY        OCS_O_RDONLY
#define  O_WRONLY        OCS_O_WRONLY
#define  O_RDWR          OCS_O_RDWR
#define  O_CREAT         OCS_O_CREAT
#define  O_TRUNC         OCS_O_TRUNC
#define  O_NONBLOCK      OCS_O_NONBLOCK
#define  F_GETFL         OCS_F_GETFL
#define  F_SETFL         OCS_F_SETFL
#define  F_GETFD         OCS_F_GETFD
#define  F_SETFD         OCS_F_SETFD
#define  F_DUPFD         OCS_F_DUPFD

#define  fcntl           OCS_fcntl
#define  open            OCS_open


#endif /* _OSAL_OVERRIDE_FCNTL_H_ */
