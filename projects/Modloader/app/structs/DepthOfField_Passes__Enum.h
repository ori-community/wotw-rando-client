#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfField_Passes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfField_Passes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_Passes__Enum_DEFINED)
#define IL2CPP_STRUCT_DepthOfField_Passes__Enum_DEFINED
enum class DepthOfField_Passes__Enum : int32_t {
    BlurAlphaWeighted = 0x00000000,
    BoxBlur = 0x00000001,
    DilateFgCocFromColor = 0x00000002,
    DilateFgCoc = 0x00000003,
    CaptureCocExplicit = 0x00000004,
    VisualizeCocExplicit = 0x00000005,
    CocPrefilter = 0x00000006,
    CircleBlur = 0x00000007,
    CircleBlurWithDilatedFg = 0x00000008,
    CircleBlurLowQuality = 0x00000009,
    CircleBlowLowQualityWithDilatedFg = 0x0000000a,
    MergeExplicit = 0x0000000b,
    ShapeLowQuality = 0x0000000c,
    ShapeLowQualityDilateFg = 0x0000000d,
    ShapeLowQualityMerge = 0x0000000e,
    ShapeLowQualityMergeDilateFg = 0x0000000f,
    ShapeMediumQuality = 0x00000010,
    ShapeMediumQualityDilateFg = 0x00000011,
    ShapeMediumQualityMerge = 0x00000012,
    ShapeMediumQualityMergeDilateFg = 0x00000013,
    ShapeHighQuality = 0x00000014,
    ShapeHighQualityDilateFg = 0x00000015,
    ShapeHighQualityMerge = 0x00000016,
    ShapeHighQualityMergeDilateFg = 0x00000017,
};
#endif
#if !defined(IL2CPP_STRUCT_DepthOfField_Passes__Enum_FWDDECL)
#define IL2CPP_STRUCT_DepthOfField_Passes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DepthOfField_Passes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_Passes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfField_Passes__Enum_FWDDECL)
#include <Modloader/app/structs/DepthOfField_Passes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfField_Passes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
