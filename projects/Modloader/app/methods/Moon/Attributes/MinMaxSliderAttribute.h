#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MinMaxSliderAttribute.h>

namespace app::classes::Moon::Attributes::MinMaxSliderAttribute {
    IL2CPP_REGISTER_METHOD(0x006D39E0, void, ctor, (app::MinMaxSliderAttribute * this_ptr, float min, float max))
}
