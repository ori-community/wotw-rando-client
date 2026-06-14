#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterPlatformMovement_KickbackEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterPlatformMovement_KickbackEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement_KickbackEntry__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CharacterPlatformMovement_KickbackEntry__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) CharacterPlatformMovement_KickbackEntry__Fields {
    struct AnimationCurve* Curve;
    struct Vector2 KickbackDirection;
    float KickbackMultiplier;
    float CurrentTime;
    float Duration;
    float AirHangTime;
    bool AirHangStarted;
    bool ApplyForceAlongTheGround;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement_KickbackEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterPlatformMovement_KickbackEntry__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_CharacterPlatformMovement_KickbackEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement_KickbackEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterPlatformMovement_KickbackEntry__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterPlatformMovement_KickbackEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterPlatformMovement_KickbackEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
