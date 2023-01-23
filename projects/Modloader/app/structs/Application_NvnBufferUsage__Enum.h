#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Application_NvnBufferUsage__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Application_NvnBufferUsage__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application_NvnBufferUsage__Enum_DEFINED)
#define IL2CPP_STRUCT_Application_NvnBufferUsage__Enum_DEFINED
enum class Application_NvnBufferUsage__Enum : int32_t {
    None = 0x00000000,
    Generic = 0x00000001,
    Texture = 0x00000002,
    TextureCompressible = 0x00000003,
    Shader = 0x00000004,
    RenderTarget = 0x00000005,
    RenderTargetCompressible = 0x00000006,
    LBuffer = 0x00000007,
    GPUScratch = 0x00000008,
    TexturePerm = 0x00000009,
    TextureCompressiblePerm = 0x0000000a,
    ShaderPerm = 0x0000000b,
    RenderTargetPerm = 0x0000000c,
    RenderTargetCompressiblePerm = 0x0000000d,
    Count = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_Application_NvnBufferUsage__Enum_FWDDECL)
#define IL2CPP_STRUCT_Application_NvnBufferUsage__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Application_NvnBufferUsage__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Application_NvnBufferUsage__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Application_NvnBufferUsage__Enum_FWDDECL)
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Application_NvnBufferUsage__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
