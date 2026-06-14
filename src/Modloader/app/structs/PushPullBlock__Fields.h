#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PushPullBlock__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PushPullBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushPullBlock__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED)
#define IL2CPP_STRUCT_PushPullBlock__Fields_DEFINED
struct Rigidbody;
struct PhysicMaterial;
struct LegacyAnimator__Array;
struct SoundSource;
struct Transform;
struct Collider__Array;
struct CollisionSoundSource;
struct BaseAnimator;
struct ActionMethod;
struct Action;
struct IPressurePlate;
struct IDamageReciever__Array;
struct PushPullBlock__Fields {
    struct MonoBehaviour__Fields _;
    bool TakesDamage;
    struct Rigidbody* m_rigidbody;
    struct Vector3 m_originalPosition;
    struct PhysicMaterial* PushPullMaterial;
    struct PhysicMaterial* PushPullMaterialMoving;
    float m_ignoreCollisionRemainingTime;
    struct LegacyAnimator__Array* HighlightAnimators;
    struct SoundSource* HighlightSound;
    struct SoundSource* DehighlightSound;
    bool StrongFrictionWhenReleased;
    float WindMultiplier;
    struct Transform* m_transform;
    struct Collider__Array* m_colliders;
    struct CollisionSoundSource* m_collisionSoundSource;
    struct BaseAnimator* BashHighlight;
    int32_t BashAttackPriority;
    bool KeepAwake;
    int32_t m_angleFixHack;
    bool IsBashable;
    struct ActionMethod* OnBashAction;
    bool CanTeleport;
    float MoveSpeedMultiplier;
    bool CollideWithPlayer;
    bool ManagedByPhysicsManager;
    bool _IsGrabbed_k__BackingField;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;

    bool ForceDontRegisterWithSuspensionManager;
    bool m_hasRegisteredWithSuspensionManager;
    bool m_previousCollideWithPlayer;
    struct Action* OnBashEvent;
    struct IPressurePlate* m_pressurePlate;
    struct TrackingExclusions _TrackingExclusions_k__BackingField;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PushPullBlock__Fields_FWDDECL)
#define IL2CPP_STRUCT_PushPullBlock__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/CollisionSoundSource.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IPressurePlate.h>
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/PhysicMaterial.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PushPullBlock__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushPullBlock__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PushPullBlock__Fields_FWDDECL)
#include <Modloader/app/structs/PushPullBlock__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PushPullBlock__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
