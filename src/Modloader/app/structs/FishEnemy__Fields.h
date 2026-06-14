#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemy__Fields_DEFINED)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#if defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED)
#define IL2CPP_STRUCT_FishEnemy__Fields_DEFINED
struct FishEnemyAnimations;
struct FishEnemySounds;
struct FlyMovement;
struct FishEnemySettings;
struct Transform;
struct FishEnemy_States;
struct AnimationCurve;
struct FishEnemy__Fields {
    struct Enemy2D__Fields _;
    struct FishEnemyAnimations* Animations;
    struct FishEnemySounds* Sounds;
    struct FlyMovement* FlyMovement;
    struct FishEnemySettings* Settings;
    struct Transform* Rotation;
    struct FishEnemy_States* State;
    struct Transform* WanderTarget;
    struct AnimationCurve* AnimationFromBend;
    float m_lastAngle;
    float m_currentAngularVelocity;
    bool m_inWater;
    float Angle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_FishEnemy__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FishEnemyAnimations.h>
#include <Modloader/app/structs/FishEnemySettings.h>
#include <Modloader/app/structs/FishEnemySounds.h>
#include <Modloader/app/structs/FishEnemy_States.h>
#include <Modloader/app/structs/FlyMovement.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_FishEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FishEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/FishEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
