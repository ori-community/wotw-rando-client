#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerCommunicator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerCommunicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerCommunicator_DEFINED)
#define IL2CPP_STRUCT_ServerCommunicator_DEFINED
struct ServerCommunicator__Class;
struct ServerCommunicator {
    struct ServerCommunicator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerCommunicator_FWDDECL)
#define IL2CPP_STRUCT_ServerCommunicator_FWDDECL
#include <Modloader/app/structs/ServerCommunicator__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerCommunicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerCommunicator_DEFINED) && !defined(IL2CPP_STRUCT_ServerCommunicator_FWDDECL)
#include <Modloader/app/structs/ServerCommunicator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerCommunicator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
