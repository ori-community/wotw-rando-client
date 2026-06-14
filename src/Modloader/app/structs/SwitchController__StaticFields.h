#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchController__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SwitchController__StaticFields_DEFINED
struct Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_;
struct SwitchController__StaticFields {
    bool SwankyVibe;
    bool EnableVibrationPanning;
    float MaxVibrationPanningDelta;
    struct Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_* m_vibeData;
    bool _showApplet;
    int32_t _showAppletFrameCounter;
};
#endif
#if !defined(IL2CPP_STRUCT_SwitchController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SwitchController__StaticFields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_UInt32_frameworks_Switch_SwitchController_VibrationDataEntry_.h>
#endif
#undef IL2CPP_STRUCT_SwitchController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SwitchController__StaticFields_FWDDECL)
#include <Modloader/app/structs/SwitchController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
