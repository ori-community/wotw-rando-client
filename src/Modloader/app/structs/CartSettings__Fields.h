#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_CartSettings__Fields_DEFINED
struct __declspec(align(8)) CartSettings__Fields {
    float BaseSpeed;
    float BaseAcceleration;
    float BaseDecceleration;
    float AirAcceleration;
    float AirDecceleration;
    float AdditiveControllerSpeedForward;
    float ManualAccelerationOnRail;
    float ManualAccelerationOnAir;
    float AdditiveControllerSpeedBackward;
    float ManualDeccelerationOnRail;
    float ManualDeccelerationOnAir;
    float BrakingDuration;
    float MinPercentageOfTimeToAllowBraking;
    int32_t AmountOfRailChecks;
};
#endif
#if !defined(IL2CPP_STRUCT_CartSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CartSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartSettings__Fields_FWDDECL)
#include <Modloader/app/structs/CartSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
