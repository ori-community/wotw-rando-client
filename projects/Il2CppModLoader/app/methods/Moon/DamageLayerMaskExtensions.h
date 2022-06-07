#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::DamageLayerMaskExtensions {
    IL2CPP_REGISTER_METHOD(0x00CD0C10, bool, Contains_1, (app::DamageLayerMask__Enum mask, app::DamageLayer__Enum tag))
    IL2CPP_REGISTER_METHOD(0x00CD0C30, bool, Contains_2, (app::DamageLayerMask__Enum mask, app::DamageLayerMask__Enum other))
    IL2CPP_REGISTER_METHOD(0x00CD0C40, app::DamageLayerMask__Enum, DamageLayerToDamageMask, (app::DamageLayer__Enum layer))
}
