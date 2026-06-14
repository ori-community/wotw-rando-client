#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdatePlayerStatisticsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdatePlayerStatisticsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdatePlayerStatisticsRequest_DEFINED)
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_UpdatePlayerStatisticsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdatePlayerStatisticsRequest_DEFINED
struct UpdatePlayerStatisticsRequest__Class;
struct UpdatePlayerStatisticsRequest {
    struct UpdatePlayerStatisticsRequest__Class* klass;
    MonitorData* monitor;
    struct UpdatePlayerStatisticsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdatePlayerStatisticsRequest_FWDDECL)
#define IL2CPP_STRUCT_UpdatePlayerStatisticsRequest_FWDDECL
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdatePlayerStatisticsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdatePlayerStatisticsRequest_DEFINED) && !defined(IL2CPP_STRUCT_UpdatePlayerStatisticsRequest_FWDDECL)
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdatePlayerStatisticsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
