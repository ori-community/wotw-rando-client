#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Angle.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Ray.h>

namespace app::classes::Swing::Math2d {
    IL2CPP_REGISTER_METHOD(0x0182B520, float, getAngle, (app::Vector2 _vector))
    IL2CPP_REGISTER_METHOD(0x0182B5D0, float, getAngleFast, (app::Vector2 _normalized_dir))
    IL2CPP_REGISTER_METHOD(0x0182B6A0, app::Vector2, getVector_1, (float _angle))
    IL2CPP_REGISTER_METHOD(0x0182B760, app::Vector2, getVector_2, (app::Angle _angle))
    IL2CPP_REGISTER_METHOD(0x0182B820, float, wrapAngle, (float _angle))
    IL2CPP_REGISTER_METHOD(0x0182B910, float, wrapAngle2Pi, (float _angle))
    IL2CPP_REGISTER_METHOD(0x0182B9E0, double, IEEERemainder, (double x, double y))
    IL2CPP_REGISTER_METHOD(0x0182BB10, float, getShortestAngleDelta, (float _from, float _to))
    IL2CPP_REGISTER_METHOD(0x0182BBE0, float, asinh, (float _a))
    IL2CPP_REGISTER_METHOD(0x00BEEA40, float, lerp_1, (float _from, float _to, float _t))
    IL2CPP_REGISTER_METHOD(0x0182BCA0, float, lerp01_1, (float _from, float _to, float _t))
    IL2CPP_REGISTER_METHOD(0x0182BD90, float, inverseLerp, (float _from, float _to, float _value))
    IL2CPP_REGISTER_METHOD(0x0182BDA0, float, inverseLerpClamped, (float _from, float _to, float _value))
    IL2CPP_REGISTER_METHOD(0x0182BDE0, float, clamp, (float _min, float _max, float _value))
    IL2CPP_REGISTER_METHOD(0x0182BE00, float, homotheticTransformClamped, (float _from_in, float _to_in, float _from_out, float _to_out, float _value))
    IL2CPP_REGISTER_METHOD(0x0182BEF0, app::Vector2, lerp_2, (app::Vector2 _from, app::Vector2 _to, float _t))
    IL2CPP_REGISTER_METHOD(0x0182BF40, app::Vector3, lerp_3, (app::Vector3 _from, app::Vector3 _to, float _t))
    IL2CPP_REGISTER_METHOD(0x0182BFD0, app::Vector4, lerp_4, (app::Vector4 _from, app::Vector4 _to, float _t))
    IL2CPP_REGISTER_METHOD(0x0182C090, app::Vector2, lerp01_2, (app::Vector2 _from, app::Vector2 _to, float _t))
    IL2CPP_REGISTER_METHOD(0x0182C180, app::Vector3, lerp01_3, (app::Vector3 _from, app::Vector3 _to, float _t))
    IL2CPP_REGISTER_METHOD(0x0182C2E0, app::Vector4, lerp01_4, (app::Vector4 _from, app::Vector4 _to, float _t))
    IL2CPP_REGISTER_METHOD(0x0182C470, float, round, (float _value))
    IL2CPP_REGISTER_METHOD(0x0182C520, float, roundOrOne, (float _value))
    IL2CPP_REGISTER_METHOD(0x0182C650, float, roundToOdd, (float _value))
    IL2CPP_REGISTER_METHOD(0x0182C710, float, roundToEven, (float _value))
    IL2CPP_REGISTER_METHOD(0x0182C7C0, float, abs, (float _value))
    IL2CPP_REGISTER_METHOD(0x0182C870, float, floor, (float _value))
    IL2CPP_REGISTER_METHOD(0x0182C920, float, ceil, (float _value))
    IL2CPP_REGISTER_METHOD(0x0182C9D0, float, min_1, (float _value1, float _value2))
    IL2CPP_REGISTER_METHOD(0x0182CAB0, float, max_1, (float _value1, float _value2))
    IL2CPP_REGISTER_METHOD(0x0182CB90, int32_t, min_2, (int32_t _value1, int32_t _value2))
    IL2CPP_REGISTER_METHOD(0x0182CC40, int32_t, max_2, (int32_t _value1, int32_t _value2))
    IL2CPP_REGISTER_METHOD(0x0182CCF0, bool, raycastOnPlaneXY_1, (app::Ray _ray, app::Vector2* _world_pos))
    IL2CPP_REGISTER_METHOD(0x0182CF30, bool, raycastOnPlaneXY_2, (app::Ray _ray, float _depth, app::Vector3* _world_pos))
    IL2CPP_REGISTER_METHOD(0x0182D0C0, void, cctor, ())
} // namespace app::classes::Swing::Math2d
