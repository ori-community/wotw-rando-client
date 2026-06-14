#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowTrialsAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowTrialsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowTrialsAction_DEFINED)
#include <Modloader/app/structs/ShowTrialsAction__Fields.h>
#if defined(IL2CPP_STRUCT_ShowTrialsAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ShowTrialsAction_DEFINED
struct ShowTrialsAction__Class;
struct ShowTrialsAction {
    struct ShowTrialsAction__Class* klass;
    MonitorData* monitor;
    struct ShowTrialsAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowTrialsAction_FWDDECL)
#define IL2CPP_STRUCT_ShowTrialsAction_FWDDECL
#include <Modloader/app/structs/ShowTrialsAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ShowTrialsAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowTrialsAction_DEFINED) && !defined(IL2CPP_STRUCT_ShowTrialsAction_FWDDECL)
#include <Modloader/app/structs/ShowTrialsAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowTrialsAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
