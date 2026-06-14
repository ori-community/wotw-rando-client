#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameController_GameModeBalanceSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameController_GameModeBalanceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameController_GameModeBalanceSettings_DEFINED)
#include <Modloader/app/structs/GameController_GameModeBalanceSettings__Fields.h>
#if defined(IL2CPP_STRUCT_GameController_GameModeBalanceSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_GameController_GameModeBalanceSettings_DEFINED
struct GameController_GameModeBalanceSettings__Class;
struct GameController_GameModeBalanceSettings {
    struct GameController_GameModeBalanceSettings__Class* klass;
    MonitorData* monitor;
    struct GameController_GameModeBalanceSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameController_GameModeBalanceSettings_FWDDECL)
#define IL2CPP_STRUCT_GameController_GameModeBalanceSettings_FWDDECL
#include <Modloader/app/structs/GameController_GameModeBalanceSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_GameController_GameModeBalanceSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameController_GameModeBalanceSettings_DEFINED) && !defined(IL2CPP_STRUCT_GameController_GameModeBalanceSettings_FWDDECL)
#include <Modloader/app/structs/GameController_GameModeBalanceSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameController_GameModeBalanceSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
