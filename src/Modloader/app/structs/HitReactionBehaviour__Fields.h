#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/HitReactionBehaviour_DeathHitReactionMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_HitReactionBehaviour_DeathHitReactionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_HitReactionBehaviour__Fields_DEFINED
struct EntityHitReaction;
struct HitReactionBehaviour_HitReactionEntry__Array;
struct StaggerDamageTracker;
struct StaggerSettings;
struct HitReactionBehaviour_StaggetEntry__Array;
struct HitReactionBehaviour__Fields {
    struct MonoBehaviour__Fields _;
    struct EntityHitReaction* DefaultHitReaction;
    struct EntityHitReaction* DefaultBlockReaction;
    struct HitReactionBehaviour_HitReactionEntry__Array* CustomHitReactions;
    HitReactionBehaviour_DeathHitReactionMode__Enum DeathReactionMode;

    struct EntityHitReaction* DeathCustomReaction;
    struct StaggerDamageTracker* StaggerTracker;
    struct StaggerSettings* DefaultStaggerSettings;
    struct HitReactionBehaviour_StaggetEntry__Array* CustomStaggerEntries;
    bool DebugStagger;
    struct StaggerSettings* m_currentStaggerSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityHitReaction.h>
#include <Modloader/app/structs/HitReactionBehaviour_HitReactionEntry__Array.h>
#include <Modloader/app/structs/HitReactionBehaviour_StaggetEntry__Array.h>
#include <Modloader/app/structs/StaggerDamageTracker.h>
#include <Modloader/app/structs/StaggerSettings.h>
#endif
#undef IL2CPP_STRUCT_HitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/HitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
