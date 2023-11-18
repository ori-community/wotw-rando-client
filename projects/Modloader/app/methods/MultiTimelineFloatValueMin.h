#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MultiTimelineFloatValueMin.h>

namespace app::classes::MultiTimelineFloatValueMin {
    IL2CPP_REGISTER_METHOD(0x00879110, float, get_Value, (app::MultiTimelineFloatValueMin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiTimelineFloatValueMin * this_ptr))
} // namespace app::classes::MultiTimelineFloatValueMin
