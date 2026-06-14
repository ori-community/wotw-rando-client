#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodySuspendable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodySuspendable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodySuspendable__Fields_DEFINED)
#include <Modloader/app/structs/CollisionDetectionMode__Enum.h>
#include <Modloader/app/structs/Suspendable__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Suspendable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_CollisionDetectionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_RigidbodySuspendable__Fields_DEFINED
struct Rigidbody;
struct RigidbodySuspendable__Fields {
    struct Suspendable__Fields _;
    struct Rigidbody* m_rigidbody;
    struct Vector3 m_angularVelocity;
    struct Vector3 m_velocity;
    bool m_wasKinematic;
    bool m_isSuspended;
    CollisionDetectionMode__Enum m_collisionMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodySuspendable__Fields_FWDDECL)
#define IL2CPP_STRUCT_RigidbodySuspendable__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_RigidbodySuspendable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodySuspendable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodySuspendable__Fields_FWDDECL)
#include <Modloader/app/structs/RigidbodySuspendable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodySuspendable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
