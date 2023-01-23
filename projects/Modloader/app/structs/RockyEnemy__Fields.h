#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RockyEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RockyEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemy__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemy3D__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_GroundEnemy3D__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_RockyEnemy__Fields_DEFINED
struct PrefabSpawner;
struct RockyEnemySettings;
struct SoundSource;
struct ActionMethod;
struct Transform__Array;
struct RockyEnemy_States;
struct Rigidbody;
struct PushPullBlockTest;
struct IPressurePlate;
struct RockyEnemy__Fields {
    struct GroundEnemy3D__Fields _;
    struct PrefabSpawner* SpitEffect;
    struct PrefabSpawner* ProjectileSpawner;
    struct RockyEnemySettings* Settings;
    struct SoundSource* IdleSound;
    struct SoundSource* WalkSound;
    struct SoundSource* RunAwaySound;
    struct SoundSource* AttackSound;
    struct SoundSource* LandSound;
    struct ActionMethod* EnterZoneAction;
    struct Transform__Array* ActionZones;
    bool m_hasEnteredZone;
    struct RockyEnemy_States* State;
    struct Vector2 _ThrownDirection_k__BackingField;
    float m_timeSinceDamage;
    float m_laserHitTimeout;
    struct Rigidbody* m_rigidbody;
    struct PushPullBlockTest* m_pushBlock;
    float m_capsuleColliderHeight;
    struct IPressurePlate* m_pressurePlate;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RockyEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_RockyEnemy__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/IPressurePlate.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/PushPullBlockTest.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/RockyEnemySettings.h>
#include <Modloader/app/structs/RockyEnemy_States.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_RockyEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RockyEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RockyEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/RockyEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RockyEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
