#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestSpiderColliderManager_ColliderHolder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestSpiderColliderManager_ColliderHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSpiderColliderManager_ColliderHolder__Fields_DEFINED)
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_TestSpiderColliderManager_ColliderHolder__Fields_DEFINED
struct Collider;
struct Transform;
struct Rigidbody;
struct __declspec(align(8)) TestSpiderColliderManager_ColliderHolder__Fields {
    struct Collider* collider;
    struct Transform* parent;
    struct Vector3 anchor;
    struct Quaternion rotation;
    struct Rigidbody* rigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestSpiderColliderManager_ColliderHolder__Fields_FWDDECL)
#define IL2CPP_STRUCT_TestSpiderColliderManager_ColliderHolder__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_TestSpiderColliderManager_ColliderHolder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestSpiderColliderManager_ColliderHolder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TestSpiderColliderManager_ColliderHolder__Fields_FWDDECL)
#include <Modloader/app/structs/TestSpiderColliderManager_ColliderHolder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestSpiderColliderManager_ColliderHolder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
