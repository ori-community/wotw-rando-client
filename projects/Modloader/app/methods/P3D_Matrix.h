#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::P3D_Matrix {
    IL2CPP_REGISTER_METHOD(0x03094D50, app::P3D_Matrix, get_Identity, ())
    IL2CPP_REGISTER_METHOD(0x03094D90, app::P3D_Matrix, Translation, (float x, float y))
    IL2CPP_REGISTER_METHOD(0x03094DF0, app::P3D_Matrix, Scaling, (float x, float y))
    IL2CPP_REGISTER_METHOD(0x03094E40, app::P3D_Matrix, Rotation, (float a))
    IL2CPP_REGISTER_METHOD(0x00243D00, app::P3D_Matrix, get_Inverse, (app::P3D_Matrix__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00243D40, app::Matrix4x4, get_Matrix4x4, (app::P3D_Matrix__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00243D80, app::Matrix4x4, get_ShaderMatrix4x4, (app::P3D_Matrix__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00243DC0, app::Vector2, MultiplyPoint_1, (app::P3D_Matrix__Boxed * this_ptr, app::Vector2 v))
    IL2CPP_REGISTER_METHOD(0x00243E10, app::Vector2, MultiplyPoint_2, (app::P3D_Matrix__Boxed * this_ptr, float x, float y))
    IL2CPP_REGISTER_METHOD(0x03095610, app::P3D_Matrix, op_Multiply, (app::P3D_Matrix lhs, app::P3D_Matrix rhs))
    inline app::P3D_Matrix operator*(app::P3D_Matrix lhs, app::P3D_Matrix rhs) {
        return op_Multiply(lhs, rhs);
    }
} // namespace app::classes::P3D_Matrix
