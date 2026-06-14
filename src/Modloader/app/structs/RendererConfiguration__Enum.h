#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RendererConfiguration__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RendererConfiguration__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RendererConfiguration__Enum_DEFINED)
#define IL2CPP_STRUCT_RendererConfiguration__Enum_DEFINED
enum class RendererConfiguration__Enum : int32_t {
    None = 0x00000000,
    PerObjectLightProbe = 0x00000001,
    PerObjectReflectionProbes = 0x00000002,
    PerObjectLightProbeProxyVolume = 0x00000004,
    PerObjectLightmaps = 0x00000008,
    ProvideLightIndices = 0x00000010,
    PerObjectMotionVectors = 0x00000020,
    PerObjectLightIndices8 = 0x00000040,
    ProvideReflectionProbeIndices = 0x00000080,
    PerObjectOcclusionProbe = 0x00000100,
    PerObjectOcclusionProbeProxyVolume = 0x00000200,
    PerObjectShadowMask = 0x00000400,
};
#endif
#if !defined(IL2CPP_STRUCT_RendererConfiguration__Enum_FWDDECL)
#define IL2CPP_STRUCT_RendererConfiguration__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RendererConfiguration__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RendererConfiguration__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RendererConfiguration__Enum_FWDDECL)
#include <Modloader/app/structs/RendererConfiguration__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RendererConfiguration__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
