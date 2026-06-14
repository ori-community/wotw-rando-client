#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingUserTicketCompletePayload__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingUserTicketCompletePayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingUserTicketCompletePayload__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingUserTicketCompletePayload__Fields_DEFINED
struct String;
struct __declspec(align(8)) MatchmakingUserTicketCompletePayload__Fields {
    struct String* CancellationReason;
    struct String* MatchId;
    struct String* QueueName;
    struct String* Result;
    struct String* TicketId;
};
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingUserTicketCompletePayload__Fields_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingUserTicketCompletePayload__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingUserTicketCompletePayload__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingUserTicketCompletePayload__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingUserTicketCompletePayload__Fields_FWDDECL)
#include <Modloader/app/structs/MatchmakingUserTicketCompletePayload__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingUserTicketCompletePayload__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
