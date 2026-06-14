#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamAPIWarningMessageHook_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamAPIWarningMessageHook_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamAPIWarningMessageHook_t_DEFINED)
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t__Fields.h>
#if defined(IL2CPP_STRUCT_SteamAPIWarningMessageHook_t__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamAPIWarningMessageHook_t_DEFINED
struct SteamAPIWarningMessageHook_t__Class;
struct SteamAPIWarningMessageHook_t {
    struct SteamAPIWarningMessageHook_t__Class* klass;
    MonitorData* monitor;
    struct SteamAPIWarningMessageHook_t__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamAPIWarningMessageHook_t_FWDDECL)
#define IL2CPP_STRUCT_SteamAPIWarningMessageHook_t_FWDDECL
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamAPIWarningMessageHook_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamAPIWarningMessageHook_t_DEFINED) && !defined(IL2CPP_STRUCT_SteamAPIWarningMessageHook_t_FWDDECL)
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamAPIWarningMessageHook_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
