#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA__Fields_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/SMAA_GlobalSettings.h>
#include <Modloader/app/structs/SMAA_PredicationSettings.h>
#include <Modloader/app/structs/SMAA_QualitySettings.h>
#include <Modloader/app/structs/SMAA_TemporalSettings.h>
#if defined(IL2CPP_STRUCT_SMAA_GlobalSettings_DEFINED) && defined(IL2CPP_STRUCT_SMAA_QualitySettings_DEFINED) && defined(IL2CPP_STRUCT_SMAA_PredicationSettings_DEFINED) && defined(IL2CPP_STRUCT_SMAA_TemporalSettings_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_SMAA__Fields_DEFINED
struct RenderTexture;
struct Shader;
struct Texture2D;
struct Material;
struct __declspec(align(8)) SMAA__Fields {
    struct SMAA_GlobalSettings settings;
    struct SMAA_QualitySettings quality;
    struct SMAA_PredicationSettings predication;
    struct SMAA_TemporalSettings temporal;
    struct Matrix4x4 m_ProjectionMatrix;
    struct Matrix4x4 m_PreviousViewProjectionMatrix;
    float m_FlipFlop;
    struct RenderTexture* m_Accumulation;
    struct Shader* m_Shader;
    struct Texture2D* m_AreaTexture;
    struct Texture2D* m_SearchTexture;
    struct Material* m_Material;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SMAA__Fields_FWDDECL)
#define IL2CPP_STRUCT_SMAA__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_SMAA__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SMAA__Fields_FWDDECL)
#include <Modloader/app/structs/SMAA__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
