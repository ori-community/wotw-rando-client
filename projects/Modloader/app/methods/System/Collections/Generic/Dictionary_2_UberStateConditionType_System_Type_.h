#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_UberStateConditionType_System_Type_.h>
#include <Modloader/app/structs/UberStateConditionType__Enum.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UberStateConditionType_System_Type_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UberStateConditionType_System_Type_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712BE8, Dictionary_2_UberStateConditionType_System_Type___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UberStateConditionType_System_Type_ * this_ptr, app::UberStateConditionType__Enum key, app::Type* value))
    IL2CPP_REGISTER_METHODINFO(0x0470ABE0, Dictionary_2_UberStateConditionType_System_Type__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_UberStateConditionType_System_Type_ * this_ptr, app::UberStateConditionType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x0476A690, Dictionary_2_UberStateConditionType_System_Type__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C35530, app::Type*, get_Item, (app::Dictionary_2_UberStateConditionType_System_Type_ * this_ptr, app::UberStateConditionType__Enum key))
    IL2CPP_REGISTER_METHODINFO(0x04772B58, Dictionary_2_UberStateConditionType_System_Type__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UberStateConditionType_System_Type_
