#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CookieVariant__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CookieVariant__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieVariant__Enum_DEFINED)
#define IL2CPP_STRUCT_CookieVariant__Enum_DEFINED
enum class CookieVariant__Enum : int32_t {
    Unknown = 0x00000000,
    Plain = 0x00000001,
    Rfc2109 = 0x00000002,
    Rfc2965 = 0x00000003,
    Default = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_CookieVariant__Enum_FWDDECL)
#define IL2CPP_STRUCT_CookieVariant__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_CookieVariant__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_CookieVariant__Enum_DEFINED) && !defined(IL2CPP_STRUCT_CookieVariant__Enum_FWDDECL)
#include <Modloader/app/structs/CookieVariant__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CookieVariant__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
