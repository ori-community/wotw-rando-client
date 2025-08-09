#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/List_1_Moon_DamageReceiver_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_DamageReceiver_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_DamageReceiver_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_Moon_DamageReceiver_* this_ptr, app::DamageReceiver* item)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, app::List_1_Moon_DamageReceiver_* this_ptr, app::DamageReceiver* item)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_DamageReceiver_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DamageReceiver*, get_Item, app::List_1_Moon_DamageReceiver_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_DamageReceiver_
