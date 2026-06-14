#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendMode__Enum_DEFINED)
#define IL2CPP_STRUCT_BlendMode__Enum_DEFINED
enum class BlendMode__Enum : int32_t {
    Zero = 0x00000000,
    One = 0x00000001,
    DstColor = 0x00000002,
    SrcColor = 0x00000003,
    OneMinusDstColor = 0x00000004,
    SrcAlpha = 0x00000005,
    OneMinusSrcColor = 0x00000006,
    DstAlpha = 0x00000007,
    OneMinusDstAlpha = 0x00000008,
    SrcAlphaSaturate = 0x00000009,
    OneMinusSrcAlpha = 0x0000000a,
};
#endif
#if !defined(IL2CPP_STRUCT_BlendMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_BlendMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BlendMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BlendMode__Enum_FWDDECL)
#include <Modloader/app/structs/BlendMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
