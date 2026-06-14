#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeadJumpingSootEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeadJumpingSootEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeadJumpingSootEnemy__Fields_DEFINED)
#include <Modloader/app/structs/DeadJumpingSootEnemy_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DeadJumpingSootEnemy_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_DeadJumpingSootEnemy__Fields_DEFINED
struct CharacterAnimationSystem;
struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations;
struct LegacyAnimator;
struct SoundProvider;
struct AnimationCurve;
struct GameObject;
struct Transform;
struct CharacterSpriteMirror;
struct Rigidbody;
struct DeadJumpingSootEnemy__Fields {
    struct MonoBehaviour__Fields _;
    struct CharacterAnimationSystem* Animation;
    struct DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations* Animations;
    DeadJumpingSootEnemy_State__Enum CurrentState;

    struct LegacyAnimator* FadeOutAnimator;
    float Gravity;
    struct SoundProvider* HitGroundSoundProvider;
    float KnockedBackDuration;
    struct AnimationCurve* KnockedBackGravityCurve;
    struct AnimationCurve* KnockedBackRotationCurve;
    struct AnimationCurve* KnockedBackSpeedCurve;
    struct GameObject* LandOnGroundImpactEffect;
    struct Transform* Sprite;
    struct CharacterSpriteMirror* SpriteMirror;
    struct Vector3 Velocity;
    struct Vector3 m_gravityVelocity;
    struct Rigidbody* m_rigidbody;
    float m_stateCurrentTime;
    struct Transform* m_transform;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Vector3 m_thrownDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeadJumpingSootEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeadJumpingSootEnemy__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/DeadJumpingSootEnemy_DeathJumpingSootEnemyAnimations.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyAnimator.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DeadJumpingSootEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeadJumpingSootEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeadJumpingSootEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/DeadJumpingSootEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeadJumpingSootEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
