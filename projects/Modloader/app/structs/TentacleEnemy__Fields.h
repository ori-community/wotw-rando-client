#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy__Fields_DEFINED)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#if defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleEnemy__Fields_DEFINED
struct TentacleEnemy_StatesHolder;
struct LineRenderer;
struct DamageTextSpawner;
struct LegacyMaterialColorGradientAnimator;
struct GameObject;
struct SoundProvider;
struct Transform;
struct TentacleHead;
struct CapsuleCollider__Array;
struct DamageDealer__Array;
struct VerletBody;
struct List_1_TentacleEnemy_Joint_;
struct TentacleEnemy_HeadRecoilData;
struct TentacleEnemy_WiggleData;
struct Vector3__Array;
struct TentacleEnemy__Fields {
    struct Enemy2D__Fields _;
    struct TentacleEnemy_StatesHolder* States;
    struct LineRenderer* Renderer;
    struct DamageTextSpawner* DamageTextSpawner;
    struct LegacyMaterialColorGradientAnimator* HurtColorAnimator;
    struct GameObject* HeadHitEffect;
    struct SoundProvider* DeathSound;
    struct Transform* Base;
    struct Transform* Head;
    struct TentacleHead* HeadSprite;
    float SpeedMultiplier;
    float AttackSpeedMultiplier;
    float Damping;
    float Stiffness;
    float HeadMass;
    float AttackDelay;
    float SpitAttackDelay;
    float SpitToMeleeDelay;
    float SlashEvadeProbability;
    float SeekDistance;
    float AttackDistance;
    float SpitAttackDistance;
    float Gravity;
    float HorizontalGravity;
    float DamageForceScale;
    float SlashEvadeForceScale;
    float DeathImpulseScale;
    float HeadDamageScale;
    struct CapsuleCollider__Array* HeadColliders;
    struct DamageDealer__Array* HeadDamageDealers;
    bool BodyIsObstacle;
    struct CapsuleCollider__Array* BodyColliders;
    struct DamageDealer__Array* BodyDamageDealers;
    struct VerletBody* m_verletBody;
    struct List_1_TentacleEnemy_Joint_* m_joints;
    float m_length;
    float m_distanceToSein;
    float m_headDistanceToSein;
    bool m_attacking;
    bool m_spitting;
    bool m_holdingOri;
    float m_gravity;
    float m_horizontalGravity;
    float m_timeToNextAttack;
    float m_timeToNextSpit;
    bool m_evadedSlash;
    bool m_dead;
    struct TentacleEnemy_HeadRecoilData* m_headRecoil;
    float m_timeDisabledHeadCollidersLeft;
    struct GameObject* m_lastDamageSender;
    struct TentacleEnemy_WiggleData* m_targetWiggleSettings;
    struct TentacleEnemy_WiggleData* m_currentWiggleSettings;
    struct Vector3__Array* m_tentacleVertices;
    struct Vector3__Array* m_smoothTentacleVertices;
    struct Vector3__Array* m_moreSmoothTentacleVertices;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentacleEnemy__Fields_FWDDECL
#include <Modloader/app/structs/CapsuleCollider__Array.h>
#include <Modloader/app/structs/DamageDealer__Array.h>
#include <Modloader/app/structs/DamageTextSpawner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyMaterialColorGradientAnimator.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/List_1_TentacleEnemy_Joint_.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/TentacleEnemy_HeadRecoilData.h>
#include <Modloader/app/structs/TentacleEnemy_StatesHolder.h>
#include <Modloader/app/structs/TentacleEnemy_WiggleData.h>
#include <Modloader/app/structs/TentacleHead.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/VerletBody.h>
#endif
#undef IL2CPP_STRUCT_TentacleEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentacleEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/TentacleEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
