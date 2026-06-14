#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinTrajectory__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinTrajectory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTrajectory__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SeinTrajectory_JumpType__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinTrajectory_JumpType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SeinTrajectory__Fields_DEFINED
struct SeinTrajectory__Fields {
    struct MonoBehaviour__Fields _;
    SeinTrajectory_JumpType__Enum Jump;

    float JumpingTime;
    float JumpingDuration;
    bool DoubleJump;
    float DoubleJumpTime;
    float RunningForwardTime;
    float RunningForwardDuration;
    float RunningBackwardTime;
    float RunningBackwardDuration;
    float StartSpeed;
    float TotalTime;
    bool Left;
    bool WallSlide;
    float WallSlideTime;
    float WallSlideDuration;
    struct Vector2 WallJump;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinTrajectory__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinTrajectory__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinTrajectory__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTrajectory__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinTrajectory__Fields_FWDDECL)
#include <Modloader/app/structs/SeinTrajectory__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinTrajectory__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
