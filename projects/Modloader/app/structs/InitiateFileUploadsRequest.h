#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InitiateFileUploadsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InitiateFileUploadsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitiateFileUploadsRequest_DEFINED)
#include <Modloader/app/structs/InitiateFileUploadsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_InitiateFileUploadsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_InitiateFileUploadsRequest_DEFINED
struct InitiateFileUploadsRequest__Class;
struct InitiateFileUploadsRequest {
    struct InitiateFileUploadsRequest__Class* klass;
    MonitorData* monitor;
    struct InitiateFileUploadsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InitiateFileUploadsRequest_FWDDECL)
#define IL2CPP_STRUCT_InitiateFileUploadsRequest_FWDDECL
#include <Modloader/app/structs/InitiateFileUploadsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_InitiateFileUploadsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_InitiateFileUploadsRequest_DEFINED) && !defined(IL2CPP_STRUCT_InitiateFileUploadsRequest_FWDDECL)
#include <Modloader/app/structs/InitiateFileUploadsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InitiateFileUploadsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
