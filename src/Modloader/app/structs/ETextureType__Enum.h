#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ETextureType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ETextureType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ETextureType__Enum_DEFINED)
#define IL2CPP_STRUCT_ETextureType__Enum_DEFINED
enum class ETextureType__Enum : int32_t {
    DirectX = 0x00000000,
    OpenGL = 0x00000001,
    Vulkan = 0x00000002,
    IOSurface = 0x00000003,
    DirectX12 = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_ETextureType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ETextureType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ETextureType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ETextureType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ETextureType__Enum_FWDDECL)
#include <Modloader/app/structs/ETextureType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ETextureType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
