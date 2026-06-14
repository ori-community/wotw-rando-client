#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamManager_DEFINED)
#include <Modloader/app/structs/SteamManager__Fields.h>
#if defined(IL2CPP_STRUCT_SteamManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamManager_DEFINED
struct SteamManager__Class;
struct SteamManager {
    struct SteamManager__Class* klass;
    MonitorData* monitor;
    struct SteamManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamManager_FWDDECL)
#define IL2CPP_STRUCT_SteamManager_FWDDECL
#include <Modloader/app/structs/SteamManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamManager_DEFINED) && !defined(IL2CPP_STRUCT_SteamManager_FWDDECL)
#include <Modloader/app/structs/SteamManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
