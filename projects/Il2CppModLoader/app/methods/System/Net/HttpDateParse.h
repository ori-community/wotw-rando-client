#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::HttpDateParse {
    IL2CPP_REGISTER_METHOD(0x01D407A0, uint16_t, MAKE_UPPER, (uint16_t c))
    IL2CPP_REGISTER_METHOD(0x01D40870, int32_t, MapDayMonthToDword, (app::Char__Array * lpsz_day, int32_t index))
    IL2CPP_REGISTER_METHOD(0x01D40C30, bool, ParseHttpDate, (app::String * date_string, app::DateTime* dt_out))
} // namespace app::classes::System::Net::HttpDateParse
