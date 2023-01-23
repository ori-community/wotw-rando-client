#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowHelpTextAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowHelpTextAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowHelpTextAction_DEFINED)
#include <Modloader/app/structs/ShowHelpTextAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowHelpTextAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowHelpTextAction_DEFINED
struct ShowHelpTextAction__Class;
struct ShowHelpTextAction {
    struct ShowHelpTextAction__Class* klass;
    MonitorData* monitor;
    struct ShowHelpTextAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowHelpTextAction_FWDDECL)
#define IL2CPP_STRUCT_ShowHelpTextAction_FWDDECL
#include <Modloader/app/structs/ShowHelpTextAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowHelpTextAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowHelpTextAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowHelpTextAction_FWDDECL)
#include <Modloader/app/structs/ShowHelpTextAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowHelpTextAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
