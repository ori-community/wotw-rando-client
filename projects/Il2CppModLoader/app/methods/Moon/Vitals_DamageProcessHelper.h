#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Vitals_DamageProcessHelper {
    IL2CPP_REGISTER_METHOD(0x01198760, void, CountDamagesPerID, (app::Vitals_DamageProcessHelper * this_ptr, app::DamageReceiver__Array * receivers))
    IL2CPP_REGISTER_METHOD(0x01198B30, void, AllocateBucketRanges, (app::Vitals_DamageProcessHelper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01198F10, void, GatherDamagesPerID, (app::Vitals_DamageProcessHelper * this_ptr, app::DamageReceiver__Array * receivers))
    IL2CPP_REGISTER_METHOD(0x011992D0, void, ProcessDamagesPerIDSorted, (app::Vitals_DamageProcessHelper * this_ptr, app::HashSet_1_System_Int32_ * processed_i_ds))
    IL2CPP_REGISTER_METHOD(0x011995D0, void, ProcessAllDamageSorted, (app::Vitals_DamageProcessHelper * this_ptr, app::DamageReceiver__Array * receivers, app::HashSet_1_System_Int32_ * processed_i_ds))
    IL2CPP_REGISTER_METHOD(0x01199630, void, ctor, (app::Vitals_DamageProcessHelper * this_ptr))
}
