#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerDisplayNameChangedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerDisplayNameChangedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDisplayNameChangedEventData_DEFINED)
#include <Modloader/app/structs/PlayerDisplayNameChangedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerDisplayNameChangedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerDisplayNameChangedEventData_DEFINED
struct PlayerDisplayNameChangedEventData__Class;
struct PlayerDisplayNameChangedEventData {
    struct PlayerDisplayNameChangedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerDisplayNameChangedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerDisplayNameChangedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerDisplayNameChangedEventData_FWDDECL
#include <Modloader/app/structs/PlayerDisplayNameChangedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerDisplayNameChangedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDisplayNameChangedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerDisplayNameChangedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerDisplayNameChangedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerDisplayNameChangedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
