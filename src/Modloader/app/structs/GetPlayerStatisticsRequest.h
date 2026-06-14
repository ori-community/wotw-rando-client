#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerStatisticsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerStatisticsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerStatisticsRequest_DEFINED)
#include <Modloader/app/structs/GetPlayerStatisticsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerStatisticsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerStatisticsRequest_DEFINED
struct GetPlayerStatisticsRequest__Class;
struct GetPlayerStatisticsRequest {
    struct GetPlayerStatisticsRequest__Class* klass;
    MonitorData* monitor;
    struct GetPlayerStatisticsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerStatisticsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerStatisticsRequest_FWDDECL
#include <Modloader/app/structs/GetPlayerStatisticsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerStatisticsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerStatisticsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerStatisticsRequest_FWDDECL)
#include <Modloader/app/structs/GetPlayerStatisticsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerStatisticsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
