#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::TimeZoneInfo_TransitionTime {
    IL2CPP_REGISTER_METHOD(0x00107C00, app::DateTime, get_TimeOfDay, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114120, int32_t, get_Month, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00114130, int32_t, get_Week, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001C5DE0, int32_t, get_Day, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001155B0, app::DayOfWeek__Enum, get_DayOfWeek, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00113140, bool, get_IsFixedDateRule, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00203D30, bool, Equals_1, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x027BA6A0, bool, op_Inequality, (app::TimeZoneInfo_TransitionTime t1, app::TimeZoneInfo_TransitionTime t2))
    IL2CPP_REGISTER_METHOD(0x00203E20, bool, Equals_2, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr, app::TimeZoneInfo_TransitionTime other))
    IL2CPP_REGISTER_METHOD(0x00203E50, int32_t, GetHashCode, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027BA850, app::TimeZoneInfo_TransitionTime, CreateFixedDateRule, (app::DateTime time_of_day, int32_t month, int32_t day))
    IL2CPP_REGISTER_METHOD(0x027BA8F0, app::TimeZoneInfo_TransitionTime, CreateFloatingDateRule, (app::DateTime time_of_day, int32_t month, int32_t week, app::DayOfWeek__Enum day_of_week))
    IL2CPP_REGISTER_METHOD(0x027BA9A0, app::TimeZoneInfo_TransitionTime, CreateTransitionTime, (app::DateTime time_of_day, int32_t month, int32_t week, int32_t day, app::DayOfWeek__Enum day_of_week, bool is_fixed_date_rule))
    IL2CPP_REGISTER_METHOD(0x027BAA60, void, ValidateTransitionTime, (app::DateTime time_of_day, int32_t month, int32_t week, int32_t day, app::DayOfWeek__Enum day_of_week))
    IL2CPP_REGISTER_METHODINFO(0x047303E8, TimeZoneInfo_TransitionTime_ValidateTransitionTime__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00203E60, void, IDeserializationCallback_OnDeserialization, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHODINFO(0x04792BD8, TimeZoneInfo_TransitionTime_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00203E70, void, ISerializable_GetObjectData, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04710AC8, TimeZoneInfo_TransitionTime_System_Runtime_Serialization_ISerializable_GetObjectData__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00203FD0, void, ctor, (app::TimeZoneInfo_TransitionTime__Boxed * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHODINFO(0x04750B68, TimeZoneInfo_TransitionTime__ctor__MethodInfo)
    inline bool operator!=(app::TimeZoneInfo_TransitionTime t1, app::TimeZoneInfo_TransitionTime t2) {
        return op_Inequality(t1, t2);
    }
} // namespace app::classes::System::TimeZoneInfo_TransitionTime
