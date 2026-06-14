#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainMesherData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainMesherData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainMesherData_DEFINED)
#include <Modloader/app/structs/TerrainMesherSettings.h>
#if defined(IL2CPP_STRUCT_TerrainMesherSettings_DEFINED)
#define IL2CPP_STRUCT_TerrainMesherData_DEFINED
struct Terrain;
struct List_1_UnityEngine_Vector3_;
struct List_1_System_Int32_;
struct TerrainMesherData {
    struct TerrainMesherSettings Settings;
    struct Terrain* Terrain;
    struct List_1_UnityEngine_Vector3_* Vertices;
    struct List_1_System_Int32_* TriangleIndices;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TerrainMesherData_FWDDECL)
#define IL2CPP_STRUCT_TerrainMesherData_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Terrain.h>
#endif
#undef IL2CPP_STRUCT_TerrainMesherData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainMesherData_DEFINED) && !defined(IL2CPP_STRUCT_TerrainMesherData_FWDDECL)
#include <Modloader/app/structs/TerrainMesherData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainMesherData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
