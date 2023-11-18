#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RedeemMatchmakerTicketResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RedeemMatchmakerTicketResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RedeemMatchmakerTicketResult__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_RedeemMatchmakerTicketResult__Fields_DEFINED
struct String;
struct UserAccountInfo_1;
struct RedeemMatchmakerTicketResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String* Error;
    bool TicketIsValid;
    struct UserAccountInfo_1* UserInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RedeemMatchmakerTicketResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_RedeemMatchmakerTicketResult__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UserAccountInfo_1.h>
#endif
#undef IL2CPP_STRUCT_RedeemMatchmakerTicketResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RedeemMatchmakerTicketResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RedeemMatchmakerTicketResult__Fields_FWDDECL)
#include <Modloader/app/structs/RedeemMatchmakerTicketResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RedeemMatchmakerTicketResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
