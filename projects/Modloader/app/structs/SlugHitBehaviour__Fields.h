#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugHitBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugHitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugHitBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugHitBehaviour__Fields_DEFINED
struct ClipAnimation;
struct SoundProvider;
struct RootMotionProcessor;
struct DamageDealer__Array;
struct Locomotion;
struct IActiveAnimation;
struct Dictionary_2_Moon_ClipAnimation_SoundProvider_;
struct Damage;
struct SlugHitBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct ClipAnimation* KickBackAnimation;
    struct ClipAnimation* KickBackAirAnimation;
    struct SoundProvider* KickBackSoundProvider;
    struct ClipAnimation* KickForwardAnimation;
    struct ClipAnimation* KickForwardAirAnimation;
    struct SoundProvider* KickForwardSoundProvider;
    struct RootMotionProcessor* RootMotion;
    int32_t AnimationPriority;
    bool RestartAnimationForEachExecution;
    struct DamageDealer__Array* disableDamageDealers;
    struct Locomotion* m_locomotion;
    struct IActiveAnimation* m_animationState;
    struct Dictionary_2_Moon_ClipAnimation_SoundProvider_* m_animToSoundDic;
    struct Damage* m_lastDamageReceived;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugHitBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SlugHitBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/ClipAnimation.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/Dictionary_2_Moon_ClipAnimation_SoundProvider_.h>
#include <Modloader/app/structs/IActiveAnimation.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/RootMotionProcessor.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SlugHitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugHitBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SlugHitBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SlugHitBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugHitBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
