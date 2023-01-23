#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EBeginAuthSessionResult__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EBeginAuthSessionResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EBeginAuthSessionResult__Enum_DEFINED)
#define IL2CPP_STRUCT_EBeginAuthSessionResult__Enum_DEFINED
enum class EBeginAuthSessionResult__Enum : int32_t {
    k_EBeginAuthSessionResultOK = 0x00000000,
    k_EBeginAuthSessionResultInvalidTicket = 0x00000001,
    k_EBeginAuthSessionResultDuplicateRequest = 0x00000002,
    k_EBeginAuthSessionResultInvalidVersion = 0x00000003,
    k_EBeginAuthSessionResultGameMismatch = 0x00000004,
    k_EBeginAuthSessionResultExpiredTicket = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_EBeginAuthSessionResult__Enum_FWDDECL)
#define IL2CPP_STRUCT_EBeginAuthSessionResult__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EBeginAuthSessionResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EBeginAuthSessionResult__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EBeginAuthSessionResult__Enum_FWDDECL)
#include <Modloader/app/structs/EBeginAuthSessionResult__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EBeginAuthSessionResult__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
