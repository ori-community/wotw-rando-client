#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyState__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_RigidbodyState__Fields_DEFINED
struct Rigidbody;
struct GoThroughPlatform;
struct RigidbodyInertiaModifier;
struct ConfigurableJoint__Array;
struct __declspec(align(8)) RigidbodyState__Fields {
    struct Rigidbody* Rigidbody;
    struct GoThroughPlatform* m_goThrough;
    bool m_hasGoThorugh;
    bool m_GoThorughCached;
    bool Active;
    struct Vector3 OriginalPosition;
    struct Quaternion OriginalRotation;
    int32_t Layer;
    bool UseGravity;
    bool wasKinematic;
    bool LockPosition;
    bool LockRotation;
    float Mass;
    float Drag;
    float AngularDrag;
    bool GoThroughDisable;
    struct RigidbodyInertiaModifier* inertiaModifier;
    bool overrideInertia;
    struct Vector3 inertiaTensor;
    int32_t iterations;
    struct ConfigurableJoint__Array* ConfigurableJoints;
    bool ConfigurableJointsInitialized;
    struct Vector3 SuspendVelocity;
    struct Vector3 SuspendAngularVelocity;
    struct Vector3 SuspendPosition;
    bool SuspendPositionSaved;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyState__Fields_FWDDECL
#include <Modloader/app/structs/ConfigurableJoint__Array.h>
#include <Modloader/app/structs/GoThroughPlatform.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/RigidbodyInertiaModifier.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyState__Fields_FWDDECL)
#include <Modloader/app/structs/RigidbodyState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
