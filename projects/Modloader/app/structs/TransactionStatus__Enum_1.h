#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransactionStatus__Enum_1_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransactionStatus__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransactionStatus__Enum_1_DEFINED)
#define IL2CPP_STRUCT_TransactionStatus__Enum_1_DEFINED
enum class TransactionStatus__Enum_1 : int32_t {
    CreateCart = 0x00000000,
    Init = 0x00000001,
    Approved = 0x00000002,
    Succeeded = 0x00000003,
    FailedByProvider = 0x00000004,
    DisputePending = 0x00000005,
    RefundPending = 0x00000006,
    Refunded = 0x00000007,
    RefundFailed = 0x00000008,
    ChargedBack = 0x00000009,
    FailedByUber = 0x0000000a,
    FailedByPlayFab = 0x0000000b,
    Revoked = 0x0000000c,
    TradePending = 0x0000000d,
    Traded = 0x0000000e,
    Upgraded = 0x0000000f,
    StackPending = 0x00000010,
    Stacked = 0x00000011,
    Other = 0x00000012,
    Failed = 0x00000013,
};
#endif
#if !defined(IL2CPP_STRUCT_TransactionStatus__Enum_1_FWDDECL)
#define IL2CPP_STRUCT_TransactionStatus__Enum_1_FWDDECL
#endif
#undef IL2CPP_STRUCT_TransactionStatus__Enum_1_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransactionStatus__Enum_1_DEFINED) && !defined(IL2CPP_STRUCT_TransactionStatus__Enum_1_FWDDECL)
#include <Modloader/app/structs/TransactionStatus__Enum_1.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransactionStatus__Enum_1.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
