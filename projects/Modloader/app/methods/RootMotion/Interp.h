#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InterpolationMode__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Interp.h>

namespace app::classes::RootMotion::Interp {
    IL2CPP_REGISTER_METHOD(0x02A2A500, float, Float, (float t, app::InterpolationMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x02A2ACC0, app::Vector3, V3, (app::Vector3 v1, app::Vector3 v2, float t, app::InterpolationMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x02A2AE10, float, LerpValue, (float value, float target, float increase_speed, float decrease_speed))
    IL2CPP_REGISTER_METHOD(0x02A2AFF0, float, None, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B000, float, InOutCubic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B030, float, InOutQuintic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B080, float, InQuintic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B0A0, float, InQuartic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B0C0, float, InCubic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B0E0, float, InQuadratic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B0F0, float, OutQuintic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B160, float, OutQuartic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B1C0, float, OutCubic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B200, float, OutInCubic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B240, float, OutInQuartic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B280, float, BackInCubic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B2B0, float, BackInQuartic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B2F0, float, OutBackCubic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B330, float, OutBackQuartic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B380, float, OutElasticSmall, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B3F0, float, OutElasticBig, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B460, float, InElasticSmall, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B4C0, float, InElasticBig, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B520, float, InSine, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B600, float, OutSine, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B6E0, float, InOutSine, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B7D0, float, InElastic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2B920, float, OutElastic, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2BA60, float, InBack, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x02A2BA90, float, OutBack, (float t, float b, float c))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Interp * this_ptr))
} // namespace app::classes::RootMotion::Interp
