#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerConnection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerConnection_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConnection_DEFINED)
#include <Modloader/app/structs/PlayerConnection__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerConnection__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerConnection_DEFINED
struct PlayerConnection__Class;
struct PlayerConnection {
    struct PlayerConnection__Class* klass;
    MonitorData* monitor;
    struct PlayerConnection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerConnection_FWDDECL)
#define IL2CPP_STRUCT_PlayerConnection_FWDDECL
#include <Modloader/app/structs/PlayerConnection__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerConnection_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerConnection_DEFINED) && !defined(IL2CPP_STRUCT_PlayerConnection_FWDDECL)
#include <Modloader/app/structs/PlayerConnection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerConnection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
