#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWormDirectionalAnimations__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWormDirectionalAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormDirectionalAnimations__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarWormDirectionalAnimations__Fields_DEFINED
struct TextureAnimationWithTransitions;
struct __declspec(align(8)) MortarWormDirectionalAnimations__Fields {
    struct TextureAnimationWithTransitions* Left;
    struct TextureAnimationWithTransitions* UpLeft;
    struct TextureAnimationWithTransitions* Up;
    struct TextureAnimationWithTransitions* UpRight;
    struct TextureAnimationWithTransitions* Right;
};
#endif
#if !defined(IL2CPP_STRUCT_MortarWormDirectionalAnimations__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarWormDirectionalAnimations__Fields_FWDDECL
#include <Modloader/app/structs/TextureAnimationWithTransitions.h>
#endif
#undef IL2CPP_STRUCT_MortarWormDirectionalAnimations__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormDirectionalAnimations__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarWormDirectionalAnimations__Fields_FWDDECL)
#include <Modloader/app/structs/MortarWormDirectionalAnimations__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWormDirectionalAnimations__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
