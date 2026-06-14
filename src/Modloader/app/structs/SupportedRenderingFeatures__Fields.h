#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SupportedRenderingFeatures__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SupportedRenderingFeatures__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SupportedRenderingFeatures__Fields_DEFINED)
#include <Modloader/app/structs/LightmapBakeType__Enum.h>
#include <Modloader/app/structs/LightmapsMode__Enum.h>
#include <Modloader/app/structs/SupportedRenderingFeatures_LightmapMixedBakeMode__Enum.h>
#include <Modloader/app/structs/SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum.h>
#if defined(IL2CPP_STRUCT_SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_SupportedRenderingFeatures_LightmapMixedBakeMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_LightmapBakeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_LightmapsMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SupportedRenderingFeatures__Fields_DEFINED
struct __declspec(align(8)) SupportedRenderingFeatures__Fields {
    SupportedRenderingFeatures_ReflectionProbeSupportFlags__Enum _reflectionProbeSupportFlags_k__BackingField;

    SupportedRenderingFeatures_LightmapMixedBakeMode__Enum _defaultMixedLightingMode_k__BackingField;

    SupportedRenderingFeatures_LightmapMixedBakeMode__Enum _supportedMixedLightingModes_k__BackingField;

    LightmapBakeType__Enum _supportedLightmapBakeTypes_k__BackingField;

    LightmapsMode__Enum _supportedLightmapsModes_k__BackingField;

    bool _rendererSupportsLightProbeProxyVolumes_k__BackingField;
    bool _rendererSupportsMotionVectors_k__BackingField;
    bool _rendererSupportsReceiveShadows_k__BackingField;
    bool _rendererSupportsReflectionProbes_k__BackingField;
    bool _rendererSupportsRendererPriority_k__BackingField;
    bool _rendererOverridesEnvironmentLighting_k__BackingField;
    bool _rendererOverridesFog_k__BackingField;
    bool _rendererOverridesOtherLightingSettings_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SupportedRenderingFeatures__Fields_FWDDECL)
#define IL2CPP_STRUCT_SupportedRenderingFeatures__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SupportedRenderingFeatures__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SupportedRenderingFeatures__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SupportedRenderingFeatures__Fields_FWDDECL)
#include <Modloader/app/structs/SupportedRenderingFeatures__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SupportedRenderingFeatures__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
