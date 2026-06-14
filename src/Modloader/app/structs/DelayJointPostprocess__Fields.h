#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayJointPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayJointPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob___Fields.h>
#if defined(IL2CPP_STRUCT_JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob___Fields_DEFINED)
#define IL2CPP_STRUCT_DelayJointPostprocess__Fields_DEFINED
struct DelayJointPostprocess_JointData__Array;
struct DelayJointPostprocess__Fields {
    struct JobBasedAnimatorPostprocess_1_DelayJointPostprocessJob___Fields _;
    struct DelayJointPostprocess_JointData__Array* Joints;
    float m_previousDeterminantSign;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_DelayJointPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/DelayJointPostprocess_JointData__Array.h>
#endif
#undef IL2CPP_STRUCT_DelayJointPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DelayJointPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/DelayJointPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayJointPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
