#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_PiranhaDeathReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct DeathStartEffectSpawnSetting;
struct SwimmingLocomotion;
struct PiranhaDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* DeathTimeline;
    struct MoonTimeline* DeathOnGroundTimeline;
    struct MoonTimeline* ShakeTimeline;
    float MinSubmersion;
    struct Vector2 TargetDrownSpeed;
    float DrownAcceleration;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    struct MoonTimeline* m_currentTimeline;
    struct SwimmingLocomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PiranhaDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SwimmingLocomotion.h>
#endif
#undef IL2CPP_STRUCT_PiranhaDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PiranhaDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
