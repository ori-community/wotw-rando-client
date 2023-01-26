#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiTimelineFloatValue.h>

namespace app::classes::MultiTimelineFloatValue {
    IL2CPP_REGISTER_METHOD(0x0043BB80, float, get_Value, (app::MultiTimelineFloatValue * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiTimelineFloatValue * this_ptr))
} // namespace app::classes::MultiTimelineFloatValue
