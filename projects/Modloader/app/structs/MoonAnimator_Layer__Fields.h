#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_Layer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_Layer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_Layer__Fields_DEFINED)
#include <Modloader/app/structs/MoonAnimatorLayerDefinition.h>
#if defined(IL2CPP_STRUCT_MoonAnimatorLayerDefinition_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_Layer__Fields_DEFINED
struct MoonAnimator_AnimationInstance;
struct IAnimation;
struct MoonAnimator_ActiveAnimation;
struct List_1_Moon_MoonAnimator_ActiveAnimation_;
struct MoonAnimator;
struct __declspec(align(8)) MoonAnimator_Layer__Fields {
    struct MoonAnimator_AnimationInstance* m_transitionTargetAnimationInstance;
    struct MoonAnimator_AnimationInstance* m_currentAnimationInstance;
    struct IAnimation* m_transitionTargetAnimation;
    struct IAnimation* m_currentAnimation;
    struct MoonAnimator_ActiveAnimation* m_currentActiveAnimation;
    struct List_1_Moon_MoonAnimator_ActiveAnimation_* m_activeAnimations;
    struct List_1_Moon_MoonAnimator_ActiveAnimation_* m_animationsToStop;
    struct MoonAnimator* m_animator;
    struct MoonAnimatorLayerDefinition m_definition;
    float m_weight;
    float m_blendDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_Layer__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_Layer__Fields_FWDDECL
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/List_1_Moon_MoonAnimator_ActiveAnimation_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonAnimator_ActiveAnimation.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_Layer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_Layer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_Layer__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_Layer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_Layer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
