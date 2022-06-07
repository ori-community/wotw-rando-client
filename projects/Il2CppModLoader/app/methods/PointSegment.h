#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PointSegment {
    IL2CPP_REGISTER_METHOD(0x01431940, app::Vector3, get_FirstPoint, (app::PointSegment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01431A00, app::Vector3, get_LastPoint, (app::PointSegment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01431AC0, bool, get_AnyPoints, (app::PointSegment * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01431B50, void, ctor, (app::PointSegment * this_ptr))
}
