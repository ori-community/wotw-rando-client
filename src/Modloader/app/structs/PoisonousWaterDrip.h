#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoisonousWaterDrip_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoisonousWaterDrip_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoisonousWaterDrip_DEFINED)
#include <Modloader/app/structs/PoisonousWaterDrip__Fields.h>
#if defined(IL2CPP_STRUCT_PoisonousWaterDrip__Fields_DEFINED)
#define IL2CPP_STRUCT_PoisonousWaterDrip_DEFINED
struct PoisonousWaterDrip__Class;
struct PoisonousWaterDrip {
    struct PoisonousWaterDrip__Class* klass;
    MonitorData* monitor;
    struct PoisonousWaterDrip__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoisonousWaterDrip_FWDDECL)
#define IL2CPP_STRUCT_PoisonousWaterDrip_FWDDECL
#include <Modloader/app/structs/PoisonousWaterDrip__Class.h>
#endif
#undef IL2CPP_STRUCT_PoisonousWaterDrip_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoisonousWaterDrip_DEFINED) && !defined(IL2CPP_STRUCT_PoisonousWaterDrip_FWDDECL)
#include <Modloader/app/structs/PoisonousWaterDrip.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoisonousWaterDrip.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
