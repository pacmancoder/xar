# xar archiver fork
Personal xar fork for research purposes

## Features
- **CMake** support
- Removed CommonCrypto usage on MacOS
- Easy property and subdocuments backup/replication
- Small bugfixes
- Currently runs on MacOS and Linux on x86\_64

## New functions:

```cpp
/**
 * writes property data in format which allows direct replication of it
 * in other files using xar_prop_copyin_wrapped
 */
int32_t xar_prop_copyout_wrapped(xar_file_t file, const char* propName, unsigned char **dataRef, unsigned int *sizeRef);

/**
 * replicates property in the specified file
 */
int32_t xar_prop_copyin_wrapped(xar_file_t file, const unsigned char *data, unsigned int size);

/**
 * writes subdoc data in format which allows direct replication of it
 * in other archives using xar_subdoc_copyin_wrapped
 */
int32_t xar_subdoc_copyout_wrapped(xar_subdoc_t s, unsigned char **dataRef, unsigned int *sizeRef);

/**
 * replicates subdocument in the specified archive
 */
int32_t xar_subdoc_copyin_wrapped(xar_t s, const unsigned char *data, unsigned int size);
``` 
