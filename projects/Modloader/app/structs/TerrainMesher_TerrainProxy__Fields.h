#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainMesher_TerrainProxy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainMesher_TerrainProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainMesher_TerrainProxy__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TerrainMesher_TerrainProxy__Fields_DEFINED
struct TerrainData;
struct __declspec(align(8)) TerrainMesher_TerrainProxy__Fields {
    struct TerrainData* m_terrainData;
    struct Vector3 m_bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TerrainMesher_TerrainProxy__Fields_FWDDECL)
#define IL2CPP_STRUCT_TerrainMesher_TerrainProxy__Fields_FWDDECL
#include <Modloader/app/structs/TerrainData.h>
#endif
#undef IL2CPP_STRUCT_TerrainMesher_TerrainProxy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainMesher_TerrainProxy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TerrainMesher_TerrainProxy__Fields_FWDDECL)
#include <Modloader/app/structs/TerrainMesher_TerrainProxy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainMesher_TerrainProxy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
