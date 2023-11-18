#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_QualitySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_QualitySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_QualitySettings_DEFINED)
#define IL2CPP_STRUCT_SMAA_QualitySettings_DEFINED
struct SMAA_QualitySettings {
    bool diagonalDetection;
    bool cornerDetection;
    float threshold;
    float depthThreshold;
    int32_t maxSearchSteps;
    int32_t maxDiagonalSearchSteps;
    int32_t cornerRounding;
    float localContrastAdaptationFactor;
};
#endif
#if !defined(IL2CPP_STRUCT_SMAA_QualitySettings_FWDDECL)
#define IL2CPP_STRUCT_SMAA_QualitySettings_FWDDECL
#endif
#undef IL2CPP_STRUCT_SMAA_QualitySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_QualitySettings_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_QualitySettings_FWDDECL)
#include <Modloader/app/structs/SMAA_QualitySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA_QualitySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
