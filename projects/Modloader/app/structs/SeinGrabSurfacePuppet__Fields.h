#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrabSurfacePuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrabSurfacePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabSurfacePuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGrabSurfacePuppet__Fields_DEFINED
struct MoonAnimation;
struct FloatAnimationParameter;
struct SeinGrabSurfacePuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct MoonAnimation* ClimbIdle;
    struct MoonAnimation* Climb;
    struct MoonAnimation* SlideDown;
    struct MoonAnimation* GroundIdle;
    struct MoonAnimation* GroundMove;
    struct MoonAnimation* WheelIdle;
    struct MoonAnimation* WheelJump;
    struct MoonAnimation* CeilingJump;
    struct FloatAnimationParameter* SlopeParameter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrabSurfacePuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGrabSurfacePuppet__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinGrabSurfacePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrabSurfacePuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrabSurfacePuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGrabSurfacePuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrabSurfacePuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
