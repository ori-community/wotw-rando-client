#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraFilterPack_Noise_TV_2__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraFilterPack_Noise_TV_2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Noise_TV_2__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraFilterPack_Noise_TV_2__Fields_DEFINED
struct Shader;
struct Material;
struct Texture2D;
struct CameraFilterPack_Noise_TV_2__Fields {
    struct MonoBehaviour__Fields _;
    struct Shader* SCShader;
    float TimeX;
    struct Material* SCMaterial;
    float Fade;
    float Fade_Additive;
    float Fade_Distortion;
    float Value4;
    struct Texture2D* Texture2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Noise_TV_2__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraFilterPack_Noise_TV_2__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_CameraFilterPack_Noise_TV_2__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraFilterPack_Noise_TV_2__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraFilterPack_Noise_TV_2__Fields_FWDDECL)
#include <Modloader/app/structs/CameraFilterPack_Noise_TV_2__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraFilterPack_Noise_TV_2__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
