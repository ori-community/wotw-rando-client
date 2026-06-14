#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSlicedActivationTask_ObjectActivationInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSlicedActivationTask_ObjectActivationInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedActivationTask_ObjectActivationInfo_DEFINED)
#define IL2CPP_STRUCT_TimeSlicedActivationTask_ObjectActivationInfo_DEFINED
struct String;
struct TimeSlicedActivationTask_ObjectActivationInfo {
    struct String* ObjectName;
    float ActivationTime;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeSlicedActivationTask_ObjectActivationInfo_FWDDECL)
#define IL2CPP_STRUCT_TimeSlicedActivationTask_ObjectActivationInfo_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TimeSlicedActivationTask_ObjectActivationInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSlicedActivationTask_ObjectActivationInfo_DEFINED) && !defined(IL2CPP_STRUCT_TimeSlicedActivationTask_ObjectActivationInfo_FWDDECL)
#include <Modloader/app/structs/TimeSlicedActivationTask_ObjectActivationInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSlicedActivationTask_ObjectActivationInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
