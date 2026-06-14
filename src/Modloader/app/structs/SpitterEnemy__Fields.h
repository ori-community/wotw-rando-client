#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpitterEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpitterEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemy__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemy__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_GroundEnemy__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SpitterEnemy__Fields_DEFINED
struct PrefabSpawner;
struct ChargingSootEnemyAnimations;
struct ChargingSootEnemySettings;
struct SoundSource;
struct ActionMethod;
struct Transform__Array;
struct SpitterEnemy_States;
struct SpitterEnemy__Fields {
    struct GroundEnemy__Fields _;
    struct PrefabSpawner* SpitEffect;
    struct PrefabSpawner* ProjectileSpawner;
    struct ChargingSootEnemyAnimations* Animations;
    struct ChargingSootEnemySettings* Settings;
    struct SoundSource* IdleSound;
    struct SoundSource* WalkSound;
    struct SoundSource* RunAwaySound;
    struct SoundSource* AttackSound;
    struct SoundSource* LandSound;
    struct ActionMethod* EnterZoneAction;
    struct Transform__Array* ActionZones;
    bool m_hasEnteredZone;
    struct SpitterEnemy_States* State;
    struct Vector2 _ThrownDirection_k__BackingField;
    float FallingDisabledTimeLeft;
    float StunTimeLeft;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpitterEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpitterEnemy__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ChargingSootEnemyAnimations.h>
#include <Modloader/app/structs/ChargingSootEnemySettings.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/SpitterEnemy_States.h>
#include <Modloader/app/structs/Transform__Array.h>
#endif
#undef IL2CPP_STRUCT_SpitterEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpitterEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpitterEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/SpitterEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpitterEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
