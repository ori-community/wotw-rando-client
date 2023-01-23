#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowInventoryAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowInventoryAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowInventoryAction_DEFINED)
#include <Modloader/app/structs/ShowInventoryAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowInventoryAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowInventoryAction_DEFINED
struct ShowInventoryAction__Class;
struct ShowInventoryAction {
    struct ShowInventoryAction__Class* klass;
    MonitorData* monitor;
    struct ShowInventoryAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowInventoryAction_FWDDECL)
#define IL2CPP_STRUCT_ShowInventoryAction_FWDDECL
#include <Modloader/app/structs/ShowInventoryAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowInventoryAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowInventoryAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowInventoryAction_FWDDECL)
#include <Modloader/app/structs/ShowInventoryAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowInventoryAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
