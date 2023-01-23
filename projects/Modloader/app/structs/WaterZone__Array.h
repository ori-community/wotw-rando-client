#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterZone__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterZone__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterZone__Array_DEFINED)
#define IL2CPP_STRUCT_WaterZone__Array_DEFINED
struct WaterZone__Array__Class;
struct WaterZone;
struct WaterZone__Array {
    struct WaterZone__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct WaterZone* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_WaterZone__Array_FWDDECL)
#define IL2CPP_STRUCT_WaterZone__Array_FWDDECL
#include <Modloader/app/structs/WaterZone.h>
#include <Modloader/app/structs/WaterZone__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterZone__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterZone__Array_DEFINED) && !defined(IL2CPP_STRUCT_WaterZone__Array_FWDDECL)
#include <Modloader/app/structs/WaterZone__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterZone__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
