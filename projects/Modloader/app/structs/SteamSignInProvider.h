#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SteamSignInProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SteamSignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamSignInProvider_DEFINED)
#include <Modloader/app/structs/SteamSignInProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SteamSignInProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SteamSignInProvider_DEFINED
struct SteamSignInProvider__Class;
struct SteamSignInProvider {
    struct SteamSignInProvider__Class* klass;
    MonitorData* monitor;
    struct SteamSignInProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SteamSignInProvider_FWDDECL)
#define IL2CPP_STRUCT_SteamSignInProvider_FWDDECL
#include <Modloader/app/structs/SteamSignInProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SteamSignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SteamSignInProvider_DEFINED) && !defined(IL2CPP_STRUCT_SteamSignInProvider_FWDDECL)
#include <Modloader/app/structs/SteamSignInProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SteamSignInProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
