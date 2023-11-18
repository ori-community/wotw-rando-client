#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceStopAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceStopAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStopAction_DEFINED)
#include <Modloader/app/structs/RaceStopAction__Fields.h>
#if defined(IL2CPP_STRUCT_RaceStopAction__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceStopAction_DEFINED
struct RaceStopAction__Class;
struct RaceStopAction {
    struct RaceStopAction__Class* klass;
    MonitorData* monitor;
    struct RaceStopAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceStopAction_FWDDECL)
#define IL2CPP_STRUCT_RaceStopAction_FWDDECL
#include <Modloader/app/structs/RaceStopAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceStopAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStopAction_DEFINED) && !defined(IL2CPP_STRUCT_RaceStopAction_FWDDECL)
#include <Modloader/app/structs/RaceStopAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceStopAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
