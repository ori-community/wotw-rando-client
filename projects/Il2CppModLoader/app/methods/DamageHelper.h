#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DamageHelper {
    IL2CPP_REGISTER_METHOD(0x00DC8250, void, GetDamageWeightsInMask, (app::DamageWeightMask__Enum mask, app::List_1_DamageWeight_ * * weights))
}
