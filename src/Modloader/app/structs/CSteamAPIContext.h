#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CSteamAPIContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CSteamAPIContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CSteamAPIContext_DEFINED)
#define IL2CPP_STRUCT_CSteamAPIContext_DEFINED
struct CSteamAPIContext__Class;
struct CSteamAPIContext {
    struct CSteamAPIContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CSteamAPIContext_FWDDECL)
#define IL2CPP_STRUCT_CSteamAPIContext_FWDDECL
#include <Modloader/app/structs/CSteamAPIContext__Class.h>
#endif
#undef IL2CPP_STRUCT_CSteamAPIContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CSteamAPIContext_DEFINED) && !defined(IL2CPP_STRUCT_CSteamAPIContext_FWDDECL)
#include <Modloader/app/structs/CSteamAPIContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CSteamAPIContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
