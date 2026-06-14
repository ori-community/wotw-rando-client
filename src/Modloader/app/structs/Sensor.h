#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sensor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sensor_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sensor_DEFINED)
#include <Modloader/app/structs/Sensor__Fields.h>
#if defined(IL2CPP_STRUCT_Sensor__Fields_DEFINED)
#define IL2CPP_STRUCT_Sensor_DEFINED
struct Sensor__Class;
struct Sensor {
    struct Sensor__Class* klass;
    MonitorData* monitor;
    struct Sensor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Sensor_FWDDECL)
#define IL2CPP_STRUCT_Sensor_FWDDECL
#include <Modloader/app/structs/Sensor__Class.h>
#endif
#undef IL2CPP_STRUCT_Sensor_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sensor_DEFINED) && !defined(IL2CPP_STRUCT_Sensor_FWDDECL)
#include <Modloader/app/structs/Sensor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sensor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
