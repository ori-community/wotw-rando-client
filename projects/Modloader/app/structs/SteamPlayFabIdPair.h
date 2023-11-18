#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamPlayFabIdPair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamPlayFabIdPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamPlayFabIdPair_DEFINED)
#include <Modloader/app/structs/SteamPlayFabIdPair__Fields.h>
#if defined(IL2CPP_STRUCT_SteamPlayFabIdPair__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamPlayFabIdPair_DEFINED
struct SteamPlayFabIdPair__Class;
struct SteamPlayFabIdPair {
    struct SteamPlayFabIdPair__Class* klass;
    MonitorData* monitor;
    struct SteamPlayFabIdPair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamPlayFabIdPair_FWDDECL)
#define IL2CPP_STRUCT_SteamPlayFabIdPair_FWDDECL
#include <Modloader/app/structs/SteamPlayFabIdPair__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamPlayFabIdPair_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamPlayFabIdPair_DEFINED) && !defined(IL2CPP_STRUCT_SteamPlayFabIdPair_FWDDECL)
#include <Modloader/app/structs/SteamPlayFabIdPair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamPlayFabIdPair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
