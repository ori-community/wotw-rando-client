#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CalendarData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Globalization::CalendarData {
    IL2CPP_REGISTER_METHOD(0x01A1EEA0, void, ctor_1, (app::CalendarData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A1EEB0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x01A20530, void, ctor_2, (app::CalendarData * this_ptr, app::String* locale_name, int32_t calendar_id, bool b_use_user_overrides))
    IL2CPP_REGISTER_METHOD(0x01A20C00, void, InitializeEraNames, (app::CalendarData * this_ptr, app::String* locale_name, int32_t calendar_id))
    IL2CPP_REGISTER_METHOD(0x01A212A0, void, InitializeAbbreviatedEraNames, (app::CalendarData * this_ptr, app::String* locale_name, int32_t calendar_id))
    IL2CPP_REGISTER_METHOD(0x01A21730, app::CalendarData*, GetCalendarData, (int32_t calendar_id))
    IL2CPP_REGISTER_METHOD(0x01A21940, app::String*, CalendarIdToCultureName, (int32_t calendar_id))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, nativeGetTwoDigitYearMax, (int32_t cal_i_d))
    IL2CPP_REGISTER_METHOD(0x01A21AB0, bool, nativeGetCalendarData, (app::CalendarData * data, app::String* locale_name, int32_t calendar_id))
    IL2CPP_REGISTER_METHOD(0x01A21B00, bool, fill_calendar_data, (app::CalendarData * this_ptr, app::String* locale_name, int32_t datetime_index))
} // namespace app::classes::System::Globalization::CalendarData
