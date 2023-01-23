#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBashAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBashAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBashAttack__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_Guid_DEFINED)
#define IL2CPP_STRUCT_SeinBashAttack__Fields_DEFINED
struct GameObject;
struct AnimationCurve;
struct IBashAttackable;
struct BashAttackGame;
struct Transform;
struct HashSet_1_Moon_ISuspendable_;
struct MoonAnimation__Array;
struct SeinBashVersionAsset;
struct HashSet_1_IAttackable_;
struct HashSet_1_Moon_Entity_;
struct SeinBashAttack__Fields {
    struct CharacterState__Fields _;
    struct GameObject* BashAttackGamePrefab;
    float BashVelocity;
    float ThrowForce;
    float EnemyThrowForce;
    float DelayTillNextBash;
    float DelayTillGlide;
    float DelayTillSpiritLeash;
    struct AnimationCurve* FrictionCurve;
    float FrictionDuration;
    float NoAirDecelerationDuration;
    float Range;
    float BashedProjectileDamageMultiplier;
    float AllowTurnNormalizedTimeLowerThreshold;
    float AllowTurnNormalizedTimeUpperThreshold;
    struct IBashAttackable* Target;
    struct IBashAttackable* m_potentialFutureTarget;
    bool LookForFutureTargets;
    struct Vector3 m_directionToTarget;
    float m_bashAngle;
    struct Vector3 m_playerTargetPosition;
    struct BashAttackGame* m_bashAttackGame;
    float m_frictionTimeRemaining;
    struct IBashAttackable* m_lastTarget;
    struct Transform* m_seinTransform;
    bool m_spriteMirrorLock;
    float m_timeRemainingTillNextBash;
    float m_timeRemainingTillGlideAllowed;
    float m_timeRemainingTillSpiritLeashAllowed;
    float m_timeRemainingOfBashButtonPress;
    float m_timeSinceBash;
    struct HashSet_1_Moon_ISuspendable_* m_bashSuspendables;
    struct ActiveAnimationHandle m_jumpActiveAnimation;
    struct ActiveAnimationHandle m_jumpTurnActiveAnimation;
    struct MoonAnimation__Array* m_lastJumpSet;
    int32_t m_lastJumpIndex;
    bool IsBashing;
    struct SeinBashVersionAsset* BashVersionAsset;
    float m_bashThroughEnemiesRemainingTime;
    struct HashSet_1_IAttackable_* m_enemiesBashedThrough;
    struct HashSet_1_Moon_Entity_* m_entitiesBashedThrough;
    bool m_hasStarted;
    float BackFlipSpeed;
    bool m_usingJumpToBash;
    float m_jumpBashHoldRemaining;
    float m_timeSinceJump;
    float HoldJumpToBashTime;
    float HoldJumpToBashPadding;
    float HoldJumpTimeUntilBashOverride;
    float DoubleTapJumpWindow;
    float GlideIgnoreBashTime;
    float HoldUpAngleRange;
    bool m_fromGround;
    float m_holdAirTime;
    struct Guid _AttackableConsumerID_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBashAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinBashAttack__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BashAttackGame.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_IAttackable_.h>
#include <Modloader/app/structs/HashSet_1_Moon_Entity_.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/IBashAttackable.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/SeinBashVersionAsset.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinBashAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBashAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBashAttack__Fields_FWDDECL)
#include <Modloader/app/structs/SeinBashAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBashAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
