#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlinkSteamAccountRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlinkSteamAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkSteamAccountRequest_DEFINED)
#include <Modloader/app/structs/UnlinkSteamAccountRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UnlinkSteamAccountRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlinkSteamAccountRequest_DEFINED
struct UnlinkSteamAccountRequest__Class;
struct UnlinkSteamAccountRequest {
    struct UnlinkSteamAccountRequest__Class* klass;
    MonitorData* monitor;
    struct UnlinkSteamAccountRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlinkSteamAccountRequest_FWDDECL)
#define IL2CPP_STRUCT_UnlinkSteamAccountRequest_FWDDECL
#include <Modloader/app/structs/UnlinkSteamAccountRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UnlinkSteamAccountRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkSteamAccountRequest_DEFINED) && !defined(IL2CPP_STRUCT_UnlinkSteamAccountRequest_FWDDECL)
#include <Modloader/app/structs/UnlinkSteamAccountRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlinkSteamAccountRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
