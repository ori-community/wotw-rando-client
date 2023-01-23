#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterZone_DEFINED)
#include <Modloader/app/structs/WaterZone__Fields.h>
#if defined(IL2CPP_STRUCT_WaterZone__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterZone_DEFINED
struct WaterZone__Class;
struct WaterZone {
    struct WaterZone__Class* klass;
    MonitorData* monitor;
    struct WaterZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterZone_FWDDECL)
#define IL2CPP_STRUCT_WaterZone_FWDDECL
#include <Modloader/app/structs/WaterZone__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterZone_DEFINED) && !defined(IL2CPP_STRUCT_WaterZone_FWDDECL)
#include <Modloader/app/structs/WaterZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
