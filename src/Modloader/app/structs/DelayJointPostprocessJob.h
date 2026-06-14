#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayJointPostprocessJob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayJointPostprocessJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayJointPostprocessJob_DEFINED)
#include <Modloader/app/structs/NativeArray_1_System_Single_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Experimental_Animations_TransformStreamHandle_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/Quaternion.h>
#if defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_Experimental_Animations_TransformStreamHandle__DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_System_Single__DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_Quaternion__DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED)
#define IL2CPP_STRUCT_DelayJointPostprocessJob_DEFINED
struct DelayJointPostprocessJob {
    float Weight;
    bool Snap;
    struct NativeArray_1_UnityEngine_Experimental_Animations_TransformStreamHandle_ DelayedRotationsTransformHandles;
    struct NativeArray_1_System_Single_ DelayedRotationsSmoothTimes;
    struct NativeArray_1_UnityEngine_Quaternion_ DelayedRotationsCurrentValues;
    struct NativeArray_1_UnityEngine_Quaternion_ DelayedRotationsDerivatives;
    struct Quaternion RigRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelayJointPostprocessJob_FWDDECL)
#define IL2CPP_STRUCT_DelayJointPostprocessJob_FWDDECL
#endif
#undef IL2CPP_STRUCT_DelayJointPostprocessJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayJointPostprocessJob_DEFINED) && !defined(IL2CPP_STRUCT_DelayJointPostprocessJob_FWDDECL)
#include <Modloader/app/structs/DelayJointPostprocessJob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayJointPostprocessJob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
