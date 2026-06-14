#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlinkSteamAccountResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlinkSteamAccountResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkSteamAccountResult_DEFINED)
#include <Modloader/app/structs/UnlinkSteamAccountResult__Fields.h>
#if defined(IL2CPP_STRUCT_UnlinkSteamAccountResult__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlinkSteamAccountResult_DEFINED
struct UnlinkSteamAccountResult__Class;
struct UnlinkSteamAccountResult {
    struct UnlinkSteamAccountResult__Class* klass;
    MonitorData* monitor;
    struct UnlinkSteamAccountResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlinkSteamAccountResult_FWDDECL)
#define IL2CPP_STRUCT_UnlinkSteamAccountResult_FWDDECL
#include <Modloader/app/structs/UnlinkSteamAccountResult__Class.h>
#endif
#undef IL2CPP_STRUCT_UnlinkSteamAccountResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlinkSteamAccountResult_DEFINED) && !defined(IL2CPP_STRUCT_UnlinkSteamAccountResult_FWDDECL)
#include <Modloader/app/structs/UnlinkSteamAccountResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlinkSteamAccountResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
