#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConstraintOptions.h>

namespace app::classes::TriangleNet::Meshing::ConstraintOptions {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_UseRegions, (app::ConstraintOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_UseRegions, (app::ConstraintOptions * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_ConformingDelaunay, (app::ConstraintOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C660, void, set_ConformingDelaunay, (app::ConstraintOptions * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01BFB750, bool, get_Convex, (app::ConstraintOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619D00, void, set_Convex, (app::ConstraintOptions * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_SegmentSplitting, (app::ConstraintOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_SegmentSplitting, (app::ConstraintOptions * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ConstraintOptions * this_ptr))
} // namespace app::classes::TriangleNet::Meshing::ConstraintOptions
