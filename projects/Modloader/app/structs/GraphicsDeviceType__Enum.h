#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GraphicsDeviceType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GraphicsDeviceType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicsDeviceType__Enum_DEFINED)
#define IL2CPP_STRUCT_GraphicsDeviceType__Enum_DEFINED
enum class GraphicsDeviceType__Enum : int32_t {
    OpenGL2 = 0x00000000,
    Direct3D9 = 0x00000001,
    Direct3D11 = 0x00000002,
    PlayStation3 = 0x00000003,
    Null = 0x00000004,
    Xbox360 = 0x00000006,
    OpenGLES2 = 0x00000008,
    OpenGLES3 = 0x0000000b,
    PlayStationVita = 0x0000000c,
    PlayStation4 = 0x0000000d,
    XboxOne = 0x0000000e,
    PlayStationMobile = 0x0000000f,
    Metal = 0x00000010,
    OpenGLCore = 0x00000011,
    Direct3D12 = 0x00000012,
    N3DS = 0x00000013,
    Vulkan = 0x00000015,
    Switch = 0x00000016,
    XboxOneD3D12 = 0x00000017,
};
#endif
#if !defined(IL2CPP_STRUCT_GraphicsDeviceType__Enum_FWDDECL)
#define IL2CPP_STRUCT_GraphicsDeviceType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GraphicsDeviceType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GraphicsDeviceType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GraphicsDeviceType__Enum_FWDDECL)
#include <Modloader/app/structs/GraphicsDeviceType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GraphicsDeviceType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
