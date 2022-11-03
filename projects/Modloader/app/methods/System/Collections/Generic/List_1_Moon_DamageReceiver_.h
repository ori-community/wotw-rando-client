#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_DamageReceiver_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_DamageReceiver_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04743D20, List_1_Moon_DamageReceiver___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_DamageReceiver_ * this_ptr, app::DamageReceiver* item))
    IL2CPP_REGISTER_METHODINFO(0x047019B8, List_1_Moon_DamageReceiver__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_Moon_DamageReceiver_ * this_ptr, app::DamageReceiver* item))
    IL2CPP_REGISTER_METHODINFO(0x0474CF18, List_1_Moon_DamageReceiver__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_DamageReceiver_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475FA38, List_1_Moon_DamageReceiver__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DamageReceiver*, get_Item, (app::List_1_Moon_DamageReceiver_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04772A18, List_1_Moon_DamageReceiver__get_Item__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_DamageReceiver_
