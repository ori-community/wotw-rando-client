#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyContactSwitch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyContactSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyContactSwitch__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/LegacyPlayerCollisionTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyPlayerCollisionTrigger__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_LegacyContactSwitch__Fields_DEFINED
struct ActionMethod;
struct PerformingAction;
struct Renderer;
struct LegacyContactSwitch__Fields {
    struct LegacyPlayerCollisionTrigger__Fields _;
    struct ActionMethod* OnDeactivate;
    float ActiveTimer;
    bool Toggle;
    float ToggleDelay;
    struct Color InteractionColor;
    struct Color ActivatedColor;
    struct Color DeactivatedColor;
    bool m_isTouched;
    float m_currentTime;
    bool m_isActivated;
    struct PerformingAction* m_onActivatePerformingAction;
    bool m_wasPerforming;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyContactSwitch__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyContactSwitch__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/PerformingAction.h>
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_LegacyContactSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyContactSwitch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyContactSwitch__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyContactSwitch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyContactSwitch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
