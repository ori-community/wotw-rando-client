#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteBuildRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteBuildRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteBuildRequest_DEFINED)
#include <Modloader/app/structs/DeleteBuildRequest__Fields.h>
#if defined(IL2CPP_STRUCT_DeleteBuildRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteBuildRequest_DEFINED
struct DeleteBuildRequest__Class;
struct DeleteBuildRequest {
    struct DeleteBuildRequest__Class* klass;
    MonitorData* monitor;
    struct DeleteBuildRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteBuildRequest_FWDDECL)
#define IL2CPP_STRUCT_DeleteBuildRequest_FWDDECL
#include <Modloader/app/structs/DeleteBuildRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_DeleteBuildRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteBuildRequest_DEFINED) && !defined(IL2CPP_STRUCT_DeleteBuildRequest_FWDDECL)
#include <Modloader/app/structs/DeleteBuildRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteBuildRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
