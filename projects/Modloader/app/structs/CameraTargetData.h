#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraTargetData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraTargetData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTargetData_DEFINED)
#include <Modloader/app/structs/CameraTargetData__Fields.h>
#if defined(IL2CPP_STRUCT_CameraTargetData__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraTargetData_DEFINED
struct CameraTargetData__Class;
struct CameraTargetData {
    struct CameraTargetData__Class* klass;
    MonitorData* monitor;
    struct CameraTargetData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraTargetData_FWDDECL)
#define IL2CPP_STRUCT_CameraTargetData_FWDDECL
#include <Modloader/app/structs/CameraTargetData__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraTargetData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraTargetData_DEFINED) && !defined(IL2CPP_STRUCT_CameraTargetData_FWDDECL)
#include <Modloader/app/structs/CameraTargetData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraTargetData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
