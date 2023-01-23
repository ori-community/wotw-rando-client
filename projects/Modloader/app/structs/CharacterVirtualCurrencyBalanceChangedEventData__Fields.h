#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterVirtualCurrencyBalanceChangedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterVirtualCurrencyBalanceChangedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterVirtualCurrencyBalanceChangedEventData__Fields_DEFINED)
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CharacterVirtualCurrencyBalanceChangedEventData__Fields_DEFINED
struct String;
struct CharacterVirtualCurrencyBalanceChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct String* OrderId;
    struct String* PlayerId;
    struct String* TitleId;
    int32_t VirtualCurrencyBalance;
    struct String* VirtualCurrencyName;
    int32_t VirtualCurrencyPreviousBalance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterVirtualCurrencyBalanceChangedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterVirtualCurrencyBalanceChangedEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_CharacterVirtualCurrencyBalanceChangedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterVirtualCurrencyBalanceChangedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterVirtualCurrencyBalanceChangedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterVirtualCurrencyBalanceChangedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterVirtualCurrencyBalanceChangedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
