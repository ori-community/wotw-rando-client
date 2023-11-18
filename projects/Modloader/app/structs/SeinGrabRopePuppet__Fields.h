#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabRopePuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabRopePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabRopePuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGrabRopePuppet__Fields_DEFINED
struct MoonAnimation;
struct MoonAnimation__Array;
struct SoundProvider;
struct SeinGrabRopePuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct MoonAnimation* PoleIdle;
    struct MoonAnimation* PoleSwitchSides;
    struct MoonAnimation* PoleDashToVerticalIdle;
    struct MoonAnimation* PoleHandstandIdle;
    struct MoonAnimation* PoleHandStandSwitchSides;
    struct MoonAnimation* PoleHandStandJumpAnimation;
    struct MoonAnimation* PoleHandStandJumpUpAnimation;
    struct MoonAnimation* PoleDashToDangleIdle;
    struct MoonAnimation* PoleDangleIdle;
    struct MoonAnimation* PoleDangleSwitchSides;
    struct MoonAnimation* PoleClimb;
    struct MoonAnimation* PoleSlideDown;
    struct MoonAnimation* PoleSlideDownSlippery;
    struct MoonAnimation* PoleJumpUp;
    struct MoonAnimation* CeilingIdle;
    struct MoonAnimation* CeilingMove;
    struct MoonAnimation* SwingUp;
    struct MoonAnimation__Array* SwingLoops;
    struct MoonAnimation* SwingJumpAnimation;
    struct MoonAnimation* SwingJumpWeakAnimation;
    struct SoundProvider* SwingUpJumpSound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabRopePuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabRopePuppet__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabRopePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabRopePuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabRopePuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGrabRopePuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabRopePuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
