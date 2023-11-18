#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerCreatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCreatedEventData_DEFINED)
#include <Modloader/app/structs/PlayerCreatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerCreatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerCreatedEventData_DEFINED
struct PlayerCreatedEventData__Class;
struct PlayerCreatedEventData {
    struct PlayerCreatedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerCreatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerCreatedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerCreatedEventData_FWDDECL
#include <Modloader/app/structs/PlayerCreatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerCreatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerCreatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerCreatedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerCreatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerCreatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
