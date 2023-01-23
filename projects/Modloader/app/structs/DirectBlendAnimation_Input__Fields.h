#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectBlendAnimation_Input__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectBlendAnimation_Input__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectBlendAnimation_Input__Fields_DEFINED)
#define IL2CPP_STRUCT_DirectBlendAnimation_Input__Fields_DEFINED
struct FloatAnimationParameter;
struct MoonAnimation;
struct AvatarMask;
struct __declspec(align(8)) DirectBlendAnimation_Input__Fields {
    struct FloatAnimationParameter* Parameter;
    float FixedWeight;
    struct MoonAnimation* Animation;
    bool Additive;
    struct AvatarMask* Mask_1;
};
#endif
#if !defined(IL2CPP_STRUCT_DirectBlendAnimation_Input__Fields_FWDDECL)
#define IL2CPP_STRUCT_DirectBlendAnimation_Input__Fields_FWDDECL
#include <Modloader/app/structs/AvatarMask.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_DirectBlendAnimation_Input__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectBlendAnimation_Input__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DirectBlendAnimation_Input__Fields_FWDDECL)
#include <Modloader/app/structs/DirectBlendAnimation_Input__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectBlendAnimation_Input__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
