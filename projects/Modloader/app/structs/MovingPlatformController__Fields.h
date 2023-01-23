#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovingPlatformController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovingPlatformController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingPlatformController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MovingPlatformController__Fields_DEFINED
struct SpiderBossEntity;
struct PlayerInsideZoneChecker__Array;
struct Transform__Array;
struct Collider__Array;
struct MovingPlatformController_ProjectedObjectEntry__Array;
struct EventTriggerAnimator__Array;
struct List_1_UnityEngine_Collider_;
struct DamageDealer__Array;
struct List_1_DamageDealer_;
struct MovingPlatformController__Fields {
    struct MonoBehaviour__Fields _;
    struct SpiderBossEntity* SpiderEntity;
    float SmushDisableColliderTime;
    struct PlayerInsideZoneChecker__Array* DisablePlatformAfterSmushZone;
    struct Transform__Array* ProjectedMovingPlatforms;
    struct Transform__Array* PlatformsOnRig;
    struct Collider__Array* ProjectedDamageDealers;
    struct Transform__Array* DamageDealersOnRig;
    struct Collider__Array* ProjectedDamageReceivers;
    struct Transform__Array* DamageReceiversOnRig;
    struct Transform__Array* BottomColliderParents;
    struct MovingPlatformController_ProjectedObjectEntry__Array* ProjectedTransformEntries;
    struct EventTriggerAnimator__Array* DisableBottomCollidersTriggers;
    float AngleAdjustmentModifier;
    float ProjectionSpeed;
    struct List_1_UnityEngine_Collider_* m_projColliders;
    struct Transform__Array* m_projDamageDealerTransforms;
    struct DamageDealer__Array* m_platformDamageDealers;
    struct Transform__Array* m_projDamageReceiverTransforms;
    struct Collider__Array* m_platformDamageReceivers;
    struct List_1_DamageDealer_* m_smushDamageDealers;
    struct List_1_UnityEngine_Collider_* m_bottomColliders;
    struct List_1_UnityEngine_Collider_* IgnoreDeactivation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovingPlatformController__Fields_FWDDECL)
#define IL2CPP_STRUCT_MovingPlatformController__Fields_FWDDECL
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/List_1_DamageDealer_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/MovingPlatformController_ProjectedObjectEntry__Array.h>
#include <Modloader/app/structs/PlayerInsideZoneChecker__Array.h>
#include <Modloader/app/structs/SpiderBossEntity.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_MovingPlatformController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingPlatformController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MovingPlatformController__Fields_FWDDECL)
#include <Modloader/app/structs/MovingPlatformController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovingPlatformController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
