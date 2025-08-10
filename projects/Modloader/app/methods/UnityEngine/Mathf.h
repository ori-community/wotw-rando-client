#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::UnityEngine::Mathf {
    IL2CPP_REGISTER_METHOD(0x02534340, int32_t, ClosestPowerOfTwo, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02534390, bool, IsPowerOfTwo, int32_t value)
    IL2CPP_REGISTER_METHOD(0x025343E0, int32_t, NextPowerOfTwo, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02534430, float, GammaToLinearSpace, float value)
    IL2CPP_REGISTER_METHOD(0x02534490, float, LinearToGammaSpace, float value)
    IL2CPP_REGISTER_METHOD(0x025344F0, float, PerlinNoise, float x, float y)
    IL2CPP_REGISTER_METHOD(0x02534560, float, Sin, float f)
    IL2CPP_REGISTER_METHOD(0x02534610, float, Cos, float f)
    IL2CPP_REGISTER_METHOD(0x025346C0, float, Tan, float f)
    IL2CPP_REGISTER_METHOD(0x02534770, float, Asin, float f)
    IL2CPP_REGISTER_METHOD(0x02534820, float, Acos, float f)
    IL2CPP_REGISTER_METHOD(0x025348D0, float, Atan, float f)
    IL2CPP_REGISTER_METHOD(0x02534980, float, Atan2, float y, float x)
    IL2CPP_REGISTER_METHOD(0x02534A40, float, Sqrt, float f)
    IL2CPP_REGISTER_METHOD(0x02534AF0, float, Abs_1, float f)
    IL2CPP_REGISTER_METHOD(0x02534BA0, int32_t, Abs_2, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02534C40, float, Min_1, float a, float b)
    IL2CPP_REGISTER_METHOD(0x02534C50, float, Min_2, app::Single__Array* values)
    IL2CPP_REGISTER_METHOD(0x02534CC0, int32_t, Min_3, int32_t a, int32_t b)
    IL2CPP_REGISTER_METHOD(0x02534CD0, float, Max_1, float a, float b)
    IL2CPP_REGISTER_METHOD(0x02534CE0, float, Max_2, app::Single__Array* values)
    IL2CPP_REGISTER_METHOD(0x02534D50, int32_t, Max_3, int32_t a, int32_t b)
    IL2CPP_REGISTER_METHOD(0x02534D60, int32_t, Max_4, app::Int32__Array* values)
    IL2CPP_REGISTER_METHOD(0x02534DC0, float, Pow, float f, float p)
    IL2CPP_REGISTER_METHOD(0x02534E80, float, Exp, float power)
    IL2CPP_REGISTER_METHOD(0x02534F30, float, Log_1, float f, float p)
    IL2CPP_REGISTER_METHOD(0x025351A0, float, Log_2, float f)
    IL2CPP_REGISTER_METHOD(0x02535250, float, Log10, float f)
    IL2CPP_REGISTER_METHOD(0x02535300, float, Ceil, float f)
    IL2CPP_REGISTER_METHOD(0x025353B0, float, Floor, float f)
    IL2CPP_REGISTER_METHOD(0x02535460, float, Round, float f)
    IL2CPP_REGISTER_METHOD(0x02535510, int32_t, CeilToInt, float f)
    IL2CPP_REGISTER_METHOD(0x025355C0, int32_t, FloorToInt, float f)
    IL2CPP_REGISTER_METHOD(0x02535670, int32_t, RoundToInt, float f)
    IL2CPP_REGISTER_METHOD(0x02535720, float, Sign, float f)
    IL2CPP_REGISTER_METHOD(0x02535740, float, Clamp_1, float value, float min, float max)
    IL2CPP_REGISTER_METHOD(0x02535760, int32_t, Clamp_2, int32_t value, int32_t min, int32_t max)
    IL2CPP_REGISTER_METHOD(0x02535780, float, Clamp01, float value)
    IL2CPP_REGISTER_METHOD(0x025357A0, float, Lerp, float a, float b, float t)
    IL2CPP_REGISTER_METHOD(0x02535890, float, LerpAngle, float a, float b, float t)
    IL2CPP_REGISTER_METHOD(0x025359C0, float, MoveTowards, float current, float target, float max_delta)
    IL2CPP_REGISTER_METHOD(0x02535B00, float, MoveTowardsAngle, float current, float target, float max_delta)
    IL2CPP_REGISTER_METHOD(0x02535C30, float, SmoothStep, float from, float to, float t)
    IL2CPP_REGISTER_METHOD(0x02535D40, bool, Approximately, float a, float b)
    IL2CPP_REGISTER_METHOD(0x02535E50, float, SmoothDamp_1, float current, float target, float* current_velocity, float smooth_time, float max_speed)
    IL2CPP_REGISTER_METHOD(0x02535F90, float, SmoothDamp_2, float current, float target, float* current_velocity, float smooth_time)
    IL2CPP_REGISTER_METHOD(
        0x025360D0,
        float,
        SmoothDamp_3,
        float current,
        float target,
        float* current_velocity,
        float smooth_time,
        float max_speed,
        float delta_time
    )
    IL2CPP_REGISTER_METHOD(0x025362B0, float, SmoothDampAngle_1, float current, float target, float* current_velocity, float smooth_time)
    IL2CPP_REGISTER_METHOD(
        0x025363F0,
        float,
        SmoothDampAngle_2,
        float current,
        float target,
        float* current_velocity,
        float smooth_time,
        float max_speed,
        float delta_time
    )
    IL2CPP_REGISTER_METHOD(0x025364E0, float, Repeat, float t, float length)
    IL2CPP_REGISTER_METHOD(0x025365C0, float, InverseLerp, float a, float b, float value)
    IL2CPP_REGISTER_METHOD(0x025366B0, float, DeltaAngle, float current, float target)
    IL2CPP_REGISTER_METHOD(0x02536780, void, cctor, )
} // namespace app::classes::UnityEngine::Mathf
