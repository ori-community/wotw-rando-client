#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Job_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Job_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Job_DEFINED)
#include <Modloader/app/structs/NativeArray_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Params.h>
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_PerFrameReadOnly.h>
#if defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Params_DEFINED) && defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_PerFrameReadOnly_DEFINED) && defined(IL2CPP_STRUCT_NativeArray_1_UnityEngine_Vector3__DEFINED)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Job_DEFINED
struct SimpleSwayBossAnimPostprocess_Job {
    struct SimpleSwayBossAnimPostprocess_Params p;
    struct SimpleSwayBossAnimPostprocess_PerFrameReadOnly q;
    struct NativeArray_1_UnityEngine_Vector3_ m_jointPosLocalInitial;
    struct NativeArray_1_UnityEngine_Vector3_ m_jointUpWorldInitial;
    struct NativeArray_1_UnityEngine_Vector3_ m_tipPosWorld;
    struct NativeArray_1_UnityEngine_Vector3_ m_tipVeloWorld;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Job_FWDDECL)
#define IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Job_FWDDECL
#endif
#undef IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Job_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Job_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSwayBossAnimPostprocess_Job_FWDDECL)
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Job.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSwayBossAnimPostprocess_Job.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
