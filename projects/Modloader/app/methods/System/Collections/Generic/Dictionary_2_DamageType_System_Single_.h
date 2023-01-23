#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_DamageType_System_Single_.h>
#include <Modloader/app/structs/DamageType__Enum.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_DamageType_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02BB43A0, bool, TryGetValue, (app::Dictionary_2_DamageType_System_Single_ * this_ptr, app::DamageType__Enum key, float* value))
    IL2CPP_REGISTER_METHODINFO(0x04721560, Dictionary_2_DamageType_System_Single__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C383F0, float, get_Item, (app::Dictionary_2_DamageType_System_Single_ * this_ptr, app::DamageType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x047476D8, Dictionary_2_DamageType_System_Single__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, (app::Dictionary_2_DamageType_System_Single_ * this_ptr, app::DamageType__Enum key, float value))
    IL2CPP_REGISTER_METHODINFO(0x0471AB30, Dictionary_2_DamageType_System_Single__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C39B50, bool, Remove, (app::Dictionary_2_DamageType_System_Single_ * this_ptr, app::DamageType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04754778, Dictionary_2_DamageType_System_Single__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_DamageType_System_Single_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761010, Dictionary_2_DamageType_System_Single___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_DamageType_System_Single_
