#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdatePlayerStatisticsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdatePlayerStatisticsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdatePlayerStatisticsResult_DEFINED)
#include <Modloader/app/structs/UpdatePlayerStatisticsResult__Fields.h>
#if defined(IL2CPP_STRUCT_UpdatePlayerStatisticsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdatePlayerStatisticsResult_DEFINED
struct UpdatePlayerStatisticsResult__Class;
struct UpdatePlayerStatisticsResult {
    struct UpdatePlayerStatisticsResult__Class* klass;
    MonitorData* monitor;
    struct UpdatePlayerStatisticsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdatePlayerStatisticsResult_FWDDECL)
#define IL2CPP_STRUCT_UpdatePlayerStatisticsResult_FWDDECL
#include <Modloader/app/structs/UpdatePlayerStatisticsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdatePlayerStatisticsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdatePlayerStatisticsResult_DEFINED) && !defined(IL2CPP_STRUCT_UpdatePlayerStatisticsResult_FWDDECL)
#include <Modloader/app/structs/UpdatePlayerStatisticsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdatePlayerStatisticsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
