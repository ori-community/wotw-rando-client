#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_State__Enum_DEFINED)
#define IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_State__Enum_DEFINED
enum class Sensor_SensorLineOfSightRequest_State__Enum : int32_t {
    NewIteration = 0x00000000,
    PendingCast1 = 0x00000001,
    PendingCast2 = 0x00000002,
    After1 = 0x00000003,
    PendingCast3 = 0x00000004,
    Finished = 0x00000005,
};
#endif
#if !defined(IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_State__Enum_FWDDECL)
#include <Modloader/app/structs/Sensor_SensorLineOfSightRequest_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sensor_SensorLineOfSightRequest_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
