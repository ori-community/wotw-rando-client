#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZTest__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZTest__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZTest__Enum_DEFINED)
#define IL2CPP_STRUCT_ZTest__Enum_DEFINED
enum class ZTest__Enum : int32_t {
    Disabled = 0x00000000,
    Never = 0x00000001,
    Less = 0x00000002,
    Equal = 0x00000003,
    LessEqual = 0x00000004,
    Greater = 0x00000005,
    NotEqual = 0x00000006,
    GreaterEqual = 0x00000007,
    Always = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_ZTest__Enum_FWDDECL)
#define IL2CPP_STRUCT_ZTest__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ZTest__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZTest__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ZTest__Enum_FWDDECL)
#include <Modloader/app/structs/ZTest__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZTest__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
