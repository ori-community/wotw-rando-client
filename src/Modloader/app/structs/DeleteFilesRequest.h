#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteFilesRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteFilesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteFilesRequest_DEFINED)
#include <Modloader/app/structs/DeleteFilesRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeleteFilesRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteFilesRequest_DEFINED
struct DeleteFilesRequest__Class;
struct DeleteFilesRequest {
    struct DeleteFilesRequest__Class* klass;
    MonitorData* monitor;
    struct DeleteFilesRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteFilesRequest_FWDDECL)
#define IL2CPP_STRUCT_DeleteFilesRequest_FWDDECL
#include <Modloader/app/structs/DeleteFilesRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeleteFilesRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteFilesRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeleteFilesRequest_FWDDECL)
#include <Modloader/app/structs/DeleteFilesRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteFilesRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
