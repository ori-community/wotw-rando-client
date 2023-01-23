#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_DamageType_Moon_DamageResolver_Rule_.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageResolver_Rule.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_DamageType_Moon_DamageResolver_Rule_ {
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_DamageType_Moon_DamageResolver_Rule_ * this_ptr, app::DamageType__Enum key, app::DamageResolver_Rule* value))
    IL2CPP_REGISTER_METHODINFO(0x0474F600, Dictionary_2_DamageType_Moon_DamageResolver_Rule__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C36CB0, bool, Remove, (app::Dictionary_2_DamageType_Moon_DamageResolver_Rule_ * this_ptr, app::DamageType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04733758, Dictionary_2_DamageType_Moon_DamageResolver_Rule__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_DamageType_Moon_DamageResolver_Rule_ * this_ptr, app::DamageType__Enum key, app::DamageResolver_Rule** value))
    IL2CPP_REGISTER_METHODINFO(0x04749D50, Dictionary_2_DamageType_Moon_DamageResolver_Rule__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_DamageType_Moon_DamageResolver_Rule_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047175E8, Dictionary_2_DamageType_Moon_DamageResolver_Rule___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_DamageType_Moon_DamageResolver_Rule_
