#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields_DEFINED)
#include <Modloader/app/structs/MatchJointsJob.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_MatchJointsJob_DEFINED)
#define IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields_DEFINED
struct JobBasedAnimatorPostprocessGroupData__Array;
struct MoonAnimator;
struct JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields {
    struct MonoBehaviour__Fields _;
    struct JobBasedAnimatorPostprocessGroupData__Array* Groups;
    struct MoonAnimator* m_animator;
    struct MatchJointsJob m_job;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields_FWDDECL)
#define IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields_FWDDECL
#include <Modloader/app/structs/JobBasedAnimatorPostprocessGroupData__Array.h>
#include <Modloader/app/structs/MoonAnimator.h>
#endif
#undef IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields_DEFINED) && !defined(IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields_FWDDECL)
#include <Modloader/app/structs/JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobBasedAnimatorPostprocess_1_MatchJointsJob___Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
