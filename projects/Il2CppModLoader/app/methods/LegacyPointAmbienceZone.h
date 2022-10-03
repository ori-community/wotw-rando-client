#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LegacyPointAmbienceZone {
    IL2CPP_REGISTER_METHOD(0x00A30830, void, Awake, (app::LegacyPointAmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A30AB0, void, FixedUpdate, (app::LegacyPointAmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A30C70, void, SetSoundProvider, (app::LegacyPointAmbienceZone * this_ptr, app::SoundProvider* sound_provider))
    IL2CPP_REGISTER_METHOD(0x00A30CC0, void, OnDestroy, (app::LegacyPointAmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A30CC0, void, OnDisable, (app::LegacyPointAmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A30D00, void, ActivateAmbienceZone, (app::LegacyPointAmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A30CC0, void, DeactiveAmbienceZone, (app::LegacyPointAmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A30DB0, void, PlaySound, (app::LegacyPointAmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A31040, float, CalculateRtpcValue, (app::LegacyPointAmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750AF0, LegacyPointAmbienceZone_CalculateRtpcValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00A31350, float, RelativePositionToRtpcValue, (app::LegacyPointAmbienceZone * this_ptr, app::Vector2 position))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::SelectableCategory__Enum, get_Category, (app::LegacyPointAmbienceZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A319E0, void, ctor, (app::LegacyPointAmbienceZone * this_ptr))
} // namespace app::classes::LegacyPointAmbienceZone
