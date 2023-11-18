#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EMarketNotAllowedReasonFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EMarketNotAllowedReasonFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EMarketNotAllowedReasonFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_EMarketNotAllowedReasonFlags__Enum_DEFINED
enum class EMarketNotAllowedReasonFlags__Enum : int32_t {
    k_EMarketNotAllowedReason_None = 0x00000000,
    k_EMarketNotAllowedReason_TemporaryFailure = 0x00000001,
    k_EMarketNotAllowedReason_AccountDisabled = 0x00000002,
    k_EMarketNotAllowedReason_AccountLockedDown = 0x00000004,
    k_EMarketNotAllowedReason_AccountLimited = 0x00000008,
    k_EMarketNotAllowedReason_TradeBanned = 0x00000010,
    k_EMarketNotAllowedReason_AccountNotTrusted = 0x00000020,
    k_EMarketNotAllowedReason_SteamGuardNotEnabled = 0x00000040,
    k_EMarketNotAllowedReason_SteamGuardOnlyRecentlyEnabled = 0x00000080,
    k_EMarketNotAllowedReason_RecentPasswordReset = 0x00000100,
    k_EMarketNotAllowedReason_NewPaymentMethod = 0x00000200,
    k_EMarketNotAllowedReason_InvalidCookie = 0x00000400,
    k_EMarketNotAllowedReason_UsingNewDevice = 0x00000800,
    k_EMarketNotAllowedReason_RecentSelfRefund = 0x00001000,
    k_EMarketNotAllowedReason_NewPaymentMethodCannotBeVerified = 0x00002000,
    k_EMarketNotAllowedReason_NoRecentPurchases = 0x00004000,
    k_EMarketNotAllowedReason_AcceptedWalletGift = 0x00008000,
};
#endif
#if !defined(IL2CPP_STRUCT_EMarketNotAllowedReasonFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_EMarketNotAllowedReasonFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EMarketNotAllowedReasonFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EMarketNotAllowedReasonFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EMarketNotAllowedReasonFlags__Enum_FWDDECL)
#include <Modloader/app/structs/EMarketNotAllowedReasonFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EMarketNotAllowedReasonFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
