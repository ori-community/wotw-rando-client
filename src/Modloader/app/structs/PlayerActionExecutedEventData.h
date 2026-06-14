#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerActionExecutedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerActionExecutedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerActionExecutedEventData_DEFINED)
#include <Modloader/app/structs/PlayerActionExecutedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerActionExecutedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerActionExecutedEventData_DEFINED
struct PlayerActionExecutedEventData__Class;
struct PlayerActionExecutedEventData {
    struct PlayerActionExecutedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerActionExecutedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerActionExecutedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerActionExecutedEventData_FWDDECL
#include <Modloader/app/structs/PlayerActionExecutedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerActionExecutedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerActionExecutedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerActionExecutedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerActionExecutedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerActionExecutedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
