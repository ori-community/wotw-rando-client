#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraData_DEFINED)
#include <Modloader/app/structs/CameraData__Fields.h>
#if defined(IL2CPP_STRUCT_CameraData__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraData_DEFINED
struct CameraData__Class;
struct CameraData {
    struct CameraData__Class* klass;
    MonitorData* monitor;
    struct CameraData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraData_FWDDECL)
#define IL2CPP_STRUCT_CameraData_FWDDECL
#include <Modloader/app/structs/CameraData__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraData_DEFINED) && !defined(IL2CPP_STRUCT_CameraData_FWDDECL)
#include <Modloader/app/structs/CameraData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
