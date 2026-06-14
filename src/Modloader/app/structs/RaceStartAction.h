#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceStartAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceStartAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStartAction_DEFINED)
#include <Modloader/app/structs/RaceStartAction__Fields.h>
#if defined(IL2CPP_STRUCT_RaceStartAction__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceStartAction_DEFINED
struct RaceStartAction__Class;
struct RaceStartAction {
    struct RaceStartAction__Class* klass;
    MonitorData* monitor;
    struct RaceStartAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceStartAction_FWDDECL)
#define IL2CPP_STRUCT_RaceStartAction_FWDDECL
#include <Modloader/app/structs/RaceStartAction__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceStartAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStartAction_DEFINED) && !defined(IL2CPP_STRUCT_RaceStartAction_FWDDECL)
#include <Modloader/app/structs/RaceStartAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceStartAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
