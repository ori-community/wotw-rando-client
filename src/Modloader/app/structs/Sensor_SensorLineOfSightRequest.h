#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_DEFINED)
#include <Modloader/app/structs/Sensor_SensorLineOfSightRequest_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_DEFINED
struct AsyncRaycast;
struct Sensor;
struct Sensor_SensorLineOfSightRequest {
    Sensor_SensorLineOfSightRequest_State__Enum state;

    struct Vector3 origin;
    struct Vector3 target;
    int32_t iteration;
    bool final_result;
    struct AsyncRaycast* arc;
    struct Sensor* sensor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_FWDDECL)
#define IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_FWDDECL
#include <Modloader/app/structs/AsyncRaycast.h>
#include <Modloader/app/structs/Sensor.h>
#endif
#undef IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_DEFINED) && !defined(IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_FWDDECL)
#include <Modloader/app/structs/Sensor_SensorLineOfSightRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sensor_SensorLineOfSightRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
