#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SteamManager__StaticFields_DEFINED
struct SteamManager;
struct SteamManager__StaticFields {
    struct SteamManager* s_instance;
    bool s_EverInitialized;
};
#endif
#if !defined(IL2CPP_STRUCT_SteamManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SteamManager__StaticFields_FWDDECL
#include <Modloader/app/structs/SteamManager.h>
#endif
#undef IL2CPP_STRUCT_SteamManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SteamManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/SteamManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
