#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IdleOverride__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IdleOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdleOverride__Fields_DEFINED)
#define IL2CPP_STRUCT_IdleOverride__Fields_DEFINED
struct AnimationSwap;
struct MoonAnimation;
struct __declspec(align(8)) IdleOverride__Fields {
    bool ShouldOverride;
    struct AnimationSwap* IdleBlend;
    struct AnimationSwap* IdleYawn;
    struct MoonAnimation* LookBackAnimationIn;
    struct MoonAnimation* LookBackAnimationLoop;
    struct MoonAnimation* LookBackAnimationOut;
};
#endif
#if !defined(IL2CPP_STRUCT_IdleOverride__Fields_FWDDECL)
#define IL2CPP_STRUCT_IdleOverride__Fields_FWDDECL
#include <Modloader/app/structs/AnimationSwap.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_IdleOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IdleOverride__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IdleOverride__Fields_FWDDECL)
#include <Modloader/app/structs/IdleOverride__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IdleOverride__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
