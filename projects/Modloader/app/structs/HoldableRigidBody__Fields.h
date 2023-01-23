#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HoldableRigidBody__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HoldableRigidBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoldableRigidBody__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_HoldableRigidBody__Fields_DEFINED
struct MessageProvider;
struct MessageBox;
struct Varying2DSoundProvider;
struct Collider;
struct Transform;
struct Renderer;
struct AnimationCurve;
struct Rigidbody;
struct HoldableRigidBody__Fields {
    struct MonoBehaviour__Fields _;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct MessageProvider* PickupMessage;
    struct MessageBox* m_message;
    float m_timeNotToShowMessage;
    struct Varying2DSoundProvider* OnPickUpSoundProvider;
    struct Varying2DSoundProvider* OnPutDownSoundProvider;
    struct Varying2DSoundProvider* OnHitGroundSoundProvider;
    struct LayerMask RaycastLayerMask;
    float LiftUpForDrop;
    struct Collider* Collider;
    struct Transform* DropTranform;
    struct Renderer* Renderer;
    struct AnimationCurve* MultiplyColorCurve;
    float OriNearDistanceThreshold;
    struct Rigidbody* m_rigidbody;
    struct Transform* m_transform;
    struct Vector3 m_initialScale;
    bool m_isHeld;
    float m_multiplyCurveTime;
    bool m_keepKinematicTriggerOnDrop;
    bool m_canBeHeld;
    bool m_canBeDropped;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HoldableRigidBody__Fields_FWDDECL)
#define IL2CPP_STRUCT_HoldableRigidBody__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_HoldableRigidBody__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HoldableRigidBody__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HoldableRigidBody__Fields_FWDDECL)
#include <Modloader/app/structs/HoldableRigidBody__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HoldableRigidBody__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
