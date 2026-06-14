#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeadEnemyRagdoll__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeadEnemyRagdoll__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeadEnemyRagdoll__Fields_DEFINED)
#include <Modloader/app/structs/DeadEnemyRagdoll_State__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_DeadEnemyRagdoll_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_DeadEnemyRagdoll__Fields_DEFINED
struct CharacterAnimationSystem;
struct DeadEnemyRagdoll_RagdollAnimations;
struct BaseAnimator;
struct SoundProvider;
struct DeadEnemyRagdoll_EnemyPlumetSettings;
struct GameObject;
struct Transform;
struct CharacterSpriteMirror;
struct Rigidbody;
struct SphereCollider;
struct DeadEnemyRagdoll__Fields {
    struct MonoBehaviour__Fields _;
    struct CharacterAnimationSystem* Animation;
    struct DeadEnemyRagdoll_RagdollAnimations* Animations;
    struct BaseAnimator* FadeOutAnimator;
    struct SoundProvider* HitGroundSoundProvider;
    struct DeadEnemyRagdoll_EnemyPlumetSettings* PlumetSettings;
    struct GameObject* LandOnGroundImpactEffect;
    struct Transform* Sprite;
    struct CharacterSpriteMirror* SpriteMirror;
    bool ExplodeOnGround;
    bool ExplodeUnlessBashed;
    struct GameObject* ExplodeEffect;
    struct Vector3 m_startVelocity;
    struct Vector3 m_gravityVelocity;
    struct Rigidbody* m_rigidbody;
    float m_currentStateTime;
    DeadEnemyRagdoll_State__Enum m_currentState;

    struct Vector3 m_thrownDirection;
    struct Vector3 m_actualVelocity;
    struct SphereCollider* m_sphereCollider;
    float StartSpeed;
    float DamageForceSpeed;
    bool UseRange;
    float DamageForceSpeedMinX;
    float DamageForceSpeedMaxX;
    float DamageForceSpeedMinY;
    float DamageForceSpeedMaxY;
    float DirectionRandomness;
    float BounceMin;
    float BounceMax;
    float BounceX;
    float BounceSpeedThreshold;
    float RayDistance;
    struct LayerMask RayMask;
    bool m_drownAnimationPlaying;
    float m_lifeTime;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    float NoiseScale;
    float NoiseVarScale;
    float BounceGravity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeadEnemyRagdoll__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeadEnemyRagdoll__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/CharacterSpriteMirror.h>
#include <Modloader/app/structs/DeadEnemyRagdoll_EnemyPlumetSettings.h>
#include <Modloader/app/structs/DeadEnemyRagdoll_RagdollAnimations.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DeadEnemyRagdoll__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeadEnemyRagdoll__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeadEnemyRagdoll__Fields_FWDDECL)
#include <Modloader/app/structs/DeadEnemyRagdoll__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeadEnemyRagdoll__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
