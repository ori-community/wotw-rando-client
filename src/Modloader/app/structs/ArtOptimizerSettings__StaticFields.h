#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtOptimizerSettings__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtOptimizerSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizerSettings__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ArtOptimizerSettings__StaticFields_DEFINED
struct List_1_System_Type_;
struct List_1_Moon_ArtOptimization_ResolutionPreset_;
struct ResolutionPreset;
struct ArtOptimizerSettings__StaticFields {
    bool DebugModeEnabled;
    bool InstantLoadScenes;
    bool DontUnloadScenes;
    bool IgnoreZeroEnergySamples;
    bool IgnoreModifiers;
    bool X2CameraSamples;
    float SHADER_SAMPLE_TIME;
    int32_t ANIMATION_SAMPLES;
    struct List_1_System_Type_* s_ignoredTypes;
    struct List_1_Moon_ArtOptimization_ResolutionPreset_* Resolutions;
    struct ResolutionPreset* Resolution;
    int32_t s_resolutionIndex;
};
#endif
#if !defined(IL2CPP_STRUCT_ArtOptimizerSettings__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ArtOptimizerSettings__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_ArtOptimization_ResolutionPreset_.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/ResolutionPreset.h>
#endif
#undef IL2CPP_STRUCT_ArtOptimizerSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtOptimizerSettings__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ArtOptimizerSettings__StaticFields_FWDDECL)
#include <Modloader/app/structs/ArtOptimizerSettings__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtOptimizerSettings__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
