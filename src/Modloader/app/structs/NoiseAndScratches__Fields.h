#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoiseAndScratches__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoiseAndScratches__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoiseAndScratches__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_NoiseAndScratches__Fields_DEFINED
struct Texture;
struct Shader;
struct Material;
struct NoiseAndScratches__Fields {
    struct MonoBehaviour__Fields _;
    bool monochrome;
    bool rgbFallback;
    float grainIntensityMin;
    float grainIntensityMax;
    float grainSize;
    float scratchIntensityMin;
    float scratchIntensityMax;
    float scratchFPS;
    float scratchJitter;
    struct Texture* grainTexture;
    struct Texture* scratchTexture;
    struct Shader* shaderRGB;
    struct Shader* shaderYUV;
    struct Material* m_MaterialRGB;
    struct Material* m_MaterialYUV;
    float scratchTimeLeft;
    float scratchX;
    float scratchY;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoiseAndScratches__Fields_FWDDECL)
#define IL2CPP_STRUCT_NoiseAndScratches__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture.h>
#endif
#undef IL2CPP_STRUCT_NoiseAndScratches__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoiseAndScratches__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NoiseAndScratches__Fields_FWDDECL)
#include <Modloader/app/structs/NoiseAndScratches__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoiseAndScratches__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
