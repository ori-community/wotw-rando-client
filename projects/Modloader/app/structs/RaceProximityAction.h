#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceProximityAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceProximityAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceProximityAction_DEFINED)
#include <Modloader/app/structs/RaceProximityAction__Fields.h>
#if defined(IL2CPP_STRUCT_RaceProximityAction__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceProximityAction_DEFINED
struct RaceProximityAction__Class;
struct RaceProximityAction {
    struct RaceProximityAction__Class* klass;
    MonitorData* monitor;
    struct RaceProximityAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceProximityAction_FWDDECL)
#define IL2CPP_STRUCT_RaceProximityAction_FWDDECL
#include <Modloader/app/structs/RaceProximityAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceProximityAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceProximityAction_DEFINED) && !defined(IL2CPP_STRUCT_RaceProximityAction_FWDDECL)
#include <Modloader/app/structs/RaceProximityAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceProximityAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
