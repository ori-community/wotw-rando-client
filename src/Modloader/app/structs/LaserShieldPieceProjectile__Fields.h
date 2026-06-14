#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShieldPieceProjectile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShieldPieceProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShieldPieceProjectile__Fields_DEFINED)
#include <Modloader/app/structs/LaserShieldPieceProjectile_Mode__Enum.h>
#include <Modloader/app/structs/Projectile__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Projectile__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_LaserShieldPieceProjectile_Mode__Enum_DEFINED)
#define IL2CPP_STRUCT_LaserShieldPieceProjectile__Fields_DEFINED
struct Transform;
struct HealthController;
struct AnimationCurve;
struct List_1_System_Single_;
struct LaserShieldPieceProjectile_Ring__Array;
struct MoonTimeline;
struct GameObject;
struct LaserShieldRotationController;
struct LaserShieldPieceProjectile__Fields {
    struct Projectile__Fields _;
    struct Transform* OscilationPivot;
    struct HealthController* Health;
    float RotationRate;
    float TurningSpeed;
    float TimeToReachFullRotation;
    float InitSpeed;
    float TargetSpeed;
    float SlowDownTime;
    struct AnimationCurve* SlowDownCurve;
    float ReturnInitSpeed;
    float ReturnTargetSpeed;
    float ReturnSlowDownTime;
    struct AnimationCurve* ReturnSlowDownCurve;
    struct Vector2 StuckTimeRange;
    struct Vector2 StuckShakeAmplitude;
    struct Vector2 StuckShakeFrequency;
    struct AnimationCurve* StuckShakeCurve;
    float TargetPositionDistanceToRepair;
    struct List_1_System_Single_* OrbitDistances;
    struct Transform* m_meshesRoot;
    struct LaserShieldPieceProjectile_Ring__Array* m_rings;
    struct MoonTimeline* HitTimeline;
    struct GameObject* ImpactEffectPrefab;
    struct GameObject* DamageEffectPrefab;
    struct GameObject* DestroyEffectPrefab;
    struct Transform* m_target;
    int32_t m_connectedPieceIndex;
    int32_t m_ringIndex;
    int32_t m_pieceModelIndex;
    bool m_initialized;
    float m_initialRotation;
    float m_currentTimeInMode;
    LaserShieldPieceProjectile_Mode__Enum m_mode;

    float m_targetPositionDistanceToRepairSqr;
    float m_prevOscilationStrength;
    struct LaserShieldRotationController* m_shieldController;
    float m_targetStuckTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShieldPieceProjectile__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShieldPieceProjectile__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HealthController.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile_Ring__Array.h>
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/List_1_System_Single_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LaserShieldPieceProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShieldPieceProjectile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShieldPieceProjectile__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShieldPieceProjectile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShieldPieceProjectile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
