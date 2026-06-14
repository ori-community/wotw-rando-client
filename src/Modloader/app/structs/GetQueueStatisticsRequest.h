#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetQueueStatisticsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetQueueStatisticsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetQueueStatisticsRequest_DEFINED)
#include <Modloader/app/structs/GetQueueStatisticsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetQueueStatisticsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetQueueStatisticsRequest_DEFINED
struct GetQueueStatisticsRequest__Class;
struct GetQueueStatisticsRequest {
    struct GetQueueStatisticsRequest__Class* klass;
    MonitorData* monitor;
    struct GetQueueStatisticsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetQueueStatisticsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetQueueStatisticsRequest_FWDDECL
#include <Modloader/app/structs/GetQueueStatisticsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetQueueStatisticsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetQueueStatisticsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetQueueStatisticsRequest_FWDDECL)
#include <Modloader/app/structs/GetQueueStatisticsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetQueueStatisticsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
