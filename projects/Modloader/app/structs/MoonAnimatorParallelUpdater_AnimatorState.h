#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimatorParallelUpdater_AnimatorState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimatorParallelUpdater_AnimatorState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater_AnimatorState_DEFINED)
#define IL2CPP_STRUCT_MoonAnimatorParallelUpdater_AnimatorState_DEFINED
struct MoonAnimator;
struct MoonAnimatorParallelUpdater_AnimatorState {
    struct MoonAnimator* Animator;
    bool ShouldEvaluate;
    bool ShouldEvaluateGraph;
    bool ShouldEvaluatePostprocess;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater_AnimatorState_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimatorParallelUpdater_AnimatorState_FWDDECL
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimatorParallelUpdater_AnimatorState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater_AnimatorState_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimatorParallelUpdater_AnimatorState_FWDDECL)
#include <Modloader/app/structs/MoonAnimatorParallelUpdater_AnimatorState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimatorParallelUpdater_AnimatorState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
