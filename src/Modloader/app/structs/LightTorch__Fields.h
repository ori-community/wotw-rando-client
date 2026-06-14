#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightTorch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightTorch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightTorch__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LightTorch__Fields_DEFINED
struct GameObject;
struct SoundProvider;
struct SoundSource;
struct BaseAnimator;
struct AnimationCurve;
struct CarryableRigidBody;
struct Collider;
struct Rigidbody;
struct LightTorch__Fields {
    struct SaveSerialize__Fields _;
    struct GameObject* AppearEffect;
    struct GameObject* DisappearEffect;
    struct SoundProvider* AppearSound;
    struct SoundProvider* DisappearSound;
    struct SoundSource* MagicMovementSound;
    struct BaseAnimator* FadeAnimator;
    struct BaseAnimator* TransparencyAnimator;
    struct AnimationCurve* ForceOverDistance;
    struct AnimationCurve* ForceOverTime;
    struct AnimationCurve* DragOverDistance;
    struct AnimationCurve* UpForceOverTime;
    struct AnimationCurve* DeltaOverTime;
    float MinDistance;
    float StopChaseRange;
    float StopChaseVelocity;
    struct GameObject* ParticlesGroup;
    struct GameObject* LightSource;
    struct CarryableRigidBody* m_carryableRigidBody;
    bool m_isChasing;
    struct Collider* m_collider;
    bool m_found;
    int32_t m_check;
    struct Rigidbody* m_rigidbody;
    float m_chaseTime;
    float m_lockFadeAnimatorRemainingTime;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightTorch__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightTorch__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/CarryableRigidBody.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_LightTorch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightTorch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightTorch__Fields_FWDDECL)
#include <Modloader/app/structs/LightTorch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightTorch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
