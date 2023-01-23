#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundEnemy3D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundEnemy3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEnemy3D__Fields_DEFINED)
#include <Modloader/app/structs/Enemy3D__Fields.h>
#if defined(IL2CPP_STRUCT_Enemy3D__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundEnemy3D__Fields_DEFINED
struct PlatformMovement;
struct PlatformMovementListOfColliders;
struct Transform;
struct GroundEnemy3D__Fields {
    struct Enemy3D__Fields _;
    struct PlatformMovement* PlatformMovement;
    struct PlatformMovementListOfColliders* PlatformMovementListOfColliders;
    struct Transform* FeetTransform;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundEnemy3D__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundEnemy3D__Fields_FWDDECL
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PlatformMovementListOfColliders.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_GroundEnemy3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEnemy3D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundEnemy3D__Fields_FWDDECL)
#include <Modloader/app/structs/GroundEnemy3D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundEnemy3D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
