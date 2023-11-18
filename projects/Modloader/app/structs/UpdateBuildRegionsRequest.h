#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateBuildRegionsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateBuildRegionsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateBuildRegionsRequest_DEFINED)
#include <Modloader/app/structs/UpdateBuildRegionsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateBuildRegionsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateBuildRegionsRequest_DEFINED
struct UpdateBuildRegionsRequest__Class;
struct UpdateBuildRegionsRequest {
    struct UpdateBuildRegionsRequest__Class* klass;
    MonitorData* monitor;
    struct UpdateBuildRegionsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateBuildRegionsRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdateBuildRegionsRequest_FWDDECL
#include <Modloader/app/structs/UpdateBuildRegionsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateBuildRegionsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateBuildRegionsRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdateBuildRegionsRequest_FWDDECL)
#include <Modloader/app/structs/UpdateBuildRegionsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateBuildRegionsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
