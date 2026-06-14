#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderTextureDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderTextureDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTextureDescriptor_DEFINED)
#include <Modloader/app/structs/RenderTextureCreationFlags__Enum.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/RenderTextureMemoryless__Enum.h>
#include <Modloader/app/structs/ShadowSamplingMode__Enum.h>
#include <Modloader/app/structs/TextureDimension__Enum.h>
#include <Modloader/app/structs/VRTextureUsage__Enum.h>
#if defined(IL2CPP_STRUCT_RenderTextureFormat__Enum_DEFINED) && defined(IL2CPP_STRUCT_TextureDimension__Enum_DEFINED) && defined(IL2CPP_STRUCT_ShadowSamplingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_VRTextureUsage__Enum_DEFINED) && defined(IL2CPP_STRUCT_RenderTextureCreationFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_RenderTextureMemoryless__Enum_DEFINED)
#define IL2CPP_STRUCT_RenderTextureDescriptor_DEFINED
struct RenderTextureDescriptor {
    int32_t _width_k__BackingField;
    int32_t _height_k__BackingField;
    int32_t _msaaSamples_k__BackingField;
    int32_t _volumeDepth_k__BackingField;
    RenderTextureFormat__Enum _colorFormat_k__BackingField;

    int32_t _depthBufferBits;
    TextureDimension__Enum _dimension_k__BackingField;

    ShadowSamplingMode__Enum _shadowSamplingMode_k__BackingField;

    VRTextureUsage__Enum _vrUsage_k__BackingField;

    RenderTextureCreationFlags__Enum _flags;

    RenderTextureMemoryless__Enum _memoryless_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderTextureDescriptor_FWDDECL)
#define IL2CPP_STRUCT_RenderTextureDescriptor_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderTextureDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTextureDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_RenderTextureDescriptor_FWDDECL)
#include <Modloader/app/structs/RenderTextureDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderTextureDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
