#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_NightVisionFX__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_NightVisionFX__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_NightVisionFX__Fields_DEFINED)
#include <Modloader/app/structs/CameraFilterPack_NightVisionFX_preset__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CameraFilterPack_NightVisionFX_preset__Enum_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_NightVisionFX__Fields_DEFINED
struct Shader;
struct Material;
struct CameraFilterPack_NightVisionFX__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    CameraFilterPack_NightVisionFX_preset__Enum Preset;

    CameraFilterPack_NightVisionFX_preset__Enum PresetMemo;

    float TimeX;
    struct Material* SCMaterial;
    float OnOff;
    float Greenness;
    float Vignette;
    float Vignette_Alpha;
    float Distortion;
    float Noise;
    float Intensity;
    float Light;
    float Light2;
    float Line;
    float Color_R;
    float Color_G;
    float Color_B;
    float _Binocular_Size;
    float _Binocular_Smooth;
    float _Binocular_Dist;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_NightVisionFX__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_NightVisionFX__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_NightVisionFX__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_NightVisionFX__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_NightVisionFX__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_NightVisionFX__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_NightVisionFX__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
