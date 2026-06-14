#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_DEFINED)
#include <Modloader/app/structs/BrainScript__Fields.h>
#if defined(IL2CPP_STRUCT_BrainScript__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_DEFINED
struct GameObject;
struct BaseAnimator;
struct PetrifiedOwlStats;
struct MoonAnimator;
struct List_1_Moon_AnimationPostprocess_;
struct PetrifiedOwlBrainBase__Fields {
    struct BrainScript__Fields _;
    struct GameObject* OwlAnimator;
    struct GameObject* OwlEntity;
    struct BaseAnimator* IdleAnimator;
    struct PetrifiedOwlStats* Stats;
    struct MoonAnimator* m_owlAnimator;
    bool m_brainStarted;
    struct List_1_Moon_AnimationPostprocess_* m_animationPostprocesses;
    float m_duration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Moon_AnimationPostprocess_.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBrainBase__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBrainBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBrainBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
