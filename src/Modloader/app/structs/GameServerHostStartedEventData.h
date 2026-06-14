#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameServerHostStartedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameServerHostStartedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameServerHostStartedEventData_DEFINED)
#include <Modloader/app/structs/GameServerHostStartedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GameServerHostStartedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GameServerHostStartedEventData_DEFINED
struct GameServerHostStartedEventData__Class;
struct GameServerHostStartedEventData {
    struct GameServerHostStartedEventData__Class* klass;
    MonitorData* monitor;
    struct GameServerHostStartedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameServerHostStartedEventData_FWDDECL)
#define IL2CPP_STRUCT_GameServerHostStartedEventData_FWDDECL
#include <Modloader/app/structs/GameServerHostStartedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GameServerHostStartedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameServerHostStartedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GameServerHostStartedEventData_FWDDECL)
#include <Modloader/app/structs/GameServerHostStartedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameServerHostStartedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
