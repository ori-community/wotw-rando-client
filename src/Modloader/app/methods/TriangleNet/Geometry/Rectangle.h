#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerable_1_TriangleNet_Geometry_Point_.h>
#include <Modloader/app/structs/Point.h>
#include <Modloader/app/structs/Rectangle.h>

namespace app::classes::TriangleNet::Geometry::Rectangle {
    IL2CPP_REGISTER_METHOD(0x0261DD00, void, ctor_1, app::Rectangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261DD30, void, ctor_2, app::Rectangle* this_ptr, app::Rectangle* other)
    IL2CPP_REGISTER_METHOD(0x0261DD80, void, ctor_3, app::Rectangle* this_ptr, double x, double y, double width, double height)
    IL2CPP_REGISTER_METHOD(0x01433F10, double, get_Left, app::Rectangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_Right, app::Rectangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261CB30, double, get_Bottom, app::Rectangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB20, double, get_Top, app::Rectangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261DDA0, double, get_Width, app::Rectangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261DDB0, double, get_Height, app::Rectangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261DDC0, void, Resize, app::Rectangle* this_ptr, double dx, double dy)
    IL2CPP_REGISTER_METHOD(0x0261DE00, void, Expand_1, app::Rectangle* this_ptr, app::Point* p)
    IL2CPP_REGISTER_METHOD(0x0261DF30, void, Expand_2, app::Rectangle* this_ptr, app::IEnumerable_1_TriangleNet_Geometry_Point_* points)
    IL2CPP_REGISTER_METHOD(0x0261E100, void, Expand_3, app::Rectangle* this_ptr, app::Rectangle* other)
    IL2CPP_REGISTER_METHOD(0x0261E230, bool, Contains_1, app::Rectangle* this_ptr, double x, double y)
    IL2CPP_REGISTER_METHOD(0x0261E260, bool, Contains_2, app::Rectangle* this_ptr, app::Point* pt)
    IL2CPP_REGISTER_METHOD(0x0261E2B0, bool, Contains_3, app::Rectangle* this_ptr, app::Rectangle* other)
    IL2CPP_REGISTER_METHOD(0x0261E300, bool, Intersects, app::Rectangle* this_ptr, app::Rectangle* other)
} // namespace app::classes::TriangleNet::Geometry::Rectangle
