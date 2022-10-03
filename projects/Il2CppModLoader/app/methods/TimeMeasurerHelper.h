#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TimeMeasurerHelper {
    IL2CPP_REGISTER_METHOD(0x010F0230, void, TakeTimestamp, ())
    IL2CPP_REGISTER_METHOD(0x010F02D0, double, GetTimePast, ())
} // namespace app::classes::TimeMeasurerHelper
