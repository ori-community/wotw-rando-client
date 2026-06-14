#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EAuthSessionResponse__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EAuthSessionResponse__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EAuthSessionResponse__Enum_DEFINED)
#define IL2CPP_STRUCT_EAuthSessionResponse__Enum_DEFINED
enum class EAuthSessionResponse__Enum : int32_t {
    k_EAuthSessionResponseOK = 0x00000000,
    k_EAuthSessionResponseUserNotConnectedToSteam = 0x00000001,
    k_EAuthSessionResponseNoLicenseOrExpired = 0x00000002,
    k_EAuthSessionResponseVACBanned = 0x00000003,
    k_EAuthSessionResponseLoggedInElseWhere = 0x00000004,
    k_EAuthSessionResponseVACCheckTimedOut = 0x00000005,
    k_EAuthSessionResponseAuthTicketCanceled = 0x00000006,
    k_EAuthSessionResponseAuthTicketInvalidAlreadyUsed = 0x00000007,
    k_EAuthSessionResponseAuthTicketInvalid = 0x00000008,
    k_EAuthSessionResponsePublisherIssuedBan = 0x00000009,
};
#endif
#if !defined(IL2CPP_STRUCT_EAuthSessionResponse__Enum_FWDDECL)
#define IL2CPP_STRUCT_EAuthSessionResponse__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EAuthSessionResponse__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EAuthSessionResponse__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EAuthSessionResponse__Enum_FWDDECL)
#include <Modloader/app/structs/EAuthSessionResponse__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EAuthSessionResponse__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
