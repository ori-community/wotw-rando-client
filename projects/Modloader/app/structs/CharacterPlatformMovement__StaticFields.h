#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterPlatformMovement__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterPlatformMovement__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement__StaticFields_DEFINED)
#define IL2CPP_STRUCT_CharacterPlatformMovement__StaticFields_DEFINED
struct CharacterPlatformMovement__StaticFields {
    bool AllowGroundPenetrationPrevention;
    bool UseNewCapsuleAPI;
    bool UseSafeMovementDistanceOptimization;
    float MaxSafeMovementDistance;
    bool DelayRaycasts;
    bool OptimizeRaycasts;
};
#endif
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_CharacterPlatformMovement__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CharacterPlatformMovement__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterPlatformMovement__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterPlatformMovement__StaticFields_FWDDECL)
#include <Modloader/app/structs/CharacterPlatformMovement__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterPlatformMovement__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
