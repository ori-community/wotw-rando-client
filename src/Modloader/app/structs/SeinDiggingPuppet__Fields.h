#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDiggingPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDiggingPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDiggingPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDiggingPuppet__Fields_DEFINED
struct MoonAnimation;
struct FloatAnimationParameter;
struct SeinDiggingPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct MoonAnimation* AirDashAnimation;
    struct MoonAnimation* SandDashAnimation;
    struct MoonAnimation* DiggingAnimation;
    struct FloatAnimationParameter* DigBlendParameter;
    struct MoonAnimation* ExitSandAnimationTop;
    struct MoonAnimation* ExitSandAnimationBotton;
    struct MoonAnimation* ExitSandAnimationSides;
    struct MoonAnimation* DashSandExitAnimation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDiggingPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDiggingPuppet__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinDiggingPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDiggingPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDiggingPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDiggingPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDiggingPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
