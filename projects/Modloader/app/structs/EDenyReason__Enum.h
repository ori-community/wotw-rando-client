#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EDenyReason__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EDenyReason__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EDenyReason__Enum_DEFINED)
#define IL2CPP_STRUCT_EDenyReason__Enum_DEFINED
enum class EDenyReason__Enum : int32_t {
    k_EDenyInvalid = 0x00000000,
    k_EDenyInvalidVersion = 0x00000001,
    k_EDenyGeneric = 0x00000002,
    k_EDenyNotLoggedOn = 0x00000003,
    k_EDenyNoLicense = 0x00000004,
    k_EDenyCheater = 0x00000005,
    k_EDenyLoggedInElseWhere = 0x00000006,
    k_EDenyUnknownText = 0x00000007,
    k_EDenyIncompatibleAnticheat = 0x00000008,
    k_EDenyMemoryCorruption = 0x00000009,
    k_EDenyIncompatibleSoftware = 0x0000000a,
    k_EDenySteamConnectionLost = 0x0000000b,
    k_EDenySteamConnectionError = 0x0000000c,
    k_EDenySteamResponseTimedOut = 0x0000000d,
    k_EDenySteamValidationStalled = 0x0000000e,
    k_EDenySteamOwnerLeftGuestUser = 0x0000000f,
};
#endif
#if !defined(IL2CPP_STRUCT_EDenyReason__Enum_FWDDECL)
#define IL2CPP_STRUCT_EDenyReason__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EDenyReason__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EDenyReason__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EDenyReason__Enum_FWDDECL)
#include <Modloader/app/structs/EDenyReason__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EDenyReason__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
