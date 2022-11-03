#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Swing::AngleRange {
    IL2CPP_REGISTER_METHOD(0x00115520, void, ctor, (app::AngleRange__Boxed * this_ptr, app::Angle _min, app::Angle _max))
    IL2CPP_REGISTER_METHOD(0x0014AD70, app::Angle, lerp, (app::AngleRange__Boxed * this_ptr, float _t))
    IL2CPP_REGISTER_METHOD(0x0014AE40, float, inverseLerp, (app::AngleRange__Boxed * this_ptr, app::Angle _value))
} // namespace app::classes::Swing::AngleRange
