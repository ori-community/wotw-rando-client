#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabWall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabWall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabWall__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_SeinGrabWall__Fields_DEFINED
struct SurfaceToSoundProviderMap;
struct SeinGrabWall__Fields {
    struct CharacterState__Fields _;
    float WallClimbUpStepsPerSecond;
    float WallClimbDownStepsPerSecond;
    struct SurfaceToSoundProviderMap* WallGrabEnterSound;
    struct SurfaceToSoundProviderMap* WallGrabExitSound;
    struct SurfaceToSoundProviderMap* WallGrabStepUpSound;
    struct SurfaceToSoundProviderMap* WallGrabStepDownSound;
    float m_minimumSoundDelay;
    float m_lastWallGrabEnterSoundTime;
    float m_lastWallGrabExitSoundTime;
    float m_lastWallGrabStepDownSoundTime;
    bool LockVerticalMovement;
    float ClimbSpeedUp;
    float ClimbSpeedDown;
    float Acceleration;
    bool KeepMovingEdgeClimb;
    bool KeepMovingWallClimb;
    bool KeepMovingAboveTest;
    float KeepMovingAboveRayOut;
    float KeepMovingAboveDistMin;
    float KeepMovingAboveDistMax;
    float KeepMovingAboveDistPow;
    float SlowEdgeJumpDuration;
    float SlowEdgeJumpMaxSpeed;
    float SlowEdgeJumpAcceleration;
    float SlowEdgeJumpDecceleration;
    float SlowEdgeJumpGravityStrength;
    float m_currentTime;
    bool m_isGrabbing;
    float m_nextWallClimbUpTime;
    bool m_requiresRelease;
    struct ActiveAnimationHandle m_curAnim;
    bool m_slowEdgeJumpStarted;
    float m_slowEdgeJumpUntilTime;
    struct WwiseEventSystem_SoundHandle m_climbDownSoundHandle;
    bool m_movingOverTerrain;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabWall__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabWall__Fields_FWDDECL
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabWall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabWall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabWall__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGrabWall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabWall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
