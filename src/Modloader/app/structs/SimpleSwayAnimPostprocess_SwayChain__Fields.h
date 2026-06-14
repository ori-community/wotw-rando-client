#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSwayAnimPostprocess_SwayChain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_SwayChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_SwayChain__Fields_DEFINED)
#include <Modloader/app/structs/JobHandle.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_Job.h>
#if defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_Job_DEFINED) && defined(IL2CPP_STRUCT_JobHandle_DEFINED)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_SwayChain__Fields_DEFINED
struct Vector3__Array;
struct Quaternion__Array;
struct __declspec(align(8)) SimpleSwayAnimPostprocess_SwayChain__Fields {
    struct SimpleSwayAnimPostprocess_Job m_job;
    bool m_scheduled;
    bool m_executed;
    struct JobHandle m_jobHandle;
    int32_t m_jointCount;
    struct Vector3__Array* m_jointPosWorldIn;
    struct Vector3__Array* m_jointPosDeltaOut;
    struct Quaternion__Array* m_jointRotWorld;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_SwayChain__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleSwayAnimPostprocess_SwayChain__Fields_FWDDECL
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_SimpleSwayAnimPostprocess_SwayChain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_SwayChain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSwayAnimPostprocess_SwayChain__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_SwayChain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSwayAnimPostprocess_SwayChain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
