#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameServerHostStoppedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameServerHostStoppedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameServerHostStoppedEventData_DEFINED)
#include <Modloader/app/structs/GameServerHostStoppedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GameServerHostStoppedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GameServerHostStoppedEventData_DEFINED
struct GameServerHostStoppedEventData__Class;
struct GameServerHostStoppedEventData {
    struct GameServerHostStoppedEventData__Class* klass;
    MonitorData* monitor;
    struct GameServerHostStoppedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameServerHostStoppedEventData_FWDDECL)
#define IL2CPP_STRUCT_GameServerHostStoppedEventData_FWDDECL
#include <Modloader/app/structs/GameServerHostStoppedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GameServerHostStoppedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameServerHostStoppedEventData_DEFINED) && !defined(IL2CPP_STRUCT_GameServerHostStoppedEventData_FWDDECL)
#include <Modloader/app/structs/GameServerHostStoppedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameServerHostStoppedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
