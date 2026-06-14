#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy_StuckInGroundState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy_StuckInGroundState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_StuckInGroundState__Fields_DEFINED)
#include <Modloader/app/structs/TentacleEnemy_TentacleState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TentacleEnemy_TentacleState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy_StuckInGroundState__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct SoundProvider;
struct TentacleEnemy_StuckInGroundState__Fields {
    struct TentacleEnemy_TentacleState__Fields _;
    float StuckTimeMin;
    float StuckTimeMax;
    float PullOutForce;
    float PullOutImpulse;
    struct AnimationCurve* PullOutEffortCurve;
    struct GameObject* PullOutParticleEffectPrefab;
    struct SoundProvider* PullOutSound;
    float TimeStuckLeft;
    struct Vector3 StuckPosition;
    struct Vector3 StuckOrientation;
    float m_originalHeadMass;
    float m_timeStuck;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy_StuckInGroundState__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy_StuckInGroundState__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy_StuckInGroundState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy_StuckInGroundState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy_StuckInGroundState__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy_StuckInGroundState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy_StuckInGroundState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
