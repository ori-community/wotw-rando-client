#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::P3D_Result {
    IL2CPP_REGISTER_METHOD(0x03096DF0, app::P3D_Result *, Spawn, ())
    IL2CPP_REGISTER_METHOD(0x03096FE0, app::P3D_Result *, Despawn, (app::P3D_Result * result))
    IL2CPP_REGISTER_METHOD(0x030970A0, app::Vector2, get_UV1, (app::P3D_Result * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030971D0, app::Vector2, get_UV2, (app::P3D_Result * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03097300, app::Vector2, get_Point, (app::P3D_Result * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03097450, app::Vector3, get_Point3, (app::P3D_Result * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03097600, app::Vector2, GetUV, (app::P3D_Result * this_ptr, app::P3D_CoordType__Enum coord))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::P3D_Result * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03097850, void, cctor, ())
}
