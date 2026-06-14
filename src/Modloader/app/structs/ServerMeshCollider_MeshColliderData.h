#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerMeshCollider_MeshColliderData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerMeshCollider_MeshColliderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerMeshCollider_MeshColliderData_DEFINED)
#include <Modloader/app/structs/ServerPhysicalMaterial_PhysicalMaterialData.h>
#if defined(IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_DEFINED)
#define IL2CPP_STRUCT_ServerMeshCollider_MeshColliderData_DEFINED
struct List_1_Vector3Ser_;
struct Int32__Array;
struct ServerMeshCollider_MeshColliderData {
    struct List_1_Vector3Ser_* Points;
    struct Int32__Array* Triangles;
    bool IsConvex;
    bool IsTrigger;
    struct ServerPhysicalMaterial_PhysicalMaterialData PhysicMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerMeshCollider_MeshColliderData_FWDDECL)
#define IL2CPP_STRUCT_ServerMeshCollider_MeshColliderData_FWDDECL
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_Vector3Ser_.h>
#endif
#undef IL2CPP_STRUCT_ServerMeshCollider_MeshColliderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerMeshCollider_MeshColliderData_DEFINED) && !defined(IL2CPP_STRUCT_ServerMeshCollider_MeshColliderData_FWDDECL)
#include <Modloader/app/structs/ServerMeshCollider_MeshColliderData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerMeshCollider_MeshColliderData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
