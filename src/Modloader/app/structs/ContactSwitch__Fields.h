#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContactSwitch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContactSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactSwitch__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/PlayerCollisionTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerCollisionTrigger__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_ContactSwitch__Fields_DEFINED
struct SerializedBooleanUberState;
struct MoonTimeline;
struct PerformingAction;
struct Renderer;
struct ContactSwitch__Fields {
    struct PlayerCollisionTrigger__Fields _;
    struct SerializedBooleanUberState* State;
    struct MoonTimeline* OnDeactivate;
    float ActiveDuration;
    bool Toggle;
    float ToggleDelay;
    struct Color InteractionColor;
    struct Color ActivatedColor;
    struct Color DeactivatedColor;
    bool m_isTouched;
    float m_currentTime;
    bool m_activated;
    struct PerformingAction* m_onActivatePerformingAction;
    bool m_wasPerforming;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContactSwitch__Fields_FWDDECL)
#define IL2CPP_STRUCT_ContactSwitch__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PerformingAction.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_ContactSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContactSwitch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ContactSwitch__Fields_FWDDECL)
#include <Modloader/app/structs/ContactSwitch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContactSwitch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
