#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerInstantiateAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerInstantiateAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerInstantiateAction_DEFINED)
#include <Modloader/app/structs/ServerInstantiateAction__Fields.h>
#if defined(IL2CPP_STRUCT_ServerInstantiateAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerInstantiateAction_DEFINED
struct ServerInstantiateAction__Class;
struct ServerInstantiateAction {
    struct ServerInstantiateAction__Class* klass;
    MonitorData* monitor;
    struct ServerInstantiateAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerInstantiateAction_FWDDECL)
#define IL2CPP_STRUCT_ServerInstantiateAction_FWDDECL
#include <Modloader/app/structs/ServerInstantiateAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerInstantiateAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerInstantiateAction_DEFINED) && !defined(IL2CPP_STRUCT_ServerInstantiateAction_FWDDECL)
#include <Modloader/app/structs/ServerInstantiateAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerInstantiateAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
