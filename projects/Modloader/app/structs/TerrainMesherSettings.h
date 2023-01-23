#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TerrainMesherSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TerrainMesherSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainMesherSettings_DEFINED)
#define IL2CPP_STRUCT_TerrainMesherSettings_DEFINED
struct TerrainMesherSettings {
    int32_t AdaptiveSubdivisionSampleCount;
    int32_t AdaptiveSubdivisionMaxDepth;
    float AdaptiveSubdivisionThreshold;
    float AdaptiveSubidivisionMinEdgeSize;
};
#endif
#if !defined(IL2CPP_STRUCT_TerrainMesherSettings_FWDDECL)
#define IL2CPP_STRUCT_TerrainMesherSettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_TerrainMesherSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_TerrainMesherSettings_DEFINED) && !defined(IL2CPP_STRUCT_TerrainMesherSettings_FWDDECL)
#include <Modloader/app/structs/TerrainMesherSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TerrainMesherSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
