#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightBerry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightBerry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightBerry__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_NightBerry__Fields_DEFINED
struct SoundSource;
struct AnimationCurve;
struct Varying2DSoundProvider;
struct Transform;
struct Rigidbody;
struct Collider;
struct CarryableRigidBody;
struct ParticleSystem__Array;
struct NightBerry__Fields {
    struct SaveSerialize__Fields _;
    float OuterRadius;
    float InnerRadius;
    struct SoundSource* ShrinkSound;
    struct SoundSource* GrowSound;
    struct AnimationCurve* ForceOverDistance;
    struct AnimationCurve* DragOverDistance;
    float ActivateChaseRange;
    float StopChaseRange;
    float StartChaseRange;
    float StopChaseVelocity;
    struct Varying2DSoundProvider* OnChaseSound;
    struct Transform* Ring;
    bool m_isChasing;
    bool m_canChase;
    struct Transform* m_transform;
    struct Rigidbody* m_rigidbody;
    struct Collider* m_collider;
    struct CarryableRigidBody* m_carryable;
    float m_spiritRingSpeed;
    float SpiritRingRadius;
    float m_spiritRingRadiusMultiplier;
    struct ParticleSystem__Array* Particles;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightBerry__Fields_FWDDECL)
#define IL2CPP_STRUCT_NightBerry__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/CarryableRigidBody.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/ParticleSystem__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_NightBerry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightBerry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NightBerry__Fields_FWDDECL)
#include <Modloader/app/structs/NightBerry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightBerry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
