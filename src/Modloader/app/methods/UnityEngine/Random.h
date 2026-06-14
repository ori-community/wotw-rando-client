#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::UnityEngine::Random {
    IL2CPP_REGISTER_METHOD(0x0296D100, float, Range_1, float min, float max)
    IL2CPP_REGISTER_METHOD(0x02552FF0, int32_t, Range_2, int32_t min, int32_t max)
    IL2CPP_REGISTER_METHOD(0x02552FF0, int32_t, RandomRangeInt, int32_t min, int32_t max)
    IL2CPP_REGISTER_METHOD(0x02552E60, float, get_value, )
    IL2CPP_REGISTER_METHOD(0x02552F70, app::Vector3, get_insideUnitSphere, )
    IL2CPP_REGISTER_METHOD(0x0296D170, void, GetRandomUnitCircle, app::Vector2* output)
    IL2CPP_REGISTER_METHOD(0x0296D1C0, app::Vector2, get_insideUnitCircle, )
    IL2CPP_REGISTER_METHOD(0x0296D220, app::Quaternion, get_rotationUniform, )
    IL2CPP_REGISTER_METHOD(0x0296D290, void, get_insideUnitSphere_Injected, app::Vector3* ret)
    IL2CPP_REGISTER_METHOD(0x0296D2E0, void, get_rotationUniform_Injected, app::Quaternion* ret)
} // namespace app::classes::UnityEngine::Random
