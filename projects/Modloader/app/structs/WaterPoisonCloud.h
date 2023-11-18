#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterPoisonCloud_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterPoisonCloud_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonCloud_DEFINED)
#include <Modloader/app/structs/WaterPoisonCloud__Fields.h>
#if defined(IL2CPP_STRUCT_WaterPoisonCloud__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterPoisonCloud_DEFINED
struct WaterPoisonCloud__Class;
struct WaterPoisonCloud {
    struct WaterPoisonCloud__Class* klass;
    MonitorData* monitor;
    struct WaterPoisonCloud__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterPoisonCloud_FWDDECL)
#define IL2CPP_STRUCT_WaterPoisonCloud_FWDDECL
#include <Modloader/app/structs/WaterPoisonCloud__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterPoisonCloud_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoisonCloud_DEFINED) && !defined(IL2CPP_STRUCT_WaterPoisonCloud_FWDDECL)
#include <Modloader/app/structs/WaterPoisonCloud.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterPoisonCloud.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
