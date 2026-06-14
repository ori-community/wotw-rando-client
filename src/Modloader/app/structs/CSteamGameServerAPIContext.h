#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CSteamGameServerAPIContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CSteamGameServerAPIContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CSteamGameServerAPIContext_DEFINED)
#define IL2CPP_STRUCT_CSteamGameServerAPIContext_DEFINED
struct CSteamGameServerAPIContext__Class;
struct CSteamGameServerAPIContext {
    struct CSteamGameServerAPIContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CSteamGameServerAPIContext_FWDDECL)
#define IL2CPP_STRUCT_CSteamGameServerAPIContext_FWDDECL
#include <Modloader/app/structs/CSteamGameServerAPIContext__Class.h>
#endif
#undef IL2CPP_STRUCT_CSteamGameServerAPIContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_CSteamGameServerAPIContext_DEFINED) && !defined(IL2CPP_STRUCT_CSteamGameServerAPIContext_FWDDECL)
#include <Modloader/app/structs/CSteamGameServerAPIContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CSteamGameServerAPIContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
