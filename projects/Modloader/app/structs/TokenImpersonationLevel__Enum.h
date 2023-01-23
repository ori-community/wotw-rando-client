#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TokenImpersonationLevel__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TokenImpersonationLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenImpersonationLevel__Enum_DEFINED)
#define IL2CPP_STRUCT_TokenImpersonationLevel__Enum_DEFINED
enum class TokenImpersonationLevel__Enum : int32_t {
    Anonymous = 0x00000001,
    Delegation = 0x00000004,
    Identification = 0x00000002,
    Impersonation = 0x00000003,
    None = 0x00000000,
};
#endif
#if !defined(IL2CPP_STRUCT_TokenImpersonationLevel__Enum_FWDDECL)
#define IL2CPP_STRUCT_TokenImpersonationLevel__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TokenImpersonationLevel__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TokenImpersonationLevel__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TokenImpersonationLevel__Enum_FWDDECL)
#include <Modloader/app/structs/TokenImpersonationLevel__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TokenImpersonationLevel__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
