#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RagdollUtility_Rigidbone__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RagdollUtility_Rigidbone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RagdollUtility_Rigidbone__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_RagdollUtility_Rigidbone__Fields_DEFINED
struct Rigidbody;
struct Transform;
struct Collider;
struct Joint;
struct __declspec(align(8)) RagdollUtility_Rigidbone__Fields {
    struct Rigidbody* r;
    struct Transform* t;
    struct Collider* collider;
    struct Joint* joint;
    struct Rigidbody* c;
    bool updateAnchor;
    struct Vector3 deltaPosition;
    struct Quaternion deltaRotation;
    float deltaTime;
    struct Vector3 lastPosition;
    struct Quaternion lastRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RagdollUtility_Rigidbone__Fields_FWDDECL)
#define IL2CPP_STRUCT_RagdollUtility_Rigidbone__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Joint.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RagdollUtility_Rigidbone__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RagdollUtility_Rigidbone__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RagdollUtility_Rigidbone__Fields_FWDDECL)
#include <Modloader/app/structs/RagdollUtility_Rigidbone__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RagdollUtility_Rigidbone__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
