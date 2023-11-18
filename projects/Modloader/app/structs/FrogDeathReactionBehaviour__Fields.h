#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_FrogEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_FrogEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_FrogDeathReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct DeathStartEffectSpawnSetting;
struct FrogDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour_1_FrogEntity___Fields _;
    struct MoonTimeline* DeathLaunch;
    struct GameObject* ExplosionPrefab;
    bool PlayDeathStartEffect;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    bool m_skipDeathTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrogDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_FrogDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrogDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/FrogDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
