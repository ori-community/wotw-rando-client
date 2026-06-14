#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobBasedAnimatorPostprocessGroupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobBasedAnimatorPostprocessGroupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobBasedAnimatorPostprocessGroupData_DEFINED)
#define IL2CPP_STRUCT_JobBasedAnimatorPostprocessGroupData_DEFINED
struct AnimationPostprocessGroup;
struct JobBasedAnimatorPostprocessGroupData {
    struct AnimationPostprocessGroup* Group;
    bool Invert;
};
#endif
#if !defined(IL2CPP_STRUCT_JobBasedAnimatorPostprocessGroupData_FWDDECL)
#define IL2CPP_STRUCT_JobBasedAnimatorPostprocessGroupData_FWDDECL
#include <Modloader/app/structs/AnimationPostprocessGroup.h>
#endif
#undef IL2CPP_STRUCT_JobBasedAnimatorPostprocessGroupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobBasedAnimatorPostprocessGroupData_DEFINED) && !defined(IL2CPP_STRUCT_JobBasedAnimatorPostprocessGroupData_FWDDECL)
#include <Modloader/app/structs/JobBasedAnimatorPostprocessGroupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobBasedAnimatorPostprocessGroupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
