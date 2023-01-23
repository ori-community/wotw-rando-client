#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConnectedPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConnectedPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectedPlayer_DEFINED)
#include <Modloader/app/structs/ConnectedPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_ConnectedPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_ConnectedPlayer_DEFINED
struct ConnectedPlayer__Class;
struct ConnectedPlayer {
    struct ConnectedPlayer__Class* klass;
    MonitorData* monitor;
    struct ConnectedPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConnectedPlayer_FWDDECL)
#define IL2CPP_STRUCT_ConnectedPlayer_FWDDECL
#include <Modloader/app/structs/ConnectedPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_ConnectedPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConnectedPlayer_DEFINED) && !defined(IL2CPP_STRUCT_ConnectedPlayer_FWDDECL)
#include <Modloader/app/structs/ConnectedPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConnectedPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
