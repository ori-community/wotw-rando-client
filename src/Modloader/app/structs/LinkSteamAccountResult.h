#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LinkSteamAccountResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LinkSteamAccountResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkSteamAccountResult_DEFINED)
#include <Modloader/app/structs/LinkSteamAccountResult__Fields.h>
#if defined(IL2CPP_STRUCT_LinkSteamAccountResult__Fields_DEFINED)
#define IL2CPP_STRUCT_LinkSteamAccountResult_DEFINED
struct LinkSteamAccountResult__Class;
struct LinkSteamAccountResult {
    struct LinkSteamAccountResult__Class* klass;
    MonitorData* monitor;
    struct LinkSteamAccountResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LinkSteamAccountResult_FWDDECL)
#define IL2CPP_STRUCT_LinkSteamAccountResult_FWDDECL
#include <Modloader/app/structs/LinkSteamAccountResult__Class.h>
#endif
#undef IL2CPP_STRUCT_LinkSteamAccountResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_LinkSteamAccountResult_DEFINED) && !defined(IL2CPP_STRUCT_LinkSteamAccountResult_FWDDECL)
#include <Modloader/app/structs/LinkSteamAccountResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LinkSteamAccountResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
