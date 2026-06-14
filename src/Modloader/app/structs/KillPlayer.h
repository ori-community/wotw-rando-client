#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KillPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KillPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_KillPlayer_DEFINED)
#include <Modloader/app/structs/KillPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_KillPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_KillPlayer_DEFINED
struct KillPlayer__Class;
struct KillPlayer {
    struct KillPlayer__Class* klass;
    MonitorData* monitor;
    struct KillPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KillPlayer_FWDDECL)
#define IL2CPP_STRUCT_KillPlayer_FWDDECL
#include <Modloader/app/structs/KillPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_KillPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_KillPlayer_DEFINED) && !defined(IL2CPP_STRUCT_KillPlayer_FWDDECL)
#include <Modloader/app/structs/KillPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KillPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
