#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerBoxCollider_BoxColliderData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerBoxCollider_BoxColliderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerBoxCollider_BoxColliderData_DEFINED)
#include <Modloader/app/structs/ServerPhysicalMaterial_PhysicalMaterialData.h>
#if defined(IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_DEFINED)
#define IL2CPP_STRUCT_ServerBoxCollider_BoxColliderData_DEFINED
struct Vector3Ser;
struct ServerBoxCollider_BoxColliderData {
    bool IsTrigger;
    struct ServerPhysicalMaterial_PhysicalMaterialData SPhysicMaterial;
    struct Vector3Ser* Center;
    struct Vector3Ser* Size;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerBoxCollider_BoxColliderData_FWDDECL)
#define IL2CPP_STRUCT_ServerBoxCollider_BoxColliderData_FWDDECL
#include <Modloader/app/structs/Vector3Ser.h>
#endif
#undef IL2CPP_STRUCT_ServerBoxCollider_BoxColliderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerBoxCollider_BoxColliderData_DEFINED) && !defined(IL2CPP_STRUCT_ServerBoxCollider_BoxColliderData_FWDDECL)
#include <Modloader/app/structs/ServerBoxCollider_BoxColliderData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerBoxCollider_BoxColliderData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
