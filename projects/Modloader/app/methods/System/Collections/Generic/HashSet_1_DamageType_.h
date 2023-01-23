#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HashSet_1_DamageType_.h>
#include <Modloader/app/structs/DamageType__Enum.h>

namespace app::classes::System::Collections::Generic::HashSet_1_DamageType_ {
    IL2CPP_REGISTER_METHOD(0x02AB90A0, bool, Contains, (app::HashSet_1_DamageType_ * this_ptr, app::DamageType__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x0474B3C8, HashSet_1_DamageType__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_DamageType_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708900, HashSet_1_DamageType___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_DamageType_ * this_ptr, app::DamageType__Enum item))
    IL2CPP_REGISTER_METHODINFO(0x047525C8, HashSet_1_DamageType__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::HashSet_1_DamageType_
