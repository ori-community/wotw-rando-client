#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetQueueStatisticsResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetQueueStatisticsResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetQueueStatisticsResult__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#include <Modloader/app/structs/PlayFabResultCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabResultCommon__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UInt32__DEFINED)
#define IL2CPP_STRUCT_GetQueueStatisticsResult__Fields_DEFINED
struct Statistics;
struct GetQueueStatisticsResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct Nullable_1_UInt32_ NumberOfPlayersMatching;
    struct Statistics* TimeToMatchStatisticsInSeconds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetQueueStatisticsResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_GetQueueStatisticsResult__Fields_FWDDECL
#include <Modloader/app/structs/Statistics.h>
#endif
#undef IL2CPP_STRUCT_GetQueueStatisticsResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetQueueStatisticsResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GetQueueStatisticsResult__Fields_FWDDECL)
#include <Modloader/app/structs/GetQueueStatisticsResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetQueueStatisticsResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
