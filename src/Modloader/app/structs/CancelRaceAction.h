#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancelRaceAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancelRaceAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelRaceAction_DEFINED)
#include <Modloader/app/structs/CancelRaceAction__Fields.h>
#if defined(IL2CPP_STRUCT_CancelRaceAction__Fields_DEFINED)
#define IL2CPP_STRUCT_CancelRaceAction_DEFINED
struct CancelRaceAction__Class;
struct CancelRaceAction {
    struct CancelRaceAction__Class* klass;
    MonitorData* monitor;
    struct CancelRaceAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CancelRaceAction_FWDDECL)
#define IL2CPP_STRUCT_CancelRaceAction_FWDDECL
#include <Modloader/app/structs/CancelRaceAction__Class.h>
#endif
#undef IL2CPP_STRUCT_CancelRaceAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancelRaceAction_DEFINED) && !defined(IL2CPP_STRUCT_CancelRaceAction_FWDDECL)
#include <Modloader/app/structs/CancelRaceAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancelRaceAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
