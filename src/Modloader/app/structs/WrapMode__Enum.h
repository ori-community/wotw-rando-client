#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WrapMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WrapMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WrapMode__Enum_DEFINED)
#define IL2CPP_STRUCT_WrapMode__Enum_DEFINED
enum class WrapMode__Enum : int32_t {
    Once = 0x00000001,
    Loop = 0x00000002,
    PingPong = 0x00000004,
    Default = 0x00000000,
    ClampForever = 0x00000008,
    Clamp = 0x00000001,
};
#endif
#if !defined(IL2CPP_STRUCT_WrapMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_WrapMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_WrapMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_WrapMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_WrapMode__Enum_FWDDECL)
#include <Modloader/app/structs/WrapMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WrapMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
