#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CartLogicCycle_IsAllowedDelegate.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_* this_ptr,
        app::Type* key,
        app::CartLogicCycle_IsAllowedDelegate* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_* this_ptr,
        app::Type* key,
        app::CartLogicCycle_IsAllowedDelegate** value
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_
