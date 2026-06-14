#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplyTurbulentForce__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplyTurbulentForce__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyTurbulentForce__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ApplyTurbulentForce__Fields_DEFINED
struct Rigidbody;
struct ApplyTurbulentForce__Fields {
    struct MonoBehaviour__Fields _;
    bool IsManagedByPhysicsSystemManager;
    struct Vector3 ForceMultiplier;
    float TurbulenceFrequency;
    float TurbulenceMagnitude;
    float TurbulenceOffset;
    struct Rigidbody* m_rigidBody;
    struct Vector3 m_initialPosition;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplyTurbulentForce__Fields_FWDDECL)
#define IL2CPP_STRUCT_ApplyTurbulentForce__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_ApplyTurbulentForce__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyTurbulentForce__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ApplyTurbulentForce__Fields_FWDDECL)
#include <Modloader/app/structs/ApplyTurbulentForce__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplyTurbulentForce__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
