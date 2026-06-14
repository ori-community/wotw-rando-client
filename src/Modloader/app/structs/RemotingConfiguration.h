#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemotingConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemotingConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingConfiguration_DEFINED)
#define IL2CPP_STRUCT_RemotingConfiguration_DEFINED
struct RemotingConfiguration__Class;
struct RemotingConfiguration {
    struct RemotingConfiguration__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RemotingConfiguration_FWDDECL)
#define IL2CPP_STRUCT_RemotingConfiguration_FWDDECL
#include <Modloader/app/structs/RemotingConfiguration__Class.h>
#endif
#undef IL2CPP_STRUCT_RemotingConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemotingConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_RemotingConfiguration_FWDDECL)
#include <Modloader/app/structs/RemotingConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemotingConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
