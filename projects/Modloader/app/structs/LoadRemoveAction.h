#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadRemoveAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadRemoveAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadRemoveAction_DEFINED)
#include <Modloader/app/structs/LoadRemoveAction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadRemoveAction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadRemoveAction_DEFINED
struct LoadRemoveAction__Class;
struct LoadRemoveAction {
    struct LoadRemoveAction__Class* klass;
    MonitorData* monitor;
    struct LoadRemoveAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadRemoveAction_FWDDECL)
#define IL2CPP_STRUCT_LoadRemoveAction_FWDDECL
#include <Modloader/app/structs/LoadRemoveAction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadRemoveAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadRemoveAction_DEFINED) && !defined(IL2CPP_STRUCT_LoadRemoveAction_FWDDECL)
#include <Modloader/app/structs/LoadRemoveAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadRemoveAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
