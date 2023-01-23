#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LensAberrations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LensAberrations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations__Fields_DEFINED)
#include <Modloader/app/structs/LensAberrations_ChromaticAberrationSettings.h>
#include <Modloader/app/structs/LensAberrations_DistortionSettings.h>
#include <Modloader/app/structs/LensAberrations_VignetteSettings.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LensAberrations_DistortionSettings_DEFINED) && defined(IL2CPP_STRUCT_LensAberrations_VignetteSettings_DEFINED) && defined(IL2CPP_STRUCT_LensAberrations_ChromaticAberrationSettings_DEFINED)
#define IL2CPP_STRUCT_LensAberrations__Fields_DEFINED
struct Shader;
struct Material;
struct RenderTextureUtility;
struct LensAberrations__Fields {
    struct MonoBehaviour__Fields _;
    struct LensAberrations_DistortionSettings distortion;
    struct LensAberrations_VignetteSettings vignette;
    struct LensAberrations_ChromaticAberrationSettings chromaticAberration;
    struct Shader* m_Shader;
    struct Material* m_Material;
    struct RenderTextureUtility* m_RTU;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LensAberrations__Fields_FWDDECL)
#define IL2CPP_STRUCT_LensAberrations__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTextureUtility.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_LensAberrations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensAberrations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LensAberrations__Fields_FWDDECL)
#include <Modloader/app/structs/LensAberrations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LensAberrations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
