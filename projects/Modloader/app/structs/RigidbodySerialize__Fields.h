#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodySerialize__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodySerialize__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodySerialize__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_RigidbodySerialize__Fields_DEFINED
struct Rigidbody;
struct RigidbodySerialize__Fields {
    struct SaveSerialize__Fields _;
    bool m_isSuspended;
    struct Rigidbody* m_rigidbody;
    struct Vector3 m_angularVelocity;
    struct Vector3 m_velocity;
    bool SerializePosition;
    bool SerializeRotation;
    bool SerializeVelocity;
    bool SerializeAngularVelocity;
    bool SeriailzeIsKinematic;
    bool SeriailzeMass;
    bool SeriailzeDrag;
    bool SeriailzeAngularDrag;
    bool m_isInitialised;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodySerialize__Fields_FWDDECL)
#define IL2CPP_STRUCT_RigidbodySerialize__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_RigidbodySerialize__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodySerialize__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodySerialize__Fields_FWDDECL)
#include <Modloader/app/structs/RigidbodySerialize__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodySerialize__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
