#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeZoneInfo_AdjustmentRule__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeZoneInfo_AdjustmentRule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_AdjustmentRule__Fields_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/TimeZoneInfo_TransitionTime.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_TimeSpan_DEFINED) && defined(IL2CPP_STRUCT_TimeZoneInfo_TransitionTime_DEFINED)
#define IL2CPP_STRUCT_TimeZoneInfo_AdjustmentRule__Fields_DEFINED
struct __declspec(align(8)) TimeZoneInfo_AdjustmentRule__Fields {
    struct DateTime m_dateStart;
    struct DateTime m_dateEnd;
    struct TimeSpan m_daylightDelta;
    struct TimeZoneInfo_TransitionTime m_daylightTransitionStart;
    struct TimeZoneInfo_TransitionTime m_daylightTransitionEnd;
    struct TimeSpan m_baseUtcOffsetDelta;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_AdjustmentRule__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimeZoneInfo_AdjustmentRule__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimeZoneInfo_AdjustmentRule__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_AdjustmentRule__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimeZoneInfo_AdjustmentRule__Fields_FWDDECL)
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
