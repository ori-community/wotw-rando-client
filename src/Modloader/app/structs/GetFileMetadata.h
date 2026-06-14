#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetFileMetadata_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetFileMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFileMetadata_DEFINED)
#include <Modloader/app/structs/GetFileMetadata__Fields.h>
#if defined(IL2CPP_STRUCT_GetFileMetadata__Fields_DEFINED)
#define IL2CPP_STRUCT_GetFileMetadata_DEFINED
struct GetFileMetadata__Class;
struct GetFileMetadata {
    struct GetFileMetadata__Class* klass;
    MonitorData* monitor;
    struct GetFileMetadata__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetFileMetadata_FWDDECL)
#define IL2CPP_STRUCT_GetFileMetadata_FWDDECL
#include <Modloader/app/structs/GetFileMetadata__Class.h>
#endif
#undef IL2CPP_STRUCT_GetFileMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetFileMetadata_DEFINED) && !defined(IL2CPP_STRUCT_GetFileMetadata_FWDDECL)
#include <Modloader/app/structs/GetFileMetadata.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetFileMetadata.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
