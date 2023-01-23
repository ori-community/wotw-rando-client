#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingUserTicketInvitePayload__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingUserTicketInvitePayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingUserTicketInvitePayload__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingUserTicketInvitePayload__Fields_DEFINED
struct EntityKey_9;
struct String;
struct __declspec(align(8)) MatchmakingUserTicketInvitePayload__Fields {
    struct EntityKey_9* CreatorEntity;
    struct String* QueueName;
    struct String* TicketId;
};
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingUserTicketInvitePayload__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingUserTicketInvitePayload__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_9.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingUserTicketInvitePayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingUserTicketInvitePayload__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingUserTicketInvitePayload__Fields_FWDDECL)
#include <Modloader/app/structs/MatchmakingUserTicketInvitePayload__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingUserTicketInvitePayload__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
