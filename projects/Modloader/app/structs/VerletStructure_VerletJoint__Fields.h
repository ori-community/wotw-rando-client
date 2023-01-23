#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletStructure_VerletJoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletStructure_VerletJoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletJoint__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_VerletStructure_VerletJoint__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) VerletStructure_VerletJoint__Fields {
    float mass;
    struct Transform* attachmentTranform;
    float attachmentForce;
    float animationForce1;
    struct Vector3 initialPosition;
    struct Vector3 position;
    struct Vector3 oldPosition;
    struct Vector3 attachmentAnchor;
    struct Vector3 attachmentAnchorJob;
    float turbulenceForce;
    float effectiveAttachmentForce;
    struct Vector3 acceleration;
    struct Vector3 velocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletJoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_VerletStructure_VerletJoint__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_VerletStructure_VerletJoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletStructure_VerletJoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VerletStructure_VerletJoint__Fields_FWDDECL)
#include <Modloader/app/structs/VerletStructure_VerletJoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletStructure_VerletJoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
