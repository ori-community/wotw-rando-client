#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicalSoftInteraction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicalSoftInteraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSoftInteraction__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_PhysicalSoftInteraction__Fields_DEFINED
struct Rigidbody;
struct Transform;
struct PhysicalSoftInteraction__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector3 anchor1;
    struct Vector3 anchor2;
    float radius;
    float velocityInteractionForce;
    bool drawGizmo;
    struct Rigidbody* RigidBody;
    struct Transform* m_transform;
    int32_t _Index_k__BackingField;
    bool _IsRegistered_k__BackingField;
    bool _WantsToRegister_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicalSoftInteraction__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicalSoftInteraction__Fields_FWDDECL
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PhysicalSoftInteraction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicalSoftInteraction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicalSoftInteraction__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicalSoftInteraction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicalSoftInteraction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
