#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinRide_RideState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinRide_RideState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRide_RideState_DEFINED)
#include <Modloader/app/structs/SeinRide_RideState__Fields.h>
#if defined(IL2CPP_STRUCT_SeinRide_RideState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinRide_RideState_DEFINED
struct SeinRide_RideState__Class;
struct SeinRide_RideState {
    struct SeinRide_RideState__Class* klass;
    MonitorData* monitor;
    struct SeinRide_RideState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinRide_RideState_FWDDECL)
#define IL2CPP_STRUCT_SeinRide_RideState_FWDDECL
#include <Modloader/app/structs/SeinRide_RideState__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinRide_RideState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRide_RideState_DEFINED) && !defined(IL2CPP_STRUCT_SeinRide_RideState_FWDDECL)
#include <Modloader/app/structs/SeinRide_RideState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinRide_RideState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
