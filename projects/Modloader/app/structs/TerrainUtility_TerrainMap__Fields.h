#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainUtility_TerrainMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainUtility_TerrainMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainUtility_TerrainMap__Fields_DEFINED)
#include <Modloader/app/structs/TerrainUtility_TerrainMap_ErrorCode__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_TerrainUtility_TerrainMap_ErrorCode__Enum_DEFINED)
#define IL2CPP_STRUCT_TerrainUtility_TerrainMap__Fields_DEFINED
struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_;
struct __declspec(align(8)) TerrainUtility_TerrainMap__Fields {
    struct Vector3 m_patchSize;
    TerrainUtility_TerrainMap_ErrorCode__Enum m_errorCode;

    struct Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_* m_terrainTiles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TerrainUtility_TerrainMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_TerrainUtility_TerrainMap__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_.h>
#endif
#undef IL2CPP_STRUCT_TerrainUtility_TerrainMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainUtility_TerrainMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TerrainUtility_TerrainMap__Fields_FWDDECL)
#include <Modloader/app/structs/TerrainUtility_TerrainMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainUtility_TerrainMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
