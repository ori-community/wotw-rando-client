#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewEntityPlatformMovement_KickbackEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewEntityPlatformMovement_KickbackEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewEntityPlatformMovement_KickbackEntry__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_NewEntityPlatformMovement_KickbackEntry__Fields_DEFINED
struct AnimationCurve;
struct Transform;
struct __declspec(align(8)) NewEntityPlatformMovement_KickbackEntry__Fields {
    struct AnimationCurve* Curve;
    struct Vector2 KickbackDirection;
    float KickbackMultiplier;
    float CurrentTime;
    float Duration;
    bool AddLastValueToLocalSpeed;
    float AirSustainDuration;
    bool InAirSustain;
    float AirSustainStartTime;
    bool MatchKickupHeight;
    struct Transform* HeightMatchTranform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewEntityPlatformMovement_KickbackEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_NewEntityPlatformMovement_KickbackEntry__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_NewEntityPlatformMovement_KickbackEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewEntityPlatformMovement_KickbackEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NewEntityPlatformMovement_KickbackEntry__Fields_FWDDECL)
#include <Modloader/app/structs/NewEntityPlatformMovement_KickbackEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewEntityPlatformMovement_KickbackEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
