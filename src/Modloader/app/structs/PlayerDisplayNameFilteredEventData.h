#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerDisplayNameFilteredEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerDisplayNameFilteredEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDisplayNameFilteredEventData_DEFINED)
#include <Modloader/app/structs/PlayerDisplayNameFilteredEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerDisplayNameFilteredEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerDisplayNameFilteredEventData_DEFINED
struct PlayerDisplayNameFilteredEventData__Class;
struct PlayerDisplayNameFilteredEventData {
    struct PlayerDisplayNameFilteredEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerDisplayNameFilteredEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerDisplayNameFilteredEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerDisplayNameFilteredEventData_FWDDECL
#include <Modloader/app/structs/PlayerDisplayNameFilteredEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerDisplayNameFilteredEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDisplayNameFilteredEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerDisplayNameFilteredEventData_FWDDECL)
#include <Modloader/app/structs/PlayerDisplayNameFilteredEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerDisplayNameFilteredEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
