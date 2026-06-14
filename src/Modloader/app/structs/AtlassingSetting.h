#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AtlassingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AtlassingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlassingSetting_DEFINED)
#include <Modloader/app/structs/FilterMode__Enum.h>
#if defined(IL2CPP_STRUCT_FilterMode__Enum_DEFINED)
#define IL2CPP_STRUCT_AtlassingSetting_DEFINED
struct String;
struct AtlassingSetting {
    int32_t ScreenResolutionX;
    int32_t ScreenResolutionY;
    float ZBias;
    float SizeFactor;
    bool DoMipmapping;
    struct String* BuildPath;
    float AnimRes;
    int32_t MaxAtlasSize;
    float SiceDownsampleFactor;
    float LightMaskDownsampleFactor;
    float LightCanvasFarFromCenterDownsampleFactor;
    bool UseSingleAtlasSetForGameplay;
    FilterMode__Enum FilterMode;

    float ContourMeshDetailMultiplier;
    bool HasOwnContourMeshFolder;
    bool PackAtlasesByScreenMode;
    bool UseASTC;
    bool UseScreening;
    bool SeparateLightCanvasesPerScene;
    bool UseHeroAssetAtlases;
    float ExtraZoom;
    int32_t RoundSizeToMultiplesOf;
    int32_t RoundSizeToMultiplesOfCanvas;
    int32_t ClampedSize;
    int32_t ClampedSizeCanvases;
    int32_t ClampedSizeLightMask;
    float VertexMergeDistance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AtlassingSetting_FWDDECL)
#define IL2CPP_STRUCT_AtlassingSetting_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_AtlassingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_AtlassingSetting_DEFINED) && !defined(IL2CPP_STRUCT_AtlassingSetting_FWDDECL)
#include <Modloader/app/structs/AtlassingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AtlassingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
