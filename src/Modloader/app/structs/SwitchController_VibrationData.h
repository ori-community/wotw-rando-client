#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchController_VibrationData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchController_VibrationData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchController_VibrationData_DEFINED)
#include <Modloader/app/structs/SwitchController_VibrationData__Fields.h>
#if defined(IL2CPP_STRUCT_SwitchController_VibrationData__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchController_VibrationData_DEFINED
struct SwitchController_VibrationData__Class;
struct SwitchController_VibrationData {
    struct SwitchController_VibrationData__Class* klass;
    MonitorData* monitor;
    struct SwitchController_VibrationData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchController_VibrationData_FWDDECL)
#define IL2CPP_STRUCT_SwitchController_VibrationData_FWDDECL
#include <Modloader/app/structs/SwitchController_VibrationData__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchController_VibrationData_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchController_VibrationData_DEFINED) && !defined(IL2CPP_STRUCT_SwitchController_VibrationData_FWDDECL)
#include <Modloader/app/structs/SwitchController_VibrationData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchController_VibrationData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
