#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserShieldDamageReceiver.h>
#include <Modloader/app/structs/List_1_LaserShieldDamageReceiver_.h>

namespace app::classes::System::Collections::Generic::List_1_LaserShieldDamageReceiver_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_LaserShieldDamageReceiver_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::LaserShieldDamageReceiver*, get_Item, app::List_1_LaserShieldDamageReceiver_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025E81E0, void, ctor_1, app::List_1_LaserShieldDamageReceiver_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_LaserShieldDamageReceiver_* this_ptr, app::LaserShieldDamageReceiver* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_2, app::List_1_LaserShieldDamageReceiver_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_LaserShieldDamageReceiver_
