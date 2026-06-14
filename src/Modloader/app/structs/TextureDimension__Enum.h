#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureDimension__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureDimension__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureDimension__Enum_DEFINED)
#define IL2CPP_STRUCT_TextureDimension__Enum_DEFINED
enum class TextureDimension__Enum : int32_t {
    Unknown = -1,
    None = 0x00000000,
    Any = 0x00000001,
    Tex2D = 0x00000002,
    Tex3D = 0x00000003,
    Cube = 0x00000004,
    Tex2DArray = 0x00000005,
    CubeArray = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_TextureDimension__Enum_FWDDECL)
#define IL2CPP_STRUCT_TextureDimension__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TextureDimension__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureDimension__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TextureDimension__Enum_FWDDECL)
#include <Modloader/app/structs/TextureDimension__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureDimension__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
