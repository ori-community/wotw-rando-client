#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormChargingState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormChargingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormChargingState_DEFINED)
#include <Modloader/app/structs/WormChargingState__Fields.h>
#if defined(IL2CPP_STRUCT_WormChargingState__Fields_DEFINED)
#define IL2CPP_STRUCT_WormChargingState_DEFINED
struct WormChargingState__Class;
struct WormChargingState {
    struct WormChargingState__Class* klass;
    MonitorData* monitor;
    struct WormChargingState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormChargingState_FWDDECL)
#define IL2CPP_STRUCT_WormChargingState_FWDDECL
#include <Modloader/app/structs/WormChargingState__Class.h>
#endif
#undef IL2CPP_STRUCT_WormChargingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormChargingState_DEFINED) && !defined(IL2CPP_STRUCT_WormChargingState_FWDDECL)
#include <Modloader/app/structs/WormChargingState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormChargingState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
