#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EAppOwnershipFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EAppOwnershipFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EAppOwnershipFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_EAppOwnershipFlags__Enum_DEFINED
enum class EAppOwnershipFlags__Enum : int32_t {
    k_EAppOwnershipFlags_None = 0x00000000,
    k_EAppOwnershipFlags_OwnsLicense = 0x00000001,
    k_EAppOwnershipFlags_FreeLicense = 0x00000002,
    k_EAppOwnershipFlags_RegionRestricted = 0x00000004,
    k_EAppOwnershipFlags_LowViolence = 0x00000008,
    k_EAppOwnershipFlags_InvalidPlatform = 0x00000010,
    k_EAppOwnershipFlags_SharedLicense = 0x00000020,
    k_EAppOwnershipFlags_FreeWeekend = 0x00000040,
    k_EAppOwnershipFlags_RetailLicense = 0x00000080,
    k_EAppOwnershipFlags_LicenseLocked = 0x00000100,
    k_EAppOwnershipFlags_LicensePending = 0x00000200,
    k_EAppOwnershipFlags_LicenseExpired = 0x00000400,
    k_EAppOwnershipFlags_LicensePermanent = 0x00000800,
    k_EAppOwnershipFlags_LicenseRecurring = 0x00001000,
    k_EAppOwnershipFlags_LicenseCanceled = 0x00002000,
    k_EAppOwnershipFlags_AutoGrant = 0x00004000,
    k_EAppOwnershipFlags_PendingGift = 0x00008000,
    k_EAppOwnershipFlags_RentalNotActivated = 0x00010000,
    k_EAppOwnershipFlags_Rental = 0x00020000,
    k_EAppOwnershipFlags_SiteLicense = 0x00040000,
};
#endif
#if !defined(IL2CPP_STRUCT_EAppOwnershipFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_EAppOwnershipFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EAppOwnershipFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EAppOwnershipFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EAppOwnershipFlags__Enum_FWDDECL)
#include <Modloader/app/structs/EAppOwnershipFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EAppOwnershipFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
