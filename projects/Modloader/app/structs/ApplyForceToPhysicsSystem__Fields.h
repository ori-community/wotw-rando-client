#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplyForceToPhysicsSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplyForceToPhysicsSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyForceToPhysicsSystem__Fields_DEFINED)
#include <Modloader/app/structs/ApplyForceToPhysicsSystem_ExplosionSettings.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ApplyForceToPhysicsSystem_ExplosionSettings_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ApplyForceToPhysicsSystem__Fields_DEFINED
struct PhysicalSystemManager;
struct Rigidbody;
struct EventTriggerAnimator;
struct FloatAnimator;
struct ApplyForceToPhysicsSystem__Fields {
    struct MonoBehaviour__Fields _;
    struct PhysicalSystemManager* PhysicalSystemManager;
    struct Rigidbody* ApplyToSpecificBody;
    struct EventTriggerAnimator* TimelineTrigger;
    struct FloatAnimator* TimelineForceCurve;
    struct ApplyForceToPhysicsSystem_ExplosionSettings Explosion;
    bool ReverseForceEveryFrameShaking;
    struct Vector3 setVelocity;
    bool m_isSuspended;
    float m_reversing;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplyForceToPhysicsSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_ApplyForceToPhysicsSystem__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FloatAnimator.h>
#include <Modloader/app/structs/PhysicalSystemManager.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_ApplyForceToPhysicsSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyForceToPhysicsSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ApplyForceToPhysicsSystem__Fields_FWDDECL)
#include <Modloader/app/structs/ApplyForceToPhysicsSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplyForceToPhysicsSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
