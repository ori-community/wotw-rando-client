#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWallJumpPuppet_AnimationEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWallJumpPuppet_AnimationEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallJumpPuppet_AnimationEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWallJumpPuppet_AnimationEntry__Fields_DEFINED
struct MoonAnimation;
struct Event_1;
struct __declspec(align(8)) SeinWallJumpPuppet_AnimationEntry__Fields {
    struct MoonAnimation* Animation;
    struct Event_1* ExtraSound;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinWallJumpPuppet_AnimationEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinWallJumpPuppet_AnimationEntry__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinWallJumpPuppet_AnimationEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallJumpPuppet_AnimationEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinWallJumpPuppet_AnimationEntry__Fields_FWDDECL)
#include <Modloader/app/structs/SeinWallJumpPuppet_AnimationEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWallJumpPuppet_AnimationEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
