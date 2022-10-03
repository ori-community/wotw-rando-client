#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Segment {
    IL2CPP_REGISTER_METHOD(0x0106EB50, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0106EC30, void, OnEnable, (app::Segment_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106ECF0, void, OnDisable, (app::Segment_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106EDB0, app::Segment_1*, FindClosestSegment, (app::Vector3 position, float min_distance))
    IL2CPP_REGISTER_METHOD(0x0106EFB0, app::Segment_1*, FindClosestSegmentDown, (app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0106F1D0, float, Distance_1, (app::Segment_1 * this_ptr, app::Vector3 start, app::Vector3 end))
    IL2CPP_REGISTER_METHOD(0x0106F2B0, float, Distance_2, (app::Segment_1 * this_ptr, app::Link* start, app::Vector3 end))
    IL2CPP_REGISTER_METHOD(0x0106F3A0, float, Distance_3, (app::Segment_1 * this_ptr, app::Vector3 start, app::Link* end))
    IL2CPP_REGISTER_METHOD(0x0106F490, float, Distance_4, (app::Segment_1 * this_ptr, app::Link* start, app::Link* end))
    IL2CPP_REGISTER_METHOD(0x0106F5A0, void, ctor, (app::Segment_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0106F700, void, cctor, ())
} // namespace app::classes::Segment
