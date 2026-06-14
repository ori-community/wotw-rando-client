#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerAdEndedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerAdEndedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdEndedEventData_DEFINED)
#include <Modloader/app/structs/PlayerAdEndedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerAdEndedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerAdEndedEventData_DEFINED
struct PlayerAdEndedEventData__Class;
struct PlayerAdEndedEventData {
    struct PlayerAdEndedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerAdEndedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerAdEndedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerAdEndedEventData_FWDDECL
#include <Modloader/app/structs/PlayerAdEndedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerAdEndedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdEndedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerAdEndedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerAdEndedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerAdEndedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
