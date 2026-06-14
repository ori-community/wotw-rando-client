#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationListSwap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationListSwap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationListSwap__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationListSwap__Fields_DEFINED
struct MoonAnimation__Array;
struct __declspec(align(8)) AnimationListSwap__Fields {
    bool ShouldOVerride;
    struct MoonAnimation__Array* AnimationOverride;
    struct MoonAnimation__Array* OverriddenAnimation;
};
#endif
#if !defined(IL2CPP_STRUCT_AnimationListSwap__Fields_FWDDECL)
#define IL2CPP_STRUCT_AnimationListSwap__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation__Array.h>
#endif
#undef IL2CPP_STRUCT_AnimationListSwap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationListSwap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AnimationListSwap__Fields_FWDDECL)
#include <Modloader/app/structs/AnimationListSwap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationListSwap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
