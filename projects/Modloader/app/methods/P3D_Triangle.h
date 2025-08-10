#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/P3D_Triangle.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::P3D_Triangle {
    IL2CPP_REGISTER_METHOD(0x0309C9B0, app::P3D_Triangle*, Spawn, )
    IL2CPP_REGISTER_METHOD(0x0309CBA0, app::P3D_Triangle*, Despawn, app::P3D_Triangle* triangle)
    IL2CPP_REGISTER_METHOD(0x0309CC60, app::Vector3, get_Edge1, app::P3D_Triangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309CD60, app::Vector3, get_Edge2, app::P3D_Triangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309CE60, app::Vector3, get_Min, app::P3D_Triangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309D0B0, app::Vector3, get_Max, app::P3D_Triangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309D300, float, get_MidX, app::P3D_Triangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309D320, float, get_MidY, app::P3D_Triangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309D340, float, get_MidZ, app::P3D_Triangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::P3D_Triangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0309D360, void, cctor, )
} // namespace app::classes::P3D_Triangle
