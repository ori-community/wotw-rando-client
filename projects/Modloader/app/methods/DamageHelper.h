#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamageWeightMask__Enum.h>
#include <Modloader/app/structs/List_1_DamageWeight_.h>

namespace app::classes::DamageHelper {
    IL2CPP_REGISTER_METHOD(0x00DC8250, void, GetDamageWeightsInMask, (app::DamageWeightMask__Enum mask, app::List_1_DamageWeight_** weights))
}
