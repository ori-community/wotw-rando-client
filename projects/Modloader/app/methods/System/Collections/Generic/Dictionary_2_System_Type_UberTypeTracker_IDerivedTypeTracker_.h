#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047612A8, Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * this_ptr, app::Type* key, app::UberTypeTracker_IDerivedTypeTracker** value))
    IL2CPP_REGISTER_METHODINFO(0x0475A310, Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::UberTypeTracker_IDerivedTypeTracker*, get_Item, (app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHODINFO(0x04704360, Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHODINFO(0x047762E8, Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * this_ptr, app::Type* key, app::UberTypeTracker_IDerivedTypeTracker* value))
    IL2CPP_REGISTER_METHODINFO(0x047403A0, Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_
