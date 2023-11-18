#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Job_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Job_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Job_DEFINED)
#include <Modloader/app/structs/NativeArray_1_System_Single_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Params.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_PerFrameReadOnly.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Params_DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_System_Single__DEFINED) && defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_PerFrameReadOnly_DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_Vector3__DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_Quaternion__DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Job_DEFINED
struct SimpleSwayAnimPostprocess_Job {
    int32_t m_jointCount;
    float m_chainLen;
    struct SimpleSwayAnimPostprocess_Params p;
    struct NativeArray_1_System_Single_ m_jointFrac;
    struct SimpleSwayAnimPostprocess_PerFrameReadOnly q;
    struct NativeArray_1_UnityEngine_Vector3_ m_jointPosWorld;
    struct NativeArray_1_UnityEngine_Vector3_ m_jointPosDelta;
    struct NativeArray_1_UnityEngine_Quaternion_ m_jointRotWorld;
    struct NativeArray_1_UnityEngine_Vector3_ m_tipPosWorld;
    struct NativeArray_1_UnityEngine_Vector3_ m_tipVeloWorld;
    struct Vector3 m_tipPosDeviationWorld;
    float maxDeviationDist;
    float maxDeviationDistSqr;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Job_FWDDECL)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Job_FWDDECL
#endif
#undef IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Job_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Job_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Job_FWDDECL)
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Job.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Job.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
