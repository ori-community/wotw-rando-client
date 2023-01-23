#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionObject_AnimatorEvent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionObject_AnimatorEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_AnimatorEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionObject_AnimatorEvent__Fields_DEFINED
struct Animator;
struct Animation;
struct String;
struct __declspec(align(8)) InteractionObject_AnimatorEvent__Fields {
    struct Animator* animator;
    struct Animation* animation;
    struct String* animationState;
    float crossfadeTime;
    int32_t layer;
    bool resetNormalizedTime;
};
#endif
#if !defined(IL2CPP_STRUCT_InteractionObject_AnimatorEvent__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionObject_AnimatorEvent__Fields_FWDDECL
#include <Modloader/app/structs/Animation.h>
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_InteractionObject_AnimatorEvent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionObject_AnimatorEvent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionObject_AnimatorEvent__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionObject_AnimatorEvent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionObject_AnimatorEvent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
