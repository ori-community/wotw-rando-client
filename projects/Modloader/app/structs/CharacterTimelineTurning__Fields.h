#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterTimelineTurning__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterTimelineTurning__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterTimelineTurning__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterTimelineTurning__Fields_DEFINED
struct GenericPuppet;
struct MoonTimeline;
struct EventTriggerAnimator;
struct Action;
struct ICharacter;
struct __declspec(align(8)) CharacterTimelineTurning__Fields {
    struct GenericPuppet* Puppet;
    struct MoonTimeline* TurningAnimation;
    struct EventTriggerAnimator* FlipTrigger;
    struct EventTriggerAnimator* CancellableWindow;
    struct Action* m_onStopEvent;
    bool m_faceLeft;
    struct ICharacter* m_character;
    bool m_isDone;
};
#endif
#if !defined(IL2CPP_STRUCT_CharacterTimelineTurning__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterTimelineTurning__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GenericPuppet.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_CharacterTimelineTurning__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterTimelineTurning__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterTimelineTurning__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterTimelineTurning__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterTimelineTurning__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
