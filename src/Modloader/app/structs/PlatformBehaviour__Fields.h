#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED)
#define IL2CPP_STRUCT_PlatformBehaviour__Fields_DEFINED
struct CharacterPlatformMovement;
struct CharacterLeftRightMovement;
struct CharacterGravity;
struct CharacterGravityToGround;
struct PlatformMovementListOfColliders;
struct PlatformMovementForce;
struct CharacterCapsuleController;
struct CharacterInstantStop;
struct CharacterAirNoDeceleration;
struct CharacterUpwardsDeceleration;
struct CharacterApplyFrictionToSpeed;
struct CharacterJumpSustain;
struct CharacterVisuals;
struct PlatformBehaviour__Fields {
    struct MonoBehaviour__Fields _;
    struct CharacterPlatformMovement* PlatformMovement;
    struct CharacterLeftRightMovement* LeftRightMovement;
    struct CharacterGravity* Gravity;
    struct CharacterGravityToGround* GravityToGround;
    struct PlatformMovementListOfColliders* PlatformMovementListOfColliders;
    struct PlatformMovementForce* Force;
    struct CharacterCapsuleController* CapsuleController;
    struct CharacterInstantStop* InstantStop;
    struct CharacterAirNoDeceleration* AirNoDeceleration;
    struct CharacterUpwardsDeceleration* UpwardsDeceleration;
    struct CharacterApplyFrictionToSpeed* ApplyFrictionToSpeed;
    struct CharacterJumpSustain* JumpSustain;
    struct CharacterVisuals* Visuals;
    SurfaceMaterialType__Enum m_wallSurfaceMaterialType;

    SurfaceMaterialType__Enum m_groundSurfaceMaterialType;

    SurfaceMaterialType__Enum m_ceilingSurfaceMaterialType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PlatformBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CharacterAirNoDeceleration.h>
#include <Modloader/app/structs/CharacterApplyFrictionToSpeed.h>
#include <Modloader/app/structs/CharacterCapsuleController.h>
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterGravityToGround.h>
#include <Modloader/app/structs/CharacterInstantStop.h>
#include <Modloader/app/structs/CharacterJumpSustain.h>
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/CharacterUpwardsDeceleration.h>
#include <Modloader/app/structs/CharacterVisuals.h>
#include <Modloader/app/structs/PlatformMovementForce.h>
#include <Modloader/app/structs/PlatformMovementListOfColliders.h>
#endif
#undef IL2CPP_STRUCT_PlatformBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PlatformBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PlatformBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
