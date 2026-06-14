#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarHideBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarHideBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarHideBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_MortarEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_MortarEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_MortarHideBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct CooldownDecorator;
struct MortarHideBehaviour__Fields {
    struct EntityBehaviourNode_1_MortarEntity___Fields _;
    struct MoonTimeline* HideTimeline;
    struct EventTriggerAnimator* m_deactivateDamage_Event;
    struct CooldownDecorator* CooldownToResetOnExit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarHideBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarHideBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CooldownDecorator.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_MortarHideBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarHideBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarHideBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MortarHideBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarHideBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
