#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandwormHitReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandwormHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandwormHitReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_SandWormEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_SandWormEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_SandwormHitReaction__Fields_DEFINED
struct MoonTimeline;
struct Event_1;
struct SandwormHitReaction__Fields {
    struct EntityHitReactionBehaviour_1_SandWormEntity___Fields _;
    struct MoonTimeline* HitTImeline;
    struct Event_1* OnAnyHitEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandwormHitReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandwormHitReaction__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SandwormHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandwormHitReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandwormHitReaction__Fields_FWDDECL)
#include <Modloader/app/structs/SandwormHitReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandwormHitReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
