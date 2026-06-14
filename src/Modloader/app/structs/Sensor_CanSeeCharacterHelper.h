#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_DEFINED)
#include <Modloader/app/structs/Sensor_CanSeeCharacterHelper_State__Enum.h>
#include <Modloader/app/structs/Sensor_SensorLineOfSightRequest.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Sensor_SensorLineOfSightRequest_DEFINED)
#define IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_DEFINED
struct Sensor_CanSeeCharacterHelper {
    Sensor_CanSeeCharacterHelper_State__Enum state;

    bool prevSeeCharacter;
    struct Vector3 start;
    struct Vector2 target;
    bool targetInRange;
    struct Sensor_SensorLineOfSightRequest los1;
    struct Sensor_SensorLineOfSightRequest los2;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_FWDDECL)
#define IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_FWDDECL
#endif
#undef IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_DEFINED) && !defined(IL2CPP_STRUCT_Sensor_CanSeeCharacterHelper_FWDDECL)
#include <Modloader/app/structs/Sensor_CanSeeCharacterHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sensor_CanSeeCharacterHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
