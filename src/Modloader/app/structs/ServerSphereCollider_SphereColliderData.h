#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerSphereCollider_SphereColliderData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerSphereCollider_SphereColliderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSphereCollider_SphereColliderData_DEFINED)
#include <Modloader/app/structs/ServerPhysicalMaterial_PhysicalMaterialData.h>
#if defined(IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_DEFINED)
#define IL2CPP_STRUCT_ServerSphereCollider_SphereColliderData_DEFINED
struct Vector3Ser;
struct ServerSphereCollider_SphereColliderData {
    bool IsTrigger;
    struct ServerPhysicalMaterial_PhysicalMaterialData SPhysicMaterial;
    struct Vector3Ser* Center;
    float Radius;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerSphereCollider_SphereColliderData_FWDDECL)
#define IL2CPP_STRUCT_ServerSphereCollider_SphereColliderData_FWDDECL
#include <Modloader/app/structs/Vector3Ser.h>
#endif
#undef IL2CPP_STRUCT_ServerSphereCollider_SphereColliderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerSphereCollider_SphereColliderData_DEFINED) && !defined(IL2CPP_STRUCT_ServerSphereCollider_SphereColliderData_FWDDECL)
#include <Modloader/app/structs/ServerSphereCollider_SphereColliderData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerSphereCollider_SphereColliderData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
