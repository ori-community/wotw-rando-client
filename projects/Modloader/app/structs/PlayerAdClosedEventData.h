#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerAdClosedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerAdClosedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdClosedEventData_DEFINED)
#include <Modloader/app/structs/PlayerAdClosedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerAdClosedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerAdClosedEventData_DEFINED
struct PlayerAdClosedEventData__Class;
struct PlayerAdClosedEventData {
    struct PlayerAdClosedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerAdClosedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerAdClosedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerAdClosedEventData_FWDDECL
#include <Modloader/app/structs/PlayerAdClosedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerAdClosedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdClosedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerAdClosedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerAdClosedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerAdClosedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
