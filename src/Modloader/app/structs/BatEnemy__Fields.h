#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BatEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BatEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatEnemy__Fields_DEFINED)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_BatEnemy__Fields_DEFINED
struct BatSwarmer;
struct Transform;
struct BatEnemy_Body3DSettings;
struct BatEnemy_States;
struct PrefabSpawner;
struct SoundSource;
struct BatEnemy__Fields {
    struct Enemy2D__Fields _;
    struct BatSwarmer* m_swarmer;
    struct Transform* RigHolder;
    struct Transform* WingLeft;
    struct Transform* WingRight;
    struct Transform* BodyMesh;
    float m_FlapTime;
    struct Vector3 m_BodyScaleInitial;
    float m_BodyScaleMult;
    struct BatEnemy_Body3DSettings* BodySettings;
    struct BatEnemy_States* State;
    float SeekTime;
    bool m_seekingOri;
    float FleeIfInRange;
    float FleeDuration;
    float m_fleeTimer;
    struct Vector2 m_fleeLocation;
    float m_frozenTimer;
    bool m_isCarryingStickyMine;
    float MainPOIRadiusIdle;
    float MainPOIRadiusSeek;
    float ImmunityToDamageTimer;
    struct PrefabSpawner* DeathPrefab;
    struct SoundSource* DeathSound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BatEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_BatEnemy__Fields_FWDDECL
#include <Modloader/app/structs/BatEnemy_Body3DSettings.h>
#include <Modloader/app/structs/BatEnemy_States.h>
#include <Modloader/app/structs/BatSwarmer.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BatEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BatEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BatEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/BatEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BatEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
