#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabWallPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabWallPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabWallPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGrabWallPuppet__Fields_DEFINED
struct FloatAnimationParameter;
struct MoonAnimation;
struct RTPC;
struct SeinGrabWallPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct FloatAnimationParameter* SlopeParameter;
    struct MoonAnimation* Idle;
    struct MoonAnimation* ClimbUp;
    struct MoonAnimation* ClimbDown;
    struct MoonAnimation* GrabAway;
    struct RTPC* SlideSpeedRTPC;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabWallPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabWallPuppet__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/RTPC.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabWallPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabWallPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabWallPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGrabWallPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabWallPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
