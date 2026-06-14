#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlowEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlowEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlowEffect__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_GlowEffect__Fields_DEFINED
struct Shader;
struct Material;
struct GlowEffect__Fields {
    struct MonoBehaviour__Fields _;
    float glowIntensity;
    int32_t blurIterations;
    float blurSpread;
    struct Color glowTint;
    struct Shader* compositeShader;
    struct Material* m_CompositeMaterial;
    struct Shader* blurShader;
    struct Material* m_BlurMaterial;
    struct Shader* downsampleShader;
    struct Material* m_DownsampleMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlowEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_GlowEffect__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_GlowEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlowEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GlowEffect__Fields_FWDDECL)
#include <Modloader/app/structs/GlowEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlowEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
