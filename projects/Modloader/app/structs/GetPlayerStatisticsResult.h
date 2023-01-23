#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerStatisticsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerStatisticsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerStatisticsResult_DEFINED)
#include <Modloader/app/structs/GetPlayerStatisticsResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerStatisticsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerStatisticsResult_DEFINED
struct GetPlayerStatisticsResult__Class;
struct GetPlayerStatisticsResult {
    struct GetPlayerStatisticsResult__Class* klass;
    MonitorData* monitor;
    struct GetPlayerStatisticsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerStatisticsResult_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerStatisticsResult_FWDDECL
#include <Modloader/app/structs/GetPlayerStatisticsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerStatisticsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerStatisticsResult_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerStatisticsResult_FWDDECL)
#include <Modloader/app/structs/GetPlayerStatisticsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerStatisticsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
