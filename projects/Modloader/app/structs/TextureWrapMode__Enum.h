#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextureWrapMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextureWrapMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureWrapMode__Enum_DEFINED)
#define IL2CPP_STRUCT_TextureWrapMode__Enum_DEFINED
enum class TextureWrapMode__Enum : int32_t {
    Repeat = 0x00000000,
    Clamp = 0x00000001,
    Mirror = 0x00000002,
    MirrorOnce = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_TextureWrapMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_TextureWrapMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TextureWrapMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextureWrapMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TextureWrapMode__Enum_FWDDECL)
#include <Modloader/app/structs/TextureWrapMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextureWrapMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
