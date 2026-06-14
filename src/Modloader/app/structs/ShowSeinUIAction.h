#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowSeinUIAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowSeinUIAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowSeinUIAction_DEFINED)
#include <Modloader/app/structs/ShowSeinUIAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowSeinUIAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowSeinUIAction_DEFINED
struct ShowSeinUIAction__Class;
struct ShowSeinUIAction {
    struct ShowSeinUIAction__Class* klass;
    MonitorData* monitor;
    struct ShowSeinUIAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowSeinUIAction_FWDDECL)
#define IL2CPP_STRUCT_ShowSeinUIAction_FWDDECL
#include <Modloader/app/structs/ShowSeinUIAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowSeinUIAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowSeinUIAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowSeinUIAction_FWDDECL)
#include <Modloader/app/structs/ShowSeinUIAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowSeinUIAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
