#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowHelpAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowHelpAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowHelpAction_DEFINED)
#include <Modloader/app/structs/ShowHelpAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowHelpAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowHelpAction_DEFINED
struct ShowHelpAction__Class;
struct ShowHelpAction {
    struct ShowHelpAction__Class* klass;
    MonitorData* monitor;
    struct ShowHelpAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowHelpAction_FWDDECL)
#define IL2CPP_STRUCT_ShowHelpAction_FWDDECL
#include <Modloader/app/structs/ShowHelpAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowHelpAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowHelpAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowHelpAction_FWDDECL)
#include <Modloader/app/structs/ShowHelpAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowHelpAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
