#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HitReactionSettings.h>

namespace app::classes::HitReactionSettings {
    IL2CPP_REGISTER_METHOD(0x00B58030, app::HitReactionSettings*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x00B581D0, float, GetAdditiveAnimWeight, app::HitReactionSettings* this_ptr, float damage_amount)
    IL2CPP_REGISTER_METHOD(0x00B582D0, void, ResetToInitialValues, app::HitReactionSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B58330, void, ctor, app::HitReactionSettings* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::HitReactionSettings
