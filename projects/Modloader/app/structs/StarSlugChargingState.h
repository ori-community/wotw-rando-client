#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarSlugChargingState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarSlugChargingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugChargingState_DEFINED)
#include <Modloader/app/structs/StarSlugChargingState__Fields.h>
#if defined(IL2CPP_STRUCT_StarSlugChargingState__Fields_DEFINED)
#define IL2CPP_STRUCT_StarSlugChargingState_DEFINED
struct StarSlugChargingState__Class;
struct StarSlugChargingState {
    struct StarSlugChargingState__Class* klass;
    MonitorData* monitor;
    struct StarSlugChargingState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StarSlugChargingState_FWDDECL)
#define IL2CPP_STRUCT_StarSlugChargingState_FWDDECL
#include <Modloader/app/structs/StarSlugChargingState__Class.h>
#endif
#undef IL2CPP_STRUCT_StarSlugChargingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugChargingState_DEFINED) && !defined(IL2CPP_STRUCT_StarSlugChargingState_FWDDECL)
#include <Modloader/app/structs/StarSlugChargingState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarSlugChargingState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
