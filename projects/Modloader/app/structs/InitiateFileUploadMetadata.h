#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InitiateFileUploadMetadata_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InitiateFileUploadMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitiateFileUploadMetadata_DEFINED)
#include <Modloader/app/structs/InitiateFileUploadMetadata__Fields.h>
#if defined(IL2CPP_STRUCT_InitiateFileUploadMetadata__Fields_DEFINED)
#define IL2CPP_STRUCT_InitiateFileUploadMetadata_DEFINED
struct InitiateFileUploadMetadata__Class;
struct InitiateFileUploadMetadata {
    struct InitiateFileUploadMetadata__Class* klass;
    MonitorData* monitor;
    struct InitiateFileUploadMetadata__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InitiateFileUploadMetadata_FWDDECL)
#define IL2CPP_STRUCT_InitiateFileUploadMetadata_FWDDECL
#include <Modloader/app/structs/InitiateFileUploadMetadata__Class.h>
#endif
#undef IL2CPP_STRUCT_InitiateFileUploadMetadata_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitiateFileUploadMetadata_DEFINED) && !defined(IL2CPP_STRUCT_InitiateFileUploadMetadata_FWDDECL)
#include <Modloader/app/structs/InitiateFileUploadMetadata.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InitiateFileUploadMetadata.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
