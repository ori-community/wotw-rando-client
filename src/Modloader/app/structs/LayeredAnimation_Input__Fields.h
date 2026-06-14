#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayeredAnimation_Input__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayeredAnimation_Input__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredAnimation_Input__Fields_DEFINED)
#include <Modloader/app/structs/MoonAnimatorLayerBlendingMode__Enum.h>
#if defined(IL2CPP_STRUCT_MoonAnimatorLayerBlendingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_LayeredAnimation_Input__Fields_DEFINED
struct MoonAnimation;
struct AvatarMask;
struct __declspec(align(8)) LayeredAnimation_Input__Fields {
    struct MoonAnimation* Animation;
    MoonAnimatorLayerBlendingMode__Enum BlendMode;

    struct AvatarMask* Mask_1;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayeredAnimation_Input__Fields_FWDDECL)
#define IL2CPP_STRUCT_LayeredAnimation_Input__Fields_FWDDECL
#include <Modloader/app/structs/AvatarMask.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_LayeredAnimation_Input__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredAnimation_Input__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LayeredAnimation_Input__Fields_FWDDECL)
#include <Modloader/app/structs/LayeredAnimation_Input__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayeredAnimation_Input__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
