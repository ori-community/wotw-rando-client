#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateRailAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateRailAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateRailAction_DEFINED)
#include <Modloader/app/structs/ActivateRailAction__Fields.h>
#if defined(IL2CPP_STRUCT_ActivateRailAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateRailAction_DEFINED
struct ActivateRailAction__Class;
struct ActivateRailAction {
    struct ActivateRailAction__Class* klass;
    MonitorData* monitor;
    struct ActivateRailAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateRailAction_FWDDECL)
#define IL2CPP_STRUCT_ActivateRailAction_FWDDECL
#include <Modloader/app/structs/ActivateRailAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivateRailAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateRailAction_DEFINED) && !defined(IL2CPP_STRUCT_ActivateRailAction_FWDDECL)
#include <Modloader/app/structs/ActivateRailAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateRailAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
