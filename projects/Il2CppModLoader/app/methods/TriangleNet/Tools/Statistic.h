#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TriangleNet::Tools::Statistic {
    IL2CPP_REGISTER_METHOD(0x01433F10, double, get_ShortestEdge, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261CB30, double, get_LongestEdge, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_ShortestAltitude, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB20, double, get_LargestAspectRatio, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD520, double, get_SmallestArea, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BC1650, double, get_LargestArea, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021DFE90, double, get_SmallestAngle, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00791E10, double, get_LargestAngle, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::Int32__Array *, get_AngleHistogram, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::Int32__Array *, get_MinAngleHistogram, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::Int32__Array *, get_MaxAngleHistogram, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A9A110, void, GetAspectHistogram, (app::Statistic * this_ptr, app::Mesh_1 * mesh))
    IL2CPP_REGISTER_METHOD(0x02A9A930, void, Update, (app::Statistic * this_ptr, app::Mesh_1 * mesh, int32_t sample_degrees))
    IL2CPP_REGISTER_METHOD(0x02A9B990, void, ComputeAngles, (app::ITriangle * triangle, app::Double__Array * data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Statistic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A9BDD0, void, cctor, ())
}
