#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteFilesResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteFilesResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteFilesResponse_DEFINED)
#include <Modloader/app/structs/DeleteFilesResponse__Fields.h>
#if defined(IL2CPP_STRUCT_DeleteFilesResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteFilesResponse_DEFINED
struct DeleteFilesResponse__Class;
struct DeleteFilesResponse {
    struct DeleteFilesResponse__Class* klass;
    MonitorData* monitor;
    struct DeleteFilesResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteFilesResponse_FWDDECL)
#define IL2CPP_STRUCT_DeleteFilesResponse_FWDDECL
#include <Modloader/app/structs/DeleteFilesResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_DeleteFilesResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteFilesResponse_DEFINED) && !defined(IL2CPP_STRUCT_DeleteFilesResponse_FWDDECL)
#include <Modloader/app/structs/DeleteFilesResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteFilesResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
