#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShieldRotationController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShieldRotationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShieldRotationController__Fields_DEFINED)
#include <Modloader/app/structs/LaserShieldRotationController_RotationType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LaserShieldRotationController_RotationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LaserShieldRotationController__Fields_DEFINED
struct List_1_UnityEngine_Transform_;
struct Transform;
struct LaserShieldCircleSetting;
struct LaserShieldPieceProjectile;
struct List_1_LaserShieldDamageReceiver_;
struct LaserShooterMinibossEntity;
struct LaserShieldRotationController__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Transform_* CirclePivots;
    struct Transform* CorePivot;
    struct LaserShieldCircleSetting* Settings;
    float BaseRotationSpeed;
    float m_defaultRotationSpeedMultiplierTweenSpeed;
    float PingPongInterval;
    LaserShieldRotationController_RotationType__Enum StartingRotationType;

    float ShieldOpeningSize;
    struct LaserShieldPieceProjectile* ProjectilePrefab;
    float ProjectileSpeedForRepair;
    float ProjectileSpeedForAttack;
    LaserShieldRotationController_RotationType__Enum m_currentRotationType;

    float m_rotationSpeedMultiplier;
    float m_rotationDirection;
    float m_timeToPingPong;
    struct List_1_LaserShieldDamageReceiver_* m_shieldPieces;
    bool m_rotateCore;
    bool m_alternateCircleRotations;
    float m_currentMaxPieceProjectileShake;
    bool m_playSoundOnPieceProjectileReturnStart;
    bool m_playSoundOnPieceProjectileShakeStart;
    int32_t m_lastDamageID;
    float m_rotationSpeedMultiplierTweenSpeed;
    float m_targetSpeedMultiplier;
    int32_t AimDirectionCount;
    float CurrentOpeningStrength;
    float PieceKickbackDampRate;
    struct Vector3 _PieceLocalPositionOffset_k__BackingField;
    struct Vector3 _PieceWorldOffset_k__BackingField;
    float _ManualTargetAngle_k__BackingField;
    struct LaserShooterMinibossEntity* _Entity_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShieldRotationController__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShieldRotationController__Fields_FWDDECL
#include <Modloader/app/structs/LaserShieldCircleSetting.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile.h>
#include <Modloader/app/structs/LaserShooterMinibossEntity.h>
#include <Modloader/app/structs/List_1_LaserShieldDamageReceiver_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LaserShieldRotationController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShieldRotationController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShieldRotationController__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShieldRotationController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShieldRotationController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
