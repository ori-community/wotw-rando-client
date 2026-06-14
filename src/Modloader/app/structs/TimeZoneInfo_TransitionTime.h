#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeZoneInfo_TransitionTime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeZoneInfo_TransitionTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_TransitionTime_DEFINED)
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DayOfWeek__Enum.h>
#if defined(IL2CPP_STRUCT_DateTime_DEFINED) && defined(IL2CPP_STRUCT_DayOfWeek__Enum_DEFINED)
#define IL2CPP_STRUCT_TimeZoneInfo_TransitionTime_DEFINED
struct TimeZoneInfo_TransitionTime {
    struct DateTime m_timeOfDay;
    uint8_t m_month;
    uint8_t m_week;
    uint8_t m_day;
    DayOfWeek__Enum m_dayOfWeek;

    bool m_isFixedDateRule;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_TransitionTime_FWDDECL)
#define IL2CPP_STRUCT_TimeZoneInfo_TransitionTime_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimeZoneInfo_TransitionTime_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeZoneInfo_TransitionTime_DEFINED) && !defined(IL2CPP_STRUCT_TimeZoneInfo_TransitionTime_FWDDECL)
#include <Modloader/app/structs/TimeZoneInfo_TransitionTime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeZoneInfo_TransitionTime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
