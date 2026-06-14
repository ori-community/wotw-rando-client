#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerAdStartedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerAdStartedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdStartedEventData_DEFINED)
#include <Modloader/app/structs/PlayerAdStartedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerAdStartedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerAdStartedEventData_DEFINED
struct PlayerAdStartedEventData__Class;
struct PlayerAdStartedEventData {
    struct PlayerAdStartedEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerAdStartedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerAdStartedEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerAdStartedEventData_FWDDECL
#include <Modloader/app/structs/PlayerAdStartedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerAdStartedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerAdStartedEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerAdStartedEventData_FWDDECL)
#include <Modloader/app/structs/PlayerAdStartedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerAdStartedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
