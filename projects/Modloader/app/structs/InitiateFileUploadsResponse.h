#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InitiateFileUploadsResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InitiateFileUploadsResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitiateFileUploadsResponse_DEFINED)
#include <Modloader/app/structs/InitiateFileUploadsResponse__Fields.h>
#if defined(IL2CPP_STRUCT_InitiateFileUploadsResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_InitiateFileUploadsResponse_DEFINED
struct InitiateFileUploadsResponse__Class;
struct InitiateFileUploadsResponse {
    struct InitiateFileUploadsResponse__Class* klass;
    MonitorData* monitor;
    struct InitiateFileUploadsResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InitiateFileUploadsResponse_FWDDECL)
#define IL2CPP_STRUCT_InitiateFileUploadsResponse_FWDDECL
#include <Modloader/app/structs/InitiateFileUploadsResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_InitiateFileUploadsResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitiateFileUploadsResponse_DEFINED) && !defined(IL2CPP_STRUCT_InitiateFileUploadsResponse_FWDDECL)
#include <Modloader/app/structs/InitiateFileUploadsResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InitiateFileUploadsResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
