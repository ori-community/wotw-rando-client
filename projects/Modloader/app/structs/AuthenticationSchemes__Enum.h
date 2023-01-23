#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticationSchemes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticationSchemes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationSchemes__Enum_DEFINED)
#define IL2CPP_STRUCT_AuthenticationSchemes__Enum_DEFINED
enum class AuthenticationSchemes__Enum : int32_t {
    None = 0x00000000,
    Digest = 0x00000001,
    Negotiate = 0x00000002,
    Ntlm = 0x00000004,
    Basic = 0x00000008,
    Anonymous = 0x00008000,
    IntegratedWindowsAuthentication = 0x00000006,
};
#endif
#if !defined(IL2CPP_STRUCT_AuthenticationSchemes__Enum_FWDDECL)
#define IL2CPP_STRUCT_AuthenticationSchemes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AuthenticationSchemes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationSchemes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticationSchemes__Enum_FWDDECL)
#include <Modloader/app/structs/AuthenticationSchemes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticationSchemes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
