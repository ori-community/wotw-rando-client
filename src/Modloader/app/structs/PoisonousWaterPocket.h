#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoisonousWaterPocket_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoisonousWaterPocket_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoisonousWaterPocket_DEFINED)
#include <Modloader/app/structs/PoisonousWaterPocket__Fields.h>
#if defined(IL2CPP_STRUCT_PoisonousWaterPocket__Fields_DEFINED)
#define IL2CPP_STRUCT_PoisonousWaterPocket_DEFINED
struct PoisonousWaterPocket__Class;
struct PoisonousWaterPocket {
    struct PoisonousWaterPocket__Class* klass;
    MonitorData* monitor;
    struct PoisonousWaterPocket__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoisonousWaterPocket_FWDDECL)
#define IL2CPP_STRUCT_PoisonousWaterPocket_FWDDECL
#include <Modloader/app/structs/PoisonousWaterPocket__Class.h>
#endif
#undef IL2CPP_STRUCT_PoisonousWaterPocket_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoisonousWaterPocket_DEFINED) && !defined(IL2CPP_STRUCT_PoisonousWaterPocket_FWDDECL)
#include <Modloader/app/structs/PoisonousWaterPocket.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoisonousWaterPocket.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
