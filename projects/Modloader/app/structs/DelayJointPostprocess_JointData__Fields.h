#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayJointPostprocess_JointData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayJointPostprocess_JointData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess_JointData__Fields_DEFINED)
#define IL2CPP_STRUCT_DelayJointPostprocess_JointData__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) DelayJointPostprocess_JointData__Fields {
    struct Transform* Transform;
    float RotationSmoothTime;
};
#endif
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess_JointData__Fields_FWDDECL)
#define IL2CPP_STRUCT_DelayJointPostprocess_JointData__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_DelayJointPostprocess_JointData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayJointPostprocess_JointData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DelayJointPostprocess_JointData__Fields_FWDDECL)
#include <Modloader/app/structs/DelayJointPostprocess_JointData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayJointPostprocess_JointData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
