#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SendMessageAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SendMessageAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMessageAction_DEFINED)
#include <Modloader/app/structs/SendMessageAction__Fields.h>
#if defined(IL2CPP_STRUCT_SendMessageAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SendMessageAction_DEFINED
struct SendMessageAction__Class;
struct SendMessageAction {
    struct SendMessageAction__Class* klass;
    MonitorData* monitor;
    struct SendMessageAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SendMessageAction_FWDDECL)
#define IL2CPP_STRUCT_SendMessageAction_FWDDECL
#include <Modloader/app/structs/SendMessageAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SendMessageAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SendMessageAction_DEFINED) && !defined(IL2CPP_STRUCT_SendMessageAction_FWDDECL)
#include <Modloader/app/structs/SendMessageAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SendMessageAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
