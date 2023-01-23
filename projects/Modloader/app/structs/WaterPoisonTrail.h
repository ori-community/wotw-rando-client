#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterPoisonTrail_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterPoisonTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonTrail_DEFINED)
#include <Modloader/app/structs/WaterPoisonTrail__Fields.h>
#if defined(IL2CPP_STRUCT_WaterPoisonTrail__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterPoisonTrail_DEFINED
struct WaterPoisonTrail__Class;
struct WaterPoisonTrail {
    struct WaterPoisonTrail__Class* klass;
    MonitorData* monitor;
    struct WaterPoisonTrail__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterPoisonTrail_FWDDECL)
#define IL2CPP_STRUCT_WaterPoisonTrail_FWDDECL
#include <Modloader/app/structs/WaterPoisonTrail__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterPoisonTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonTrail_DEFINED) && !defined(IL2CPP_STRUCT_WaterPoisonTrail_FWDDECL)
#include <Modloader/app/structs/WaterPoisonTrail.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterPoisonTrail.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
