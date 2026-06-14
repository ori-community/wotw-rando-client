#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RestartRaceAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RestartRaceAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestartRaceAction_DEFINED)
#include <Modloader/app/structs/RestartRaceAction__Fields.h>
#if defined(IL2CPP_STRUCT_RestartRaceAction__Fields_DEFINED)
#define IL2CPP_STRUCT_RestartRaceAction_DEFINED
struct RestartRaceAction__Class;
struct RestartRaceAction {
    struct RestartRaceAction__Class* klass;
    MonitorData* monitor;
    struct RestartRaceAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RestartRaceAction_FWDDECL)
#define IL2CPP_STRUCT_RestartRaceAction_FWDDECL
#include <Modloader/app/structs/RestartRaceAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RestartRaceAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RestartRaceAction_DEFINED) && !defined(IL2CPP_STRUCT_RestartRaceAction_FWDDECL)
#include <Modloader/app/structs/RestartRaceAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RestartRaceAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
