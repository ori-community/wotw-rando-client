#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::XboxOneStatistics_StatisticReading {
    IL2CPP_REGISTER_METHOD(0x0013C860, void, ctor, (app::XboxOneStatistics_StatisticReading__Boxed * this_ptr, app::String* name, app::String* type, app::String* value))
    IL2CPP_REGISTER_METHOD(0x001C2E50, app::String*, ToString, (app::XboxOneStatistics_StatisticReading__Boxed * this_ptr))
} // namespace app::classes::XboxOneStatistics_StatisticReading
