#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Antialiasing__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Antialiasing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Antialiasing__Fields_DEFINED)
#include <Modloader/app/structs/AAMode__Enum.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_AAMode__Enum_DEFINED)
#define IL2CPP_STRUCT_Antialiasing__Fields_DEFINED
struct Shader;
struct Material;
struct Antialiasing__Fields {
    struct PostEffectsBase__Fields _;
    AAMode__Enum mode;

    bool showGeneratedNormals;
    float offsetScale;
    float blurRadius;
    float edgeThresholdMin;
    float edgeThreshold;
    float edgeSharpness;
    bool dlaaSharp;
    struct Shader* ssaaShader;
    struct Material* ssaa;
    struct Shader* dlaaShader;
    struct Material* dlaa;
    struct Shader* nfaaShader;
    struct Material* nfaa;
    struct Shader* shaderFXAAPreset2;
    struct Material* materialFXAAPreset2;
    struct Shader* shaderFXAAPreset3;
    struct Material* materialFXAAPreset3;
    struct Shader* shaderFXAAII;
    struct Material* materialFXAAII;
    struct Shader* shaderFXAAIII;
    struct Material* materialFXAAIII;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Antialiasing__Fields_FWDDECL)
#define IL2CPP_STRUCT_Antialiasing__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_Antialiasing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Antialiasing__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Antialiasing__Fields_FWDDECL)
#include <Modloader/app/structs/Antialiasing__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Antialiasing__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AntiAliasing__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AntiAliasing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AntiAliasing__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AntiAliasing__Fields_DEFINED
struct SMAA;
struct FXAA;
struct Camera;
struct AntiAliasing__Fields {
    struct MonoBehaviour__Fields _;
    struct SMAA* m_SMAA;
    struct FXAA* m_FXAA;
    int32_t m_Method;
    struct Camera* m_Camera;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AntiAliasing__Fields_FWDDECL)
#define IL2CPP_STRUCT_AntiAliasing__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/FXAA.h>
#include <Modloader/app/structs/SMAA.h>
#endif
#undef IL2CPP_STRUCT_AntiAliasing__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AntiAliasing__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AntiAliasing__Fields_FWDDECL)
#include <Modloader/app/structs/AntiAliasing__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AntiAliasing__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
