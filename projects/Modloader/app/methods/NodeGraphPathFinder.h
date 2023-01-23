#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NodeGraphPathFinder.h>
#include <Modloader/app/structs/Segment_1.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Link.h>

namespace app::classes::NodeGraphPathFinder {
    IL2CPP_REGISTER_METHOD(0x0060AA00, bool, GeneratePathUsingDijkstra, (app::NodeGraphPathFinder * this_ptr, app::Segment_1* start_segment, app::Vector3 start_position, app::Segment_1* goal_segment, app::Vector3 end_position))
    IL2CPP_REGISTER_METHOD(0x0060B5E0, float, Length, (app::NodeGraphPathFinder * this_ptr, app::Link* start, app::Link* end))
    IL2CPP_REGISTER_METHOD(0x0060B7E0, void, ctor, (app::NodeGraphPathFinder * this_ptr))
} // namespace app::classes::NodeGraphPathFinder
