#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteActivator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteActivator_DEFINED)
#include <Modloader/app/structs/RemoteActivator__Fields.h>
#if defined(IL2CPP_STRUCT_RemoteActivator__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoteActivator_DEFINED
struct RemoteActivator__Class;
struct RemoteActivator {
    struct RemoteActivator__Class* klass;
    MonitorData* monitor;
    struct RemoteActivator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoteActivator_FWDDECL)
#define IL2CPP_STRUCT_RemoteActivator_FWDDECL
#include <Modloader/app/structs/RemoteActivator__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoteActivator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteActivator_DEFINED) && !defined(IL2CPP_STRUCT_RemoteActivator_FWDDECL)
#include <Modloader/app/structs/RemoteActivator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteActivator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
