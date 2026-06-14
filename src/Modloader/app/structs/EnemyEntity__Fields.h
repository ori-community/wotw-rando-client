#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity_SpawnPopFixState__Enum.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Entity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Entity__Fields_DEFINED) && defined(IL2CPP_STRUCT_EnemyEntity_SpawnPopFixState__Enum_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED
struct Action;
struct Event_1;
struct List_1_MeshTrail_;
struct SuspendWhenOutOfFrustrum;
struct HealthBar;
struct Type;
struct DamageOwner;
struct EnemyEntity__Fields {
    struct Entity__Fields _;
    EnemyEntity_SpawnPopFixState__Enum _PopFixState_k__BackingField;

    struct Action* OnAttackTokenStolenCallback;
    bool m_shouldApplyRepelForce;
    float m_repelRange;
    float m_maxRepelForce;
    float m_samePositionError;
    EntityWeightData_EntityWeight__Enum m_weight;

    struct Event_1* DeathEvent;
    struct List_1_MeshTrail_* TrailsToReset;
    struct SuspendWhenOutOfFrustrum* m_frustrumCheck;
    struct HealthBar* m_healthBar;
    struct Vector3 m_colliderCenter;
    struct Type* m_enemyType;
    int32_t m_cachedIndexInGroup;
    int32_t m_indexInGroupCachedFrame;
    float m_timeInBelowMinHealth;
    float m_timeInDeathState;
    struct DamageOwner* m_damageOwner;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemyEntity__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/HealthBar.h>
#include <Modloader/app/structs/List_1_MeshTrail_.h>
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum.h>
#include <Modloader/app/structs/Type.h>
#endif
#undef IL2CPP_STRUCT_EnemyEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemyEntity__Fields_FWDDECL)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
