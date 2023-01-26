#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Guid_List_1_IAttackable_.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/List_1_IAttackable_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Guid_List_1_IAttackable__ {
    IL2CPP_REGISTER_METHOD(0x0283B9A0, bool, ContainsKey, (app::Dictionary_2_System_Guid_List_1_IAttackable_ * this_ptr, app::Guid key))
    IL2CPP_REGISTER_METHOD(0x0283B670, void, Add, (app::Dictionary_2_System_Guid_List_1_IAttackable_ * this_ptr, app::Guid key, app::List_1_IAttackable_* value))
    IL2CPP_REGISTER_METHOD(0x0283D820, bool, TryGetValue, (app::Dictionary_2_System_Guid_List_1_IAttackable_ * this_ptr, app::Guid key, app::List_1_IAttackable_** value))
    IL2CPP_REGISTER_METHOD(0x02EB1890, bool, Remove, (app::Dictionary_2_System_Guid_List_1_IAttackable_ * this_ptr, app::Guid key))
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, (app::Dictionary_2_System_Guid_List_1_IAttackable_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_System_Guid_List_1_IAttackable_ * this_ptr, int32_t capacity))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Guid_List_1_IAttackable__
