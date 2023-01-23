#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnescapeMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnescapeMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnescapeMode__Enum_DEFINED)
#define IL2CPP_STRUCT_UnescapeMode__Enum_DEFINED
enum class UnescapeMode__Enum : int32_t {
    CopyOnly = 0x00000000,
    Escape = 0x00000001,
    Unescape = 0x00000002,
    EscapeUnescape = 0x00000003,
    V1ToStringFlag = 0x00000004,
    UnescapeAll = 0x00000008,
    UnescapeAllOrThrow = 0x00000018,
};
#endif
#if !defined(IL2CPP_STRUCT_UnescapeMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_UnescapeMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_UnescapeMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnescapeMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_UnescapeMode__Enum_FWDDECL)
#include <Modloader/app/structs/UnescapeMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnescapeMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
