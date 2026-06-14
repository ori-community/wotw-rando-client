#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowMessageBoxAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowMessageBoxAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowMessageBoxAction_DEFINED)
#include <Modloader/app/structs/ShowMessageBoxAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowMessageBoxAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowMessageBoxAction_DEFINED
struct ShowMessageBoxAction__Class;
struct ShowMessageBoxAction {
    struct ShowMessageBoxAction__Class* klass;
    MonitorData* monitor;
    struct ShowMessageBoxAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowMessageBoxAction_FWDDECL)
#define IL2CPP_STRUCT_ShowMessageBoxAction_FWDDECL
#include <Modloader/app/structs/ShowMessageBoxAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowMessageBoxAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowMessageBoxAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowMessageBoxAction_FWDDECL)
#include <Modloader/app/structs/ShowMessageBoxAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowMessageBoxAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
