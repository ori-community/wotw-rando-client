#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderTextureCreationFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderTextureCreationFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTextureCreationFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_RenderTextureCreationFlags__Enum_DEFINED
enum class RenderTextureCreationFlags__Enum : int32_t {
    MipMap = 0x00000001,
    AutoGenerateMips = 0x00000002,
    SRGB = 0x00000004,
    EyeTexture = 0x00000008,
    EnableRandomWrite = 0x00000010,
    CreatedFromScript = 0x00000020,
    AllowVerticalFlip = 0x00000080,
    NoResolvedColorSurface = 0x00000100,
    DynamicallyScalable = 0x00000400,
    BindMS = 0x00000800,
};
#endif
#if !defined(IL2CPP_STRUCT_RenderTextureCreationFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_RenderTextureCreationFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RenderTextureCreationFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTextureCreationFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RenderTextureCreationFlags__Enum_FWDDECL)
#include <Modloader/app/structs/RenderTextureCreationFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderTextureCreationFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
