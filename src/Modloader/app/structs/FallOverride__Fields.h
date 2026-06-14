#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FallOverride__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FallOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallOverride__Fields_DEFINED)
#define IL2CPP_STRUCT_FallOverride__Fields_DEFINED
struct SeinFallPuppet;
struct AnimationSwap;
struct __declspec(align(8)) FallOverride__Fields {
    struct SeinFallPuppet* Puppet;
    bool ShouldOverride;
    struct AnimationSwap* IdleBlend;
    struct AnimationSwap* MovingBlend;
    struct AnimationSwap* TurnBlend;
};
#endif
#if !defined(IL2CPP_STRUCT_FallOverride__Fields_FWDDECL)
#define IL2CPP_STRUCT_FallOverride__Fields_FWDDECL
#include <Modloader/app/structs/AnimationSwap.h>
#include <Modloader/app/structs/SeinFallPuppet.h>
#endif
#undef IL2CPP_STRUCT_FallOverride__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FallOverride__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FallOverride__Fields_FWDDECL)
#include <Modloader/app/structs/FallOverride__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FallOverride__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
