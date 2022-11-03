#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::CurrentSystemTimeZone {
    IL2CPP_REGISTER_METHOD(0x028A0BF0, void, ctor, (app::CurrentSystemTimeZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028A0C90, bool, GetTimeZoneData, (int32_t year, app::Int64__Array** data, app::String__Array** names, bool* daylight_inverted))
} // namespace app::classes::System::CurrentSystemTimeZone
