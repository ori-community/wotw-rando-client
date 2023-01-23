#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingBoostController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingBoostController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBoostController__StaticFields_DEFINED)
#include <Modloader/app/structs/LoadingBoostController_BoostModeLevel__Enum.h>
#if defined(IL2CPP_STRUCT_LoadingBoostController_BoostModeLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_LoadingBoostController__StaticFields_DEFINED
struct LoadingBoostController_BoostModeSettings__Array;
struct LoadingBoostController__StaticFields {
    struct LoadingBoostController_BoostModeSettings__Array* m_settings;
    LoadingBoostController_BoostModeLevel__Enum m_currentLevel;

    double m_scaleFactor;
    bool RemapDefaultToLowPriority;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadingBoostController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LoadingBoostController__StaticFields_FWDDECL
#include <Modloader/app/structs/LoadingBoostController_BoostModeSettings__Array.h>
#endif
#undef IL2CPP_STRUCT_LoadingBoostController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBoostController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LoadingBoostController__StaticFields_FWDDECL)
#include <Modloader/app/structs/LoadingBoostController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingBoostController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
