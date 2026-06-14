#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerTriggerSetup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerTriggerSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerTriggerSetup__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PlayerTriggerSetup_TriggerSetupState__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_PlayerTriggerSetup_TriggerSetupState__Enum_DEFINED)
#define IL2CPP_STRUCT_PlayerTriggerSetup__Fields_DEFINED
struct MoonTimeline;
struct PlayerInsideZoneChecker;
struct PlayerTriggerSetup__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* TriggerEnterTimeline;
    struct MoonTimeline* TriggerStayTimeline;
    struct MoonTimeline* TriggerExitTimeline;
    struct PlayerInsideZoneChecker* m_trigger;
    PlayerTriggerSetup_TriggerSetupState__Enum m_currentState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerTriggerSetup__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlayerTriggerSetup__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker.h>
#endif
#undef IL2CPP_STRUCT_PlayerTriggerSetup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerTriggerSetup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlayerTriggerSetup__Fields_FWDDECL)
#include <Modloader/app/structs/PlayerTriggerSetup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerTriggerSetup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
