#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageReceiver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageReceiver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver__Fields_DEFINED)
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageLayer__Enum.h>
#include <Modloader/app/structs/DamageReceiver_DamageFilterType__Enum.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayer__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageReceiver_DamageFilterType__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_DamageReceiver__Fields_DEFINED
struct List_1_Moon_DamageReceiver_OverrideInfo_;
struct Damage;
struct DamageOwner;
struct ActionMethod;
struct Action_1_DamageResult_;
struct List_1_Moon_DamageReceiver_DamageEntry_;
struct HashSet_1_System_Int32_;
struct InterfaceCache;
struct Transform;
struct EntityTargetting;
struct DealDamageOverTime;
struct LimitedLifetime;
struct EnemyEntity;
struct Collider;
struct Action_1_Damage_;
struct String;
struct DamageReceiver__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_Moon_DamageReceiver_OverrideInfo_* m_overrides;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Damage* LastDamageReceived;
    DamageLayer__Enum DamageLayer;

    DamageLayerMask__Enum DamageMask;

    struct DamageOwner* DamageOwner;
    float DamageMultiplier;
    struct ActionMethod* DamageAction;
    bool ProcessDamageManually;
    bool _ShouldSpawnFXWhenDamaged_k__BackingField;
    struct Action_1_DamageResult_* DamageResultReceived;
    bool m_cachedComponents;
    struct List_1_Moon_DamageReceiver_DamageEntry_* m_damageQueue;
    struct HashSet_1_System_Int32_* m_damageIDs;
    struct InterfaceCache* m_damageResolver;
    struct DamageOwner* m_damageOwner;
    bool m_isActive;
    bool IgnoreUntargetedDamage;
    bool IgnoreDamageWithoutOwner;
    DamageReceiver_DamageFilterType__Enum FilterType;

    DamageType__Enum FilteredDamageType;

    bool DestroyProjectiles;
    bool FilterDirection;
    bool UseAttackerDirectionForFilter;
    bool UseDamageDirectionForFilter;
    float AllowedDamageAngle;
    struct Transform* AllowedDamageOriginTransform;
    struct Transform* AllowedDamageTargetTransform;
    struct EntityTargetting* m_targetting;
    struct DealDamageOverTime* m_dealDamageOverTime;
    bool m_hasDealDamageOverTime;
    struct LimitedLifetime* m_limitedLifetime;
    bool m_hasLimitedLifetime;
    struct EnemyEntity* m_enemyEntity;
    struct Collider* m_collider;
    struct Action_1_Damage_* m_damageReceived;
    float m_stressTestTimer;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;

    struct String* m_clipTittle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageReceiver__Fields_FWDDECL)
#define IL2CPP_STRUCT_DamageReceiver__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Action_1_DamageResult_.h>
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DealDamageOverTime.h>
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/HashSet_1_System_Int32_.h>
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/LimitedLifetime.h>
#include <Modloader/app/structs/List_1_Moon_DamageReceiver_DamageEntry_.h>
#include <Modloader/app/structs/List_1_Moon_DamageReceiver_OverrideInfo_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DamageReceiver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageReceiver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DamageReceiver__Fields_FWDDECL)
#include <Modloader/app/structs/DamageReceiver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageReceiver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
