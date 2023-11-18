#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Behavior.h>
#include <Modloader/app/structs/Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_.h>

namespace app::classes::TriangleNet::Behavior {
    IL2CPP_REGISTER_METHOD(0x026198E0, void, ctor, (app::Behavior * this_ptr, bool quality, double min_angle))
    IL2CPP_REGISTER_METHOD(0x02619910, void, Update, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619BA0, bool, get_NoExact, ())
    IL2CPP_REGISTER_METHOD(0x02619C20, void, set_NoExact, (bool value))
    IL2CPP_REGISTER_METHOD(0x00504D80, bool, get_Quality, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619CB0, void, set_Quality, (app::Behavior * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FBB20, double, get_MinAngle, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619CC0, void, set_MinAngle, (app::Behavior * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x002FD520, double, get_MaxAngle, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619CD0, void, set_MaxAngle, (app::Behavior * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x01BC1650, double, get_MaxArea, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619CE0, void, set_MaxArea, (app::Behavior * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x01BFB750, bool, get_VarArea, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619D00, void, set_VarArea, (app::Behavior * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_Poly, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_Poly, (app::Behavior * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_*, get_UserTest, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_UserTest, (app::Behavior * this_ptr, app::Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x02619D10, bool, get_Convex, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619D20, void, set_Convex, (app::Behavior * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02619D30, bool, get_ConformingDelaunay, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619D40, void, set_ConformingDelaunay, (app::Behavior * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_NoBisect, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619D50, void, set_NoBisect, (app::Behavior * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00724AF0, bool, get_UseBoundaryMarkers, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0229BB70, void, set_UseBoundaryMarkers, (app::Behavior * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02619D60, bool, get_NoHoles, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02619D70, void, set_NoHoles, (app::Behavior * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00724AE0, bool, get_Jettison, (app::Behavior * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EA280, void, set_Jettison, (app::Behavior * this_ptr, bool value))
} // namespace app::classes::TriangleNet::Behavior
