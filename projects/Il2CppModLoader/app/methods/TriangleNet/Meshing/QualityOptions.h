#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::TriangleNet::Meshing::QualityOptions {
    IL2CPP_REGISTER_METHOD(0x01433F10, double, get_MaximumAngle, (app::QualityOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B16830, void, set_MaximumAngle, (app::QualityOptions * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x0261CB30, double, get_MinimumAngle, (app::QualityOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261CB40, void, set_MinimumAngle, (app::QualityOptions * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_MaximumArea, (app::QualityOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0261CB60, void, set_MaximumArea, (app::QualityOptions * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_*, get_UserTest, (app::QualityOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_UserTest, (app::QualityOptions * this_ptr, app::Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_VariableArea, (app::QualityOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_VariableArea, (app::QualityOptions * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00998570, int32_t, get_SteinerPoints, (app::QualityOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E06D70, void, set_SteinerPoints, (app::QualityOptions * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::QualityOptions * this_ptr))
} // namespace app::classes::TriangleNet::Meshing::QualityOptions
