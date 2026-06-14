#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerVibrationSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerVibrationSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerVibrationSetting_DEFINED)
#define IL2CPP_STRUCT_ControllerVibrationSetting_DEFINED
struct ControllerVibrationSetting {
    float Left;
    float Right;
    float LeftTrigger;
    float RightTrigger;
};
#endif
#if !defined(IL2CPP_STRUCT_ControllerVibrationSetting_FWDDECL)
#define IL2CPP_STRUCT_ControllerVibrationSetting_FWDDECL
#endif
#undef IL2CPP_STRUCT_ControllerVibrationSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerVibrationSetting_DEFINED) && !defined(IL2CPP_STRUCT_ControllerVibrationSetting_FWDDECL)
#include <Modloader/app/structs/ControllerVibrationSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerVibrationSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
