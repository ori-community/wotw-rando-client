#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovingPlatformsController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovingPlatformsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingPlatformsController__Fields_DEFINED)
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED)
#define IL2CPP_STRUCT_MovingPlatformsController__Fields_DEFINED
struct PlatformMovement;
struct Transform;
struct __declspec(align(8)) MovingPlatformsController__Fields {
    bool IsOnMovingPlatform;
    bool m_wasAttached;
    struct Vector2 Velocity;
    bool m_ignoreForAFrameBecauseOfUnitysDelayedCollisionCallbacks;
    bool m_dontUpdateVelocityThisFrame;
    struct PlatformMovement* m_platformMovement;
    struct Transform* m_groundPlatform;
    struct Transform* m_oldGroundPlatform;
    struct Matrix4x4 m_groundPlatformMatrix;
    struct Transform* m_ceilingPlatform;
    struct Transform* m_oldCeilingPlatform;
    struct Matrix4x4 m_ceilingPlatformMatrix;
    struct Transform* m_wallLeftPlatform;
    struct Transform* m_oldWallLeftPlatform;
    struct Matrix4x4 m_wallLeftPlatformMatrix;
    struct Transform* m_wallRightPlatform;
    struct Transform* m_oldWallRightPlatform;
    struct Matrix4x4 m_wallRightPlatformMatrix;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovingPlatformsController__Fields_FWDDECL)
#define IL2CPP_STRUCT_MovingPlatformsController__Fields_FWDDECL
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MovingPlatformsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingPlatformsController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MovingPlatformsController__Fields_FWDDECL)
#include <Modloader/app/structs/MovingPlatformsController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovingPlatformsController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
