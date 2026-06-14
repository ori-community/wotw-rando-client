#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinRide_CartRidingState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinRide_CartRidingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRide_CartRidingState__Fields_DEFINED)
#include <Modloader/app/structs/SeinRide_RideState__Fields.h>
#if defined(IL2CPP_STRUCT_SeinRide_RideState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinRide_CartRidingState__Fields_DEFINED
struct MoonAnimation;
struct FloatAnimationParameter;
struct SeinRide_CartRidingState__Fields {
    struct SeinRide_RideState__Fields _;
    struct MoonAnimation* CartRidingAnimation;
    struct MoonAnimation* CartJumpAnimation;
    struct MoonAnimation* CartJumpLandAnimation;
    struct MoonAnimation* CartJumpFallAnimation;
    struct FloatAnimationParameter* CartOriIdleBlend;
    bool m_playingJumpAnim;
    bool m_playingJumpLandAnim;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinRide_CartRidingState__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinRide_CartRidingState__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinRide_CartRidingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRide_CartRidingState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinRide_CartRidingState__Fields_FWDDECL)
#include <Modloader/app/structs/SeinRide_CartRidingState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinRide_CartRidingState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
