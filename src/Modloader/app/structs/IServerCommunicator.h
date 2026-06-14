#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IServerCommunicator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IServerCommunicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IServerCommunicator_DEFINED)
#define IL2CPP_STRUCT_IServerCommunicator_DEFINED
struct IServerCommunicator__Class;
struct IServerCommunicator {
    struct IServerCommunicator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IServerCommunicator_FWDDECL)
#define IL2CPP_STRUCT_IServerCommunicator_FWDDECL
#include <Modloader/app/structs/IServerCommunicator__Class.h>
#endif
#undef IL2CPP_STRUCT_IServerCommunicator_INITIALIZING
#if !defined(IL2CPP_STRUCT_IServerCommunicator_DEFINED) && !defined(IL2CPP_STRUCT_IServerCommunicator_FWDDECL)
#include <Modloader/app/structs/IServerCommunicator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IServerCommunicator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
