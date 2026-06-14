#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetQueueStatisticsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetQueueStatisticsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetQueueStatisticsResult_DEFINED)
#include <Modloader/app/structs/GetQueueStatisticsResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetQueueStatisticsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetQueueStatisticsResult_DEFINED
struct GetQueueStatisticsResult__Class;
struct GetQueueStatisticsResult {
    struct GetQueueStatisticsResult__Class* klass;
    MonitorData* monitor;
    struct GetQueueStatisticsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetQueueStatisticsResult_FWDDECL)
#define IL2CPP_STRUCT_GetQueueStatisticsResult_FWDDECL
#include <Modloader/app/structs/GetQueueStatisticsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetQueueStatisticsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetQueueStatisticsResult_DEFINED) && !defined(IL2CPP_STRUCT_GetQueueStatisticsResult_FWDDECL)
#include <Modloader/app/structs/GetQueueStatisticsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetQueueStatisticsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
