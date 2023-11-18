#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/UberTypeTracker_IDerivedTypeTracker.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * this_ptr, app::Type* key, app::UberTypeTracker_IDerivedTypeTracker** value))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::UberTypeTracker_IDerivedTypeTracker*, get_Item, (app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_ * this_ptr, app::Type* key, app::UberTypeTracker_IDerivedTypeTracker* value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_UberTypeTracker_IDerivedTypeTracker_
