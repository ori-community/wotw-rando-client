#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CSteamID__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CSteamID__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CSteamID__Boxed_DEFINED)
#include <Modloader/app/structs/CSteamID.h>
#if defined(IL2CPP_STRUCT_CSteamID_DEFINED)
#define IL2CPP_STRUCT_CSteamID__Boxed_DEFINED
struct CSteamID__Class;
struct CSteamID__Boxed {
    struct CSteamID__Class* klass;
    MonitorData* monitor;
    struct CSteamID fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CSteamID__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CSteamID__Boxed_FWDDECL
#include <Modloader/app/structs/CSteamID__Class.h>
#endif
#undef IL2CPP_STRUCT_CSteamID__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CSteamID__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CSteamID__Boxed_FWDDECL)
#include <Modloader/app/structs/CSteamID__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CSteamID__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
