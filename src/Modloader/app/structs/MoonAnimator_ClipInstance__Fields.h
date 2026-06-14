#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimator_ClipInstance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimator_ClipInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_ClipInstance__Fields_DEFINED)
#include <Modloader/app/structs/AnimationClipPlayable.h>
#include <Modloader/app/structs/MoonAnimator_AnimationInstance__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimator_AnimationInstance__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimationClipPlayable_DEFINED)
#define IL2CPP_STRUCT_MoonAnimator_ClipInstance__Fields_DEFINED
struct ClipAnimation;
struct MoonAnimator_ClipInstance__Fields {
    struct MoonAnimator_AnimationInstance__Fields _;
    struct AnimationClipPlayable m_clipPlayable;
    struct ClipAnimation* m_clipAnimation;
    float m_previousTime;
    float m_clipLength;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimator_ClipInstance__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimator_ClipInstance__Fields_FWDDECL
#include <Modloader/app/structs/ClipAnimation.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimator_ClipInstance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimator_ClipInstance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimator_ClipInstance__Fields_FWDDECL)
#include <Modloader/app/structs/MoonAnimator_ClipInstance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimator_ClipInstance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
