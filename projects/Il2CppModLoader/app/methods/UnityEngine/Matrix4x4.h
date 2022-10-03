#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::Matrix4x4 {
    IL2CPP_REGISTER_METHOD(0x001F28F0, void, ctor, (app::Matrix4x4__Boxed * this_ptr, app::Vector4 column0, app::Vector4 column1, app::Vector4 column2, app::Vector4 column3))
    IL2CPP_REGISTER_METHOD(0x001F29A0, app::Quaternion, GetRotation, (app::Matrix4x4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F29D0, float, GetDeterminant, (app::Matrix4x4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F29A0, app::Quaternion, get_rotation, (app::Matrix4x4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F29E0, float, get_determinant, (app::Matrix4x4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02536A60, app::Matrix4x4, TRS, (app::Vector3 pos, app::Quaternion q, app::Vector3 s))
    IL2CPP_REGISTER_METHOD(0x001F29F0, void, SetTRS, (app::Matrix4x4__Boxed * this_ptr, app::Vector3 pos, app::Quaternion q, app::Vector3 s))
    IL2CPP_REGISTER_METHOD(0x02536DE0, app::Matrix4x4, Inverse, (app::Matrix4x4 m))
    IL2CPP_REGISTER_METHOD(0x001F2A40, app::Matrix4x4, get_inverse, (app::Matrix4x4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02537060, app::Matrix4x4, Ortho, (float left, float right, float bottom, float top, float z_near, float z_far))
    IL2CPP_REGISTER_METHOD(0x02537200, app::Matrix4x4, Perspective, (float fov, float aspect, float z_near, float z_far))
    IL2CPP_REGISTER_METHOD(0x001F2A80, void, set_Item_1, (app::Matrix4x4__Boxed * this_ptr, int32_t row, int32_t column, float value))
    IL2CPP_REGISTER_METHOD(0x001F2A90, float, get_Item, (app::Matrix4x4__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047999F8, Matrix4x4_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F2AA0, void, set_Item_2, (app::Matrix4x4__Boxed * this_ptr, int32_t index, float value))
    IL2CPP_REGISTER_METHODINFO(0x047622F0, Matrix4x4_set_Item_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F2AB0, int32_t, GetHashCode, (app::Matrix4x4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001F2AC0, bool, Equals_1, (app::Matrix4x4__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001F2AD0, bool, Equals_2, (app::Matrix4x4__Boxed * this_ptr, app::Matrix4x4 other))
    IL2CPP_REGISTER_METHOD(0x02537C80, app::Matrix4x4, op_Multiply_1, (app::Matrix4x4 lhs, app::Matrix4x4 rhs))
    IL2CPP_REGISTER_METHOD(0x02538150, app::Vector4, op_Multiply_2, (app::Matrix4x4 lhs, app::Vector4 vector))
    IL2CPP_REGISTER_METHOD(0x02538270, bool, op_Equality, (app::Matrix4x4 lhs, app::Matrix4x4 rhs))
    IL2CPP_REGISTER_METHOD(0x025384B0, bool, op_Inequality, (app::Matrix4x4 lhs, app::Matrix4x4 rhs))
    IL2CPP_REGISTER_METHOD(0x001F2B10, app::Vector4, GetColumn, (app::Matrix4x4__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474C1D0, Matrix4x4_GetColumn__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001F2B40, void, SetColumn, (app::Matrix4x4__Boxed * this_ptr, int32_t index, app::Vector4 column))
    IL2CPP_REGISTER_METHOD(0x001F2BB0, void, SetRow, (app::Matrix4x4__Boxed * this_ptr, int32_t index, app::Vector4 row))
    IL2CPP_REGISTER_METHOD(0x001F2C20, app::Vector3, MultiplyPoint, (app::Matrix4x4__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x001F2D20, app::Vector3, MultiplyPoint3x4, (app::Matrix4x4__Boxed * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x001F2DE0, app::Vector3, MultiplyVector, (app::Matrix4x4__Boxed * this_ptr, app::Vector3 vector))
    IL2CPP_REGISTER_METHOD(0x02538790, app::Matrix4x4, Scale, (app::Vector3 vector))
    IL2CPP_REGISTER_METHOD(0x02538840, app::Matrix4x4, Translate, (app::Vector3 vector))
    IL2CPP_REGISTER_METHOD(0x025388E0, app::Matrix4x4, get_zero, ())
    IL2CPP_REGISTER_METHOD(0x025389B0, app::Matrix4x4, get_identity, ())
    IL2CPP_REGISTER_METHOD(0x001F2E90, app::String*, ToString, (app::Matrix4x4__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025391F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x02539350, void, GetRotation_Injected, (app::Matrix4x4 * _unity_self, app::Quaternion* ret))
    IL2CPP_REGISTER_METHOD(0x025393B0, float, GetDeterminant_Injected, (app::Matrix4x4 * _unity_self))
    IL2CPP_REGISTER_METHOD(0x02539400, void, TRS_Injected, (app::Vector3 * pos, app::Quaternion* q, app::Vector3* s, app::Matrix4x4* ret))
    IL2CPP_REGISTER_METHOD(0x02539480, void, Inverse_Injected, (app::Matrix4x4 * m, app::Matrix4x4* ret))
    IL2CPP_REGISTER_METHOD(0x025394E0, void, Ortho_Injected, (float left, float right, float bottom, float top, float z_near, float z_far, app::Matrix4x4* ret))
    IL2CPP_REGISTER_METHOD(0x02539580, void, Perspective_Injected, (float fov, float aspect, float z_near, float z_far, app::Matrix4x4* ret))
    inline app::Matrix4x4 operator*(app::Matrix4x4 lhs, app::Matrix4x4 rhs) {
        return op_Multiply_1(lhs, rhs);
    }
    inline app::Vector4 operator*(app::Matrix4x4 lhs, app::Vector4 vector) {
        return op_Multiply_2(lhs, vector);
    }
    inline bool operator==(app::Matrix4x4 lhs, app::Matrix4x4 rhs) {
        return op_Equality(lhs, rhs);
    }
    inline bool operator!=(app::Matrix4x4 lhs, app::Matrix4x4 rhs) {
        return op_Inequality(lhs, rhs);
    }
} // namespace app::classes::UnityEngine::Matrix4x4
