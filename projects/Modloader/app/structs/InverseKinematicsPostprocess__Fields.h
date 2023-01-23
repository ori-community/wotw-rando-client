#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InverseKinematicsPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InverseKinematicsPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_InverseKinematicsPostprocess__Fields_DEFINED
struct JointChain;
struct VectorAnimationParameter;
struct IK;
struct InverseKinematicsPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    struct JointChain* Chain;
    struct VectorAnimationParameter* TargetParameter;
    int32_t OrderNumber;
    float WeightOverride;
    bool UseWeightOverride;
    bool AllowFindInactiveChildren;
    struct IK* m_ik;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InverseKinematicsPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_InverseKinematicsPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/IK.h>
#include <Modloader/app/structs/JointChain.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_InverseKinematicsPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InverseKinematicsPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InverseKinematicsPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/InverseKinematicsPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InverseKinematicsPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
