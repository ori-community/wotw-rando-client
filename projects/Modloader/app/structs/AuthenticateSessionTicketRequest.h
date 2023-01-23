#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticateSessionTicketRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticateSessionTicketRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticateSessionTicketRequest_DEFINED)
#include <Modloader/app/structs/AuthenticateSessionTicketRequest__Fields.h>
#if defined(IL2CPP_STRUCT_AuthenticateSessionTicketRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthenticateSessionTicketRequest_DEFINED
struct AuthenticateSessionTicketRequest__Class;
struct AuthenticateSessionTicketRequest {
    struct AuthenticateSessionTicketRequest__Class* klass;
    MonitorData* monitor;
    struct AuthenticateSessionTicketRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthenticateSessionTicketRequest_FWDDECL)
#define IL2CPP_STRUCT_AuthenticateSessionTicketRequest_FWDDECL
#include <Modloader/app/structs/AuthenticateSessionTicketRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthenticateSessionTicketRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticateSessionTicketRequest_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticateSessionTicketRequest_FWDDECL)
#include <Modloader/app/structs/AuthenticateSessionTicketRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticateSessionTicketRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
