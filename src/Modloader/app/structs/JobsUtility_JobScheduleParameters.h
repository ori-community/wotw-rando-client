#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobsUtility_JobScheduleParameters_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobsUtility_JobScheduleParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobsUtility_JobScheduleParameters_DEFINED)
#include <Modloader/app/structs/JobHandle.h>
#if defined(IL2CPP_STRUCT_JobHandle_DEFINED)
#define IL2CPP_STRUCT_JobsUtility_JobScheduleParameters_DEFINED
struct JobsUtility_JobScheduleParameters {
    struct JobHandle Dependency;
    int32_t ScheduleMode;
    void* ReflectionData;
    void* JobDataPtr;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JobsUtility_JobScheduleParameters_FWDDECL)
#define IL2CPP_STRUCT_JobsUtility_JobScheduleParameters_FWDDECL
#endif
#undef IL2CPP_STRUCT_JobsUtility_JobScheduleParameters_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobsUtility_JobScheduleParameters_DEFINED) && !defined(IL2CPP_STRUCT_JobsUtility_JobScheduleParameters_FWDDECL)
#include <Modloader/app/structs/JobsUtility_JobScheduleParameters.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobsUtility_JobScheduleParameters.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
