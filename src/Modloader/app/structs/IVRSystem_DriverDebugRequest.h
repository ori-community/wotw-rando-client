#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRSystem_DriverDebugRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRSystem_DriverDebugRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSystem_DriverDebugRequest_DEFINED)
#include <Modloader/app/structs/IVRSystem_DriverDebugRequest__Fields.h>
#if defined(IL2CPP_STRUCT_IVRSystem_DriverDebugRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRSystem_DriverDebugRequest_DEFINED
struct IVRSystem_DriverDebugRequest__Class;
struct IVRSystem_DriverDebugRequest {
    struct IVRSystem_DriverDebugRequest__Class* klass;
    MonitorData* monitor;
    struct IVRSystem_DriverDebugRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRSystem_DriverDebugRequest_FWDDECL)
#define IL2CPP_STRUCT_IVRSystem_DriverDebugRequest_FWDDECL
#include <Modloader/app/structs/IVRSystem_DriverDebugRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRSystem_DriverDebugRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRSystem_DriverDebugRequest_DEFINED) && !defined(IL2CPP_STRUCT_IVRSystem_DriverDebugRequest_FWDDECL)
#include <Modloader/app/structs/IVRSystem_DriverDebugRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRSystem_DriverDebugRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
