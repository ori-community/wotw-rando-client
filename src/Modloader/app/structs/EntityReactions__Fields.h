#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityReactions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityReactions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityReactions__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityReactions__Fields_DEFINED
struct EntityReactionBehaviour;
struct HitReactionBehaviour;
struct List_1_EntityReactionBehaviour_;
struct MoonSet_1_EntityReactionBehaviour_;
struct List_1_EntityReactions_ReactionInterruptionSuspensionEntry_;
struct EntityReactions__Fields {
    struct MonoBehaviour__Fields _;
    struct EntityReactionBehaviour* DeathBehaviour;
    struct HitReactionBehaviour* HitReaction;
    struct EntityReactionBehaviour* SimpleHitReaction;
    struct List_1_EntityReactionBehaviour_* m_reactionBehavioursList;
    struct MoonSet_1_EntityReactionBehaviour_* m_reactionBehaviours;
    struct List_1_EntityReactions_ReactionInterruptionSuspensionEntry_* m_reactionWithSuspendedInterruption;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityReactions__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityReactions__Fields_FWDDECL
#include <Modloader/app/structs/EntityReactionBehaviour.h>
#include <Modloader/app/structs/HitReactionBehaviour.h>
#include <Modloader/app/structs/List_1_EntityReactionBehaviour_.h>
#include <Modloader/app/structs/List_1_EntityReactions_ReactionInterruptionSuspensionEntry_.h>
#include <Modloader/app/structs/MoonSet_1_EntityReactionBehaviour_.h>
#endif
#undef IL2CPP_STRUCT_EntityReactions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityReactions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityReactions__Fields_FWDDECL)
#include <Modloader/app/structs/EntityReactions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityReactions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
