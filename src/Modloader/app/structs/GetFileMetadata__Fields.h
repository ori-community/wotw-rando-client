#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetFileMetadata__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetFileMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFileMetadata__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED)
#define IL2CPP_STRUCT_GetFileMetadata__Fields_DEFINED
struct String;
struct __declspec(align(8)) GetFileMetadata__Fields {
    struct String* Checksum;
    struct String* DownloadUrl;
    struct String* FileName;
    struct DateTime LastModified;
    int32_t Size;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetFileMetadata__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetFileMetadata__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GetFileMetadata__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFileMetadata__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetFileMetadata__Fields_FWDDECL)
#include <Modloader/app/structs/GetFileMetadata__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetFileMetadata__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
