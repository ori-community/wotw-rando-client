#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageDealer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageDealer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageDealer__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/DamageDealer_DamageDirectionMode__Enum.h>
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_GameWorldAreaID__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageDealer_DamageDirectionMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DamageDealer__Fields_DEFINED
struct List_1_DamageDealer_OverrideInfo_;
struct DamageOwner;
struct Entity;
struct Transform;
struct MoonVector3;
struct Action_2_DamageDealer_DamageResult_;
struct Func_2_UnityEngine_GameObject_Boolean_;
struct DamageDealer_TweakDamageDelegate;
struct Condition_1;
struct Rigidbody;
struct AnimationCurve;
struct List_1_UnityEngine_Collider_;
struct Damage;
struct Collider;
struct Polygon_1;
struct String;
struct DamageDealer__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_DamageDealer_OverrideInfo_* m_overrides;
    bool UseDamageByAreaResolver;
    GameWorldAreaID__Enum AreaResolverOverride;

    float m_damageAmount;
    DamageType__Enum DamageType;

    DamageWeight__Enum DamageWeight;

    DamageLayerMask__Enum DamageLayerMask;

    struct DamageOwner* DamageOwner;
    bool ActiveOnlyWithEntity;
    struct Entity* OwningEntity;
    struct Nullable_1_Boolean_ m_initActivated;
    bool m_activated;
    bool m_isKillSurface;
    bool PlayerOnly;
    bool AlwaysIncludeMinecarts;
    AbilityType__Enum AbilityType;

    float TickRate;
    float KickbackForce;
    DamageDealer_DamageDirectionMode__Enum DamageForceDirection;

    struct Transform* ForceDirectionPosition;
    float SpeedTransfer;
    float DamageForceInheritVelocity;
    struct MoonVector3* ConstantForceDirection;
    bool IsContinuousDamage;
    float ContinuousDamageTickRate;
    struct Action_2_DamageDealer_DamageResult_* OnDamageDealt;
    struct Func_2_UnityEngine_GameObject_Boolean_* ShouldDealDamage;
    struct DamageDealer_TweakDamageDelegate* TweakDamage;
    struct Condition_1* Condition;
    bool RequireRigidbody;
    bool UsePlatformMovementForKickbackDirection;
    struct Rigidbody* PushBackBody;
    float PushBackForce;
    bool m_overrideDamageLayerMask;
    DamageLayerMask__Enum m_damageLayerMaskOverride;

    struct Vector3 m_prevPosition;
    struct Vector3 m_currentVelocity;
    struct AnimationCurve* m_defaultKickbackCurve;
    float m_continuousDamageTimer;
    struct List_1_UnityEngine_Collider_* m_insideColliders;
    struct Damage* m_damage;
    struct Collider* m_collider;
    struct Polygon_1* m_polygon;
    bool m_hasPolygon;
    bool m_hasCollider;
    bool m_hasMeshCollider;
    bool m_cachedComponents;
    bool m_concaveMeshCollider;
    bool m_isRegisterdWithDriver;
    struct String* m_clipTittle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageDealer__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageDealer__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_DamageDealer_DamageResult_.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer_TweakDamageDelegate.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/Func_2_UnityEngine_GameObject_Boolean_.h>
#include <Modloader/app/structs/List_1_DamageDealer_OverrideInfo_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Collider_.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/Polygon_1.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DamageDealer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageDealer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageDealer__Fields_FWDDECL)
#include <Modloader/app/structs/DamageDealer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageDealer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
