#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion_SSAOSamples__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion_SSAOSamples__Enum_DEFINED)
#define IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion__Fields_DEFINED
struct Shader;
struct Material;
struct Texture2D;
struct ScreenSpaceAmbientOcclusion__Fields {
    struct MonoBehaviour__Fields _;
    float m_Radius;
    ScreenSpaceAmbientOcclusion_SSAOSamples__Enum m_SampleCount;

    float m_OcclusionIntensity;
    int32_t m_Blur;
    int32_t m_Downsampling;
    float m_OcclusionAttenuation;
    float m_MinZ;
    struct Shader* m_SSAOShader;
    struct Material* m_SSAOMaterial;
    struct Texture2D* m_RandomTexture;
    bool m_Supported;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenSpaceAmbientOcclusion__Fields_FWDDECL)
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenSpaceAmbientOcclusion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
