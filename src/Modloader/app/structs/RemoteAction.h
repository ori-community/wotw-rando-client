#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoteAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoteAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteAction_DEFINED)
#define IL2CPP_STRUCT_RemoteAction_DEFINED
struct RemoteAction__Class;
struct RemoteAction {
    struct RemoteAction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RemoteAction_FWDDECL)
#define IL2CPP_STRUCT_RemoteAction_FWDDECL
#include <Modloader/app/structs/RemoteAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RemoteAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoteAction_DEFINED) && !defined(IL2CPP_STRUCT_RemoteAction_FWDDECL)
#include <Modloader/app/structs/RemoteAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoteAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
