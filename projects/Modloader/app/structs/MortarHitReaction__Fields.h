#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarHitReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarHitReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_MortarEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_MortarEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_MortarHitReaction__Fields_DEFINED
struct MoonTimeline;
struct MortarHideBehaviour;
struct Event_1;
struct MortarHitReaction__Fields {
    struct EntityHitReactionBehaviour_1_MortarEntity___Fields _;
    struct MoonTimeline* HitAdditive;
    struct MortarHideBehaviour* HideBehaviour;
    struct Event_1* OnAnyHitEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarHitReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarHitReaction__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MortarHideBehaviour.h>
#endif
#undef IL2CPP_STRUCT_MortarHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarHitReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarHitReaction__Fields_FWDDECL)
#include <Modloader/app/structs/MortarHitReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarHitReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
