#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateAction_DEFINED)
#include <Modloader/app/structs/InstantiateAction__Fields.h>
#if defined(IL2CPP_STRUCT_InstantiateAction__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiateAction_DEFINED
struct InstantiateAction__Class;
struct InstantiateAction {
    struct InstantiateAction__Class* klass;
    MonitorData* monitor;
    struct InstantiateAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateAction_FWDDECL)
#define IL2CPP_STRUCT_InstantiateAction_FWDDECL
#include <Modloader/app/structs/InstantiateAction__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiateAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateAction_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateAction_FWDDECL)
#include <Modloader/app/structs/InstantiateAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
