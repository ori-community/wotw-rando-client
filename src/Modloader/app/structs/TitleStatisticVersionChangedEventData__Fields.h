#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleStatisticVersionChangedEventData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleStatisticVersionChangedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleStatisticVersionChangedEventData__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption_.h>
#include <Modloader/app/structs/PlayStreamEventBase__Fields.h>
#if defined(IL2CPP_STRUCT_PlayStreamEventBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption__DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_DateTime__DEFINED)
#define IL2CPP_STRUCT_TitleStatisticVersionChangedEventData__Fields_DEFINED
struct String;
struct TitleStatisticVersionChangedEventData__Fields {
    struct PlayStreamEventBase__Fields _;
    struct Nullable_1_PlayFab_PlayStreamModels_StatisticResetIntervalOption_ ScheduledResetInterval;
    struct Nullable_1_DateTime_ ScheduledResetTime;
    struct String* StatisticName;
    uint32_t StatisticVersion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleStatisticVersionChangedEventData__Fields_FWDDECL)
#define IL2CPP_STRUCT_TitleStatisticVersionChangedEventData__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TitleStatisticVersionChangedEventData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleStatisticVersionChangedEventData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TitleStatisticVersionChangedEventData__Fields_FWDDECL)
#include <Modloader/app/structs/TitleStatisticVersionChangedEventData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleStatisticVersionChangedEventData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
