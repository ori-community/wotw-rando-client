#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLeashPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLeashPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLeashPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLeashPuppet__Fields_DEFINED
struct FloatAnimationParameter;
struct MoonAnimation;
struct BlendAnimation;
struct GameObject;
struct SpiritLeashEffectPose;
struct SeinLeashPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct FloatAnimationParameter* AimAngleectionAnimationParameter;
    struct MoonAnimation* WatermillHangAnimation;
    struct BlendAnimation* CeilingHookJumpBlend;
    struct BlendAnimation* WallHookJumpBlend;
    struct BlendAnimation* Throw;
    struct BlendAnimation* ThrowAir;
    struct BlendAnimation* Pull;
    struct BlendAnimation* PullAir;
    struct BlendAnimation* GrabWallHook;
    struct BlendAnimation* GrabCeilingHook;
    struct BlendAnimation* Pulled;
    struct MoonAnimation* WallHookIdle;
    struct MoonAnimation* CeilingHookIdle;
    struct MoonAnimation* FlingJumpBlend;
    struct GameObject* SpiritLeashEffect;
    struct SpiritLeashEffectPose* SpiritLeashCurlPose;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLeashPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinLeashPuppet__Fields_FWDDECL
#include <Modloader/app/structs/BlendAnimation.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SpiritLeashEffectPose.h>
#endif
#undef IL2CPP_STRUCT_SeinLeashPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLeashPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinLeashPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinLeashPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLeashPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
