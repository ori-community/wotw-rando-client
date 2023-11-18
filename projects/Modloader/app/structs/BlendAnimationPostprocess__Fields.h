#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendAnimationPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimationPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_BlendAnimationPostprocess__Fields_DEFINED
struct MoonAnimation;
struct AnimationMaskNode;
struct GameObject;
struct BlendAnimationPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    struct MoonAnimation* Animation;
    struct AnimationMaskNode* Mask_1;
    int32_t OrderNumber;
    bool AutoRemoveOnFinish;
    bool BlendInOut;
    float BlendInNormalizedDuration;
    float BlendOutNormalizedDuration;
    struct GameObject* m_animatedObjectCopy;
    struct ActiveAnimationHandle m_activeAnimation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendAnimationPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_BlendAnimationPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/AnimationMaskNode.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_BlendAnimationPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimationPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BlendAnimationPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/BlendAnimationPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendAnimationPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
