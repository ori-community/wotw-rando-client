#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifyUserVirtualCurrencyResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifyUserVirtualCurrencyResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifyUserVirtualCurrencyResult__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_ModifyUserVirtualCurrencyResult__Fields_DEFINED
struct String;
struct ModifyUserVirtualCurrencyResult__Fields {
    struct PlayFabResultCommon__Fields _;
    int32_t Balance;
    int32_t BalanceChange;
    struct String* PlayFabId;
    struct String* VirtualCurrency;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ModifyUserVirtualCurrencyResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_ModifyUserVirtualCurrencyResult__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ModifyUserVirtualCurrencyResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifyUserVirtualCurrencyResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ModifyUserVirtualCurrencyResult__Fields_FWDDECL)
#include <Modloader/app/structs/ModifyUserVirtualCurrencyResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifyUserVirtualCurrencyResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
