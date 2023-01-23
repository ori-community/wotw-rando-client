#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_KwolokBossEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_KwolokBossEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct DirectionalHitReactionPostprocess;
struct List_1_DamageWeight_;
struct List_1_DamageType_;
struct RTPC;
struct CancellableController;
struct AnimationAdditiveStrengthContext;
struct ContextSet;
struct EntityDamageEvent;
struct KwolokBossHitReactionBehaviour__Fields {
    struct EntityReactionBehaviour_1_KwolokBossEntity___Fields _;
    struct MoonTimeline* Hit;
    struct MoonTimeline* HitSide;
    struct MoonTimeline* HitAdditive;
    struct DirectionalHitReactionPostprocess* HitAdditiveDirectional;
    struct List_1_DamageWeight_* ReactDisallowedWeights;
    struct List_1_DamageType_* ReactDisallowedTypes;
    struct List_1_DamageWeight_* AdditiveDisallowedWeights;
    struct List_1_DamageType_* AdditiveDisallowedTypes;
    struct RTPC* DamageAmountRTPC;
    float HeavyDamageMultiplier;
    struct CancellableController* m_cancellableController;
    struct MoonTimeline* m_selectedTimeline;
    bool m_wasExecutingCannonAttack;
    struct AnimationAdditiveStrengthContext* m_additiveStrengthContext;
    struct ContextSet* m_timelineContext;
    struct EntityDamageEvent* DamageEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationAdditiveStrengthContext.h>
#include <Modloader/app/structs/CancellableController.h>
#include <Modloader/app/structs/ContextSet.h>
#include <Modloader/app/structs/DirectionalHitReactionPostprocess.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/List_1_DamageType_.h>
#include <Modloader/app/structs/List_1_DamageWeight_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RTPC.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
