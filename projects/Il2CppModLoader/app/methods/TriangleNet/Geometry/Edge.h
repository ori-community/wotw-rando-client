#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TriangleNet::Geometry::Edge {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_P0, (app::Edge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_P0, (app::Edge * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_P1, (app::Edge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E39C80, void, set_P1, (app::Edge * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Label, (app::Edge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A000, void, set_Label, (app::Edge * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0261B9A0, void, ctor_1, (app::Edge * this_ptr, int32_t p0, int32_t p1))
    IL2CPP_REGISTER_METHOD(0x0133CEF0, void, ctor_2, (app::Edge * this_ptr, int32_t p0, int32_t p1, int32_t label))
}
