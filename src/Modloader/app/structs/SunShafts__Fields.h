#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SunShafts__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SunShafts__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SunShafts__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#include <Modloader/app/structs/SunShafts_ShaftsScreenBlendMode__Enum.h>
#include <Modloader/app/structs/SunShafts_SunShaftsResolution__Enum.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_SunShafts_SunShaftsResolution__Enum_DEFINED) && defined(IL2CPP_STRUCT_SunShafts_ShaftsScreenBlendMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SunShafts__Fields_DEFINED
struct Transform;
struct Shader;
struct Material;
struct SunShafts__Fields {
    struct PostEffectsBase__Fields _;
    SunShafts_SunShaftsResolution__Enum resolution;

    SunShafts_ShaftsScreenBlendMode__Enum screenBlendMode;

    struct Transform* sunTransform;
    int32_t radialBlurIterations;
    struct Color sunColor;
    struct Color sunThreshold;
    float sunShaftBlurRadius;
    float sunShaftIntensity;
    float maxRadius;
    bool useDepthTexture;
    struct Shader* sunShaftsShader;
    struct Material* sunShaftsMaterial;
    struct Shader* simpleClearShader;
    struct Material* simpleClearMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SunShafts__Fields_FWDDECL)
#define IL2CPP_STRUCT_SunShafts__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SunShafts__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SunShafts__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SunShafts__Fields_FWDDECL)
#include <Modloader/app/structs/SunShafts__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SunShafts__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
