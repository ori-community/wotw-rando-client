#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::HoldingNightberryCondition {
    IL2CPP_REGISTER_METHOD(0x00B5ADC0, bool, Validate, (app::HoldingNightberryCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::HoldingNightberryCondition * this_ptr))
} // namespace app::classes::HoldingNightberryCondition
