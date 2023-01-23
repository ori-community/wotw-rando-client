#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_DamageReceiver_OverrideInfo_.h>
#include <Modloader/app/structs/DamageReceiver_OverrideInfo.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_DamageReceiver_OverrideInfo_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_DamageReceiver_OverrideInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472D888, List_1_Moon_DamageReceiver_OverrideInfo__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DamageReceiver_OverrideInfo*, get_Item, (app::List_1_Moon_DamageReceiver_OverrideInfo_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0470D080, List_1_Moon_DamageReceiver_OverrideInfo__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_Moon_DamageReceiver_OverrideInfo_ * this_ptr, app::DamageReceiver_OverrideInfo* item))
    IL2CPP_REGISTER_METHODINFO(0x04750808, List_1_Moon_DamageReceiver_OverrideInfo__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_DamageReceiver_OverrideInfo_ * this_ptr, app::DamageReceiver_OverrideInfo* item))
    IL2CPP_REGISTER_METHODINFO(0x04774A98, List_1_Moon_DamageReceiver_OverrideInfo__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_DamageReceiver_OverrideInfo_ * this_ptr, app::DamageReceiver_OverrideInfo* item))
    IL2CPP_REGISTER_METHODINFO(0x04791938, List_1_Moon_DamageReceiver_OverrideInfo__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_DamageReceiver_OverrideInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04754400, List_1_Moon_DamageReceiver_OverrideInfo___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_DamageReceiver_OverrideInfo_
