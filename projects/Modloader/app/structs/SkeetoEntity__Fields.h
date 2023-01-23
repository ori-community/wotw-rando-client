#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoEntity__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SkeetoEntity_SkeetoState__Enum.h>
#include <Modloader/app/structs/SkeetoEntity_SkeetoType__Enum.h>
#include <Modloader/app/structs/SkeetoSpawnType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SkeetoSpawnType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SkeetoEntity_SkeetoState__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_SkeetoEntity_SkeetoType__Enum_DEFINED)
#define IL2CPP_STRUCT_SkeetoEntity__Fields_DEFINED
struct Renderer;
struct PrefabSpawner;
struct GameObject;
struct SkeetoLocomotion;
struct SkeetoEntity__Fields {
    struct EnemyEntity__Fields _;
    float PatrolYOffset;
    struct Vector2 InfluenceDistanceMultiplier;
    SkeetoSpawnType__Enum _SpawnType_k__BackingField;

    struct Vector3 m_currentOffet;
    SkeetoEntity_SkeetoState__Enum m_state;

    float MaxSwellingScale;
    float AssLerpSpeed;
    float ExplosionDamage;
    DamageWeight__Enum ExplosionDamageWeight;

    struct Renderer* Renderer;
    struct Color NormalColor;
    struct Color BombColor;
    bool ForceExplodeOnDeath;
    struct PrefabSpawner* Explosion;
    bool SetSpotOriBoolOnReset;
    struct Rect PrefferedAttackRange;
    bool MirrorAttackRangeHorizontally;
    bool MirrorAttackRangeVertically;
    int32_t MaxAttacksInRow;
    int32_t _AttacksInRow_k__BackingField;
    struct Color m_currentColor;
    struct GameObject* m_explosionEffect;
    float m_blendValue;
    float m_swellingAmount;
    struct SkeetoLocomotion* m_locomotion;
    SkeetoEntity_SkeetoType__Enum m_type;

    bool m_isAttacking;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoEntity__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SkeetoEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
