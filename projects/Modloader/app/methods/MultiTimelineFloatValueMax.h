#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MultiTimelineFloatValueMax {
    IL2CPP_REGISTER_METHOD(0x00878F00, float, get_Value, (app::MultiTimelineFloatValueMax * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiTimelineFloatValueMax * this_ptr))
} // namespace app::classes::MultiTimelineFloatValueMax
