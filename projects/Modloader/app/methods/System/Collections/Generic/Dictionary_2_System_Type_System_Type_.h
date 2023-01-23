#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Type_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_Type_ {
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Type_System_Type_ * this_ptr, app::Type* key, app::Type** value))
    IL2CPP_REGISTER_METHODINFO(0x04740AA0, Dictionary_2_System_Type_System_Type__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Type_System_Type_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047514B8, Dictionary_2_System_Type_System_Type___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_Type_System_Type_ * this_ptr, app::Type* key, app::Type* value))
    IL2CPP_REGISTER_METHODINFO(0x0470DEE0, Dictionary_2_System_Type_System_Type__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Type_System_Type_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHODINFO(0x0470C838, Dictionary_2_System_Type_System_Type__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Type_System_Type_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783A68, Dictionary_2_System_Type_System_Type__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::Type*, get_Item, (app::Dictionary_2_System_Type_System_Type_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHODINFO(0x0478ADC0, Dictionary_2_System_Type_System_Type__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_Type_System_Type_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04795698, Dictionary_2_System_Type_System_Type__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Type_System_Type_ * this_ptr, app::Type* key, app::Type* value))
    IL2CPP_REGISTER_METHODINFO(0x0474C688, Dictionary_2_System_Type_System_Type__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_System_Type_
