#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/TimeZoneInfo_AdjustmentRule.h>
#include <Modloader/app/structs/TimeZoneInfo_TransitionTime.h>

namespace app::classes::System::TimeZoneInfo_AdjustmentRule {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::DateTime, get_DateStart, (app::TimeZoneInfo_AdjustmentRule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::DateTime, get_DateEnd, (app::TimeZoneInfo_AdjustmentRule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::TimeSpan, get_DaylightDelta, (app::TimeZoneInfo_AdjustmentRule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027B9780, app::TimeZoneInfo_TransitionTime, get_DaylightTransitionStart, (app::TimeZoneInfo_AdjustmentRule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027B97A0, app::TimeZoneInfo_TransitionTime, get_DaylightTransitionEnd, (app::TimeZoneInfo_AdjustmentRule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027B97C0, bool, Equals, (app::TimeZoneInfo_AdjustmentRule * this_ptr, app::TimeZoneInfo_AdjustmentRule* other))
    IL2CPP_REGISTER_METHOD(0x027B9980, int32_t, GetHashCode, (app::TimeZoneInfo_AdjustmentRule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::TimeZoneInfo_AdjustmentRule * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027B99A0, app::TimeZoneInfo_AdjustmentRule*, CreateAdjustmentRule_1, (app::DateTime date_start, app::DateTime date_end, app::TimeSpan daylight_delta, app::TimeZoneInfo_TransitionTime daylight_transition_start, app::TimeZoneInfo_TransitionTime daylight_transition_end))
    IL2CPP_REGISTER_METHOD(0x027B9BE0, app::TimeZoneInfo_AdjustmentRule*, CreateAdjustmentRule_2, (app::DateTime date_start, app::DateTime date_end, app::TimeSpan daylight_delta, app::TimeZoneInfo_TransitionTime daylight_transition_start, app::TimeZoneInfo_TransitionTime daylight_transition_end, app::TimeSpan base_utc_offset_delta))
    IL2CPP_REGISTER_METHOD(0x027B9C50, void, ValidateAdjustmentRule, (app::DateTime date_start, app::DateTime date_end, app::TimeSpan daylight_delta, app::TimeZoneInfo_TransitionTime daylight_transition_start, app::TimeZoneInfo_TransitionTime daylight_transition_end))
    IL2CPP_REGISTER_METHOD(0x027BA0A0, void, IDeserializationCallback_OnDeserialization, (app::TimeZoneInfo_AdjustmentRule * this_ptr, app::Object* sender))
    IL2CPP_REGISTER_METHOD(0x027BA1C0, void, ISerializable_GetObjectData, (app::TimeZoneInfo_AdjustmentRule * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x027BA380, void, ctor_2, (app::TimeZoneInfo_AdjustmentRule * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::TimeZoneInfo_AdjustmentRule
