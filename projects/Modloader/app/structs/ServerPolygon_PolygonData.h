#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerPolygon_PolygonData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerPolygon_PolygonData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPolygon_PolygonData_DEFINED)
#include <Modloader/app/structs/ServerPhysicalMaterial_PhysicalMaterialData.h>
#if defined(IL2CPP_STRUCT_ServerPhysicalMaterial_PhysicalMaterialData_DEFINED)
#define IL2CPP_STRUCT_ServerPolygon_PolygonData_DEFINED
struct String;
struct ServerPolygon_PolygonData {
    struct String* BaseData;
    struct ServerPhysicalMaterial_PhysicalMaterialData PhysicMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerPolygon_PolygonData_FWDDECL)
#define IL2CPP_STRUCT_ServerPolygon_PolygonData_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ServerPolygon_PolygonData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerPolygon_PolygonData_DEFINED) && !defined(IL2CPP_STRUCT_ServerPolygon_PolygonData_FWDDECL)
#include <Modloader/app/structs/ServerPolygon_PolygonData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerPolygon_PolygonData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
