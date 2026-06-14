#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EChatEntryType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EChatEntryType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EChatEntryType__Enum_DEFINED)
#define IL2CPP_STRUCT_EChatEntryType__Enum_DEFINED
enum class EChatEntryType__Enum : int32_t {
    k_EChatEntryTypeInvalid = 0x00000000,
    k_EChatEntryTypeChatMsg = 0x00000001,
    k_EChatEntryTypeTyping = 0x00000002,
    k_EChatEntryTypeInviteGame = 0x00000003,
    k_EChatEntryTypeEmote = 0x00000004,
    k_EChatEntryTypeLeftConversation = 0x00000006,
    k_EChatEntryTypeEntered = 0x00000007,
    k_EChatEntryTypeWasKicked = 0x00000008,
    k_EChatEntryTypeWasBanned = 0x00000009,
    k_EChatEntryTypeDisconnected = 0x0000000a,
    k_EChatEntryTypeHistoricalChat = 0x0000000b,
    k_EChatEntryTypeLinkBlocked = 0x0000000e,
};
#endif
#if !defined(IL2CPP_STRUCT_EChatEntryType__Enum_FWDDECL)
#define IL2CPP_STRUCT_EChatEntryType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EChatEntryType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EChatEntryType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EChatEntryType__Enum_FWDDECL)
#include <Modloader/app/structs/EChatEntryType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EChatEntryType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
