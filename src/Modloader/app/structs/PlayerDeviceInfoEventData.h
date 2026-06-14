#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayerDeviceInfoEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayerDeviceInfoEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDeviceInfoEventData_DEFINED)
#include <Modloader/app/structs/PlayerDeviceInfoEventData__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerDeviceInfoEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayerDeviceInfoEventData_DEFINED
struct PlayerDeviceInfoEventData__Class;
struct PlayerDeviceInfoEventData {
    struct PlayerDeviceInfoEventData__Class* klass;
    MonitorData* monitor;
    struct PlayerDeviceInfoEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayerDeviceInfoEventData_FWDDECL)
#define IL2CPP_STRUCT_PlayerDeviceInfoEventData_FWDDECL
#include <Modloader/app/structs/PlayerDeviceInfoEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayerDeviceInfoEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayerDeviceInfoEventData_DEFINED) && !defined(IL2CPP_STRUCT_PlayerDeviceInfoEventData_FWDDECL)
#include <Modloader/app/structs/PlayerDeviceInfoEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayerDeviceInfoEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
