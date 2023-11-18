#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchController__Fields_DEFINED
struct SwitchController_VibrationData;
struct SwitchController__Fields {
    struct MonoBehaviour__Fields _;
    struct SwitchController_VibrationData* m_vibrationData;
    int64_t m_prevSize;
    float m_reloadTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwitchController__Fields_FWDDECL
#include <Modloader/app/structs/SwitchController_VibrationData.h>
#endif
#undef IL2CPP_STRUCT_SwitchController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwitchController__Fields_FWDDECL)
#include <Modloader/app/structs/SwitchController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
