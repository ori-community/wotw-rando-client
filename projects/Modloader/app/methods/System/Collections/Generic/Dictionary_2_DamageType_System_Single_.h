#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/Dictionary_2_DamageType_System_Single_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_DamageType_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02BB43A0, bool, TryGetValue, app::Dictionary_2_DamageType_System_Single_* this_ptr, app::DamageType__Enum key, float* value)
    IL2CPP_REGISTER_METHOD(0x02C383F0, float, get_Item, app::Dictionary_2_DamageType_System_Single_* this_ptr, app::DamageType__Enum key)
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, app::Dictionary_2_DamageType_System_Single_* this_ptr, app::DamageType__Enum key, float value)
    IL2CPP_REGISTER_METHOD(0x02C39B50, bool, Remove, app::Dictionary_2_DamageType_System_Single_* this_ptr, app::DamageType__Enum key)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_DamageType_System_Single_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_DamageType_System_Single_
