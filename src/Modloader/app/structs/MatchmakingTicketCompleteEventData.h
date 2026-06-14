#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MatchmakingTicketCompleteEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MatchmakingTicketCompleteEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingTicketCompleteEventData_DEFINED)
#include <Modloader/app/structs/MatchmakingTicketCompleteEventData__Fields.h>
#if defined(IL2CPP_STRUCT_MatchmakingTicketCompleteEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_MatchmakingTicketCompleteEventData_DEFINED
struct MatchmakingTicketCompleteEventData__Class;
struct MatchmakingTicketCompleteEventData {
    struct MatchmakingTicketCompleteEventData__Class* klass;
    MonitorData* monitor;
    struct MatchmakingTicketCompleteEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MatchmakingTicketCompleteEventData_FWDDECL)
#define IL2CPP_STRUCT_MatchmakingTicketCompleteEventData_FWDDECL
#include <Modloader/app/structs/MatchmakingTicketCompleteEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_MatchmakingTicketCompleteEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MatchmakingTicketCompleteEventData_DEFINED) && !defined(IL2CPP_STRUCT_MatchmakingTicketCompleteEventData_FWDDECL)
#include <Modloader/app/structs/MatchmakingTicketCompleteEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MatchmakingTicketCompleteEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
