#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED
struct AnimationCurve;
struct EntityWeightData_EntityWeightSettings {
    float Gravity;
    float MaxFallSpeed;
    float GroundAcceleration;
    float AirAcceleration;
    float Deceleration;
    float AirDrag;
    float KickbackMultiplier;
    float KnockupMultiplier;
    float KickbackInputMultiplier;
    struct Vector2 KickbackInputForceClamp;
    float AirHorizontalKnockbackMultiplier;
    float AirComboPullInValue;
    float AirComboPullInDistanceX;
    float AirComboPullInDistanceY;
    float MinForceWhenJuggling;
    float GroundHorizontalKnockbackMultiplier;
    float KickbackBounceOffGroundMultiplier;
    float KnockupMax;
    float KickbackMax;
    float BashForceMultiplier;
    float DeathKickbackMinBoost;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinUpDirection;
    float DeathKickbackClampMaxMagnitude;
    float DeathOffGroundBounceMultiplier;
    float BashKickbackMultiplier;
    float DrowningDecelerationTime;
    struct AnimationCurve* DrowningDecelerationCurve;
    float InitialMaxDrowningSpeedPerAxis;
    float InitialSpeedMultiplier;
    float TargetDrowningSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_FWDDECL)
#define IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED) && !defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_FWDDECL)
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
