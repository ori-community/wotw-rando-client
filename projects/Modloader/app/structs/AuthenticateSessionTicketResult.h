#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticateSessionTicketResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticateSessionTicketResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticateSessionTicketResult_DEFINED)
#include <Modloader/app/structs/AuthenticateSessionTicketResult__Fields.h>
#if defined(IL2CPP_STRUCT_AuthenticateSessionTicketResult__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthenticateSessionTicketResult_DEFINED
struct AuthenticateSessionTicketResult__Class;
struct AuthenticateSessionTicketResult {
    struct AuthenticateSessionTicketResult__Class* klass;
    MonitorData* monitor;
    struct AuthenticateSessionTicketResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthenticateSessionTicketResult_FWDDECL)
#define IL2CPP_STRUCT_AuthenticateSessionTicketResult_FWDDECL
#include <Modloader/app/structs/AuthenticateSessionTicketResult__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthenticateSessionTicketResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticateSessionTicketResult_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticateSessionTicketResult_FWDDECL)
#include <Modloader/app/structs/AuthenticateSessionTicketResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticateSessionTicketResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
