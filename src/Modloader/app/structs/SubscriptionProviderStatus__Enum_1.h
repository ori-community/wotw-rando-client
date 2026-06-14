#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SubscriptionProviderStatus__Enum_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SubscriptionProviderStatus__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubscriptionProviderStatus__Enum_1_DEFINED)
#define IL2CPP_STRUCT_SubscriptionProviderStatus__Enum_1_DEFINED
enum class SubscriptionProviderStatus__Enum_1 : int32_t {
    NoError = 0x00000000,
    Cancelled = 0x00000001,
    UnknownError = 0x00000002,
    BillingError = 0x00000003,
    ProductUnavailable = 0x00000004,
    CustomerDidNotAcceptPriceChange = 0x00000005,
    FreeTrial = 0x00000006,
    PaymentPending = 0x00000007,
};
#endif
#if !defined(IL2CPP_STRUCT_SubscriptionProviderStatus__Enum_1_FWDDECL)
#define IL2CPP_STRUCT_SubscriptionProviderStatus__Enum_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_SubscriptionProviderStatus__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_SubscriptionProviderStatus__Enum_1_DEFINED) && !defined(IL2CPP_STRUCT_SubscriptionProviderStatus__Enum_1_FWDDECL)
#include <Modloader/app/structs/SubscriptionProviderStatus__Enum_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SubscriptionProviderStatus__Enum_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
