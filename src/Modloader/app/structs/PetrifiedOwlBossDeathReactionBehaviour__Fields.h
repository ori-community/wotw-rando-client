#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/EntityReactionBehaviour_1_PetrifiedOwlBossEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_PetrifiedOwlBossEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossDeathReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct CharacterPlatformMovement;
struct SeinDamageReciever;
struct PetrifiedOwlBossDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour_1_PetrifiedOwlBossEntity___Fields _;
    struct MoonTimeline* DeathTimeline;
    struct CheckpointFunctionality m_checkpoint;
    struct CharacterPlatformMovement* m_oriPlatformMovement;
    struct SeinDamageReciever* m_oriReceiver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SeinDamageReciever.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
