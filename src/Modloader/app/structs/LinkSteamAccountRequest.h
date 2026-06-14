#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkSteamAccountRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkSteamAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkSteamAccountRequest_DEFINED)
#include <Modloader/app/structs/LinkSteamAccountRequest__Fields.h>
#if defined(IL2CPP_STRUCT_LinkSteamAccountRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkSteamAccountRequest_DEFINED
struct LinkSteamAccountRequest__Class;
struct LinkSteamAccountRequest {
    struct LinkSteamAccountRequest__Class* klass;
    MonitorData* monitor;
    struct LinkSteamAccountRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkSteamAccountRequest_FWDDECL)
#define IL2CPP_STRUCT_LinkSteamAccountRequest_FWDDECL
#include <Modloader/app/structs/LinkSteamAccountRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkSteamAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkSteamAccountRequest_DEFINED) && !defined(IL2CPP_STRUCT_LinkSteamAccountRequest_FWDDECL)
#include <Modloader/app/structs/LinkSteamAccountRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkSteamAccountRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
