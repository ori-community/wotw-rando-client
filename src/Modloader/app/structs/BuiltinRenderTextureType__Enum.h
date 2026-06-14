#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuiltinRenderTextureType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuiltinRenderTextureType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuiltinRenderTextureType__Enum_DEFINED)
#define IL2CPP_STRUCT_BuiltinRenderTextureType__Enum_DEFINED
enum class BuiltinRenderTextureType__Enum : int32_t {
    PropertyName = -4,
    BufferPtr = -3,
    RenderTexture = -2,
    BindableTexture = -1,
    None = 0x00000000,
    CurrentActive = 0x00000001,
    CameraTarget = 0x00000002,
    Depth = 0x00000003,
    DepthNormals = 0x00000004,
    ResolvedDepth = 0x00000005,
    PrepassNormalsSpec = 0x00000007,
    PrepassLight = 0x00000008,
    PrepassLightSpec = 0x00000009,
    GBuffer0 = 0x0000000a,
    GBuffer1 = 0x0000000b,
    GBuffer2 = 0x0000000c,
    GBuffer3 = 0x0000000d,
    Reflections = 0x0000000e,
    MotionVectors = 0x0000000f,
    GBuffer4 = 0x00000010,
    GBuffer5 = 0x00000011,
    GBuffer6 = 0x00000012,
    GBuffer7 = 0x00000013,
};
#endif
#if !defined(IL2CPP_STRUCT_BuiltinRenderTextureType__Enum_FWDDECL)
#define IL2CPP_STRUCT_BuiltinRenderTextureType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BuiltinRenderTextureType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuiltinRenderTextureType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BuiltinRenderTextureType__Enum_FWDDECL)
#include <Modloader/app/structs/BuiltinRenderTextureType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuiltinRenderTextureType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
