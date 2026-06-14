#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_DEFINED
struct MoonAnimator;
struct IAnimation;
struct __declspec(align(8)) MoonAnimator_AnimationInstance__Fields {
    int32_t _UserId_k__BackingField;
    struct MoonAnimator* m_animator;
    struct IAnimation* m_animation;
    bool m_isPreview;
    bool m_groupsDisabled;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_FWDDECL
#include <Modloader/app/structs/IAnimation.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
