#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_DEFINED)
#include <Modloader/app/structs/PhysicMaterialCombine__Enum.h>
#if defined(IL2CPP_STRUCT_PhysicMaterialCombine__Enum_DEFINED)
#define IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_DEFINED
struct ServerPhysicalMaterial_PhysicalMaterialData {
    float DynamicFriction;
    float StaticFriction;
    float Bounciness;
    PhysicMaterialCombine__Enum FrictionCombine;

    PhysicMaterialCombine__Enum BounceCombine;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_FWDDECL)
#define IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_FWDDECL
#endif
#undef IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_DEFINED) && !defined(IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_FWDDECL)
#include <Modloader/app/structs/ServerPhysicalMaterial_PhysicalMaterialData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerPhysicalMaterial_PhysicalMaterialData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
