#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceSkipAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceSkipAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSkipAction_DEFINED)
#include <Modloader/app/structs/RaceSkipAction__Fields.h>
#if defined(IL2CPP_STRUCT_RaceSkipAction__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceSkipAction_DEFINED
struct RaceSkipAction__Class;
struct RaceSkipAction {
    struct RaceSkipAction__Class* klass;
    MonitorData* monitor;
    struct RaceSkipAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceSkipAction_FWDDECL)
#define IL2CPP_STRUCT_RaceSkipAction_FWDDECL
#include <Modloader/app/structs/RaceSkipAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceSkipAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceSkipAction_DEFINED) && !defined(IL2CPP_STRUCT_RaceSkipAction_FWDDECL)
#include <Modloader/app/structs/RaceSkipAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceSkipAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
