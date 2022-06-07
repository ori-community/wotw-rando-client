#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Collections::Generic::List_1_Moon_DamageReceiver_DamageEntry_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_DamageReceiver_DamageEntry_ * this_ptr, app::DamageReceiver_DamageEntry * item))
    IL2CPP_REGISTER_METHODINFO(0x0477FB90, List_1_Moon_DamageReceiver_DamageEntry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_DamageReceiver_DamageEntry_ * this_ptr, app::DamageReceiver_DamageEntry * item))
    IL2CPP_REGISTER_METHODINFO(0x04735A88, List_1_Moon_DamageReceiver_DamageEntry__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_DamageReceiver_DamageEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047890E8, List_1_Moon_DamageReceiver_DamageEntry__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::DamageReceiver_DamageEntry *, get_Item, (app::List_1_Moon_DamageReceiver_DamageEntry_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047091F8, List_1_Moon_DamageReceiver_DamageEntry__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_DamageReceiver_DamageEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476ACF8, List_1_Moon_DamageReceiver_DamageEntry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_DamageReceiver_DamageEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710D30, List_1_Moon_DamageReceiver_DamageEntry___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_DamageReceiver_DamageEntry_, GetEnumerator, (app::List_1_Moon_DamageReceiver_DamageEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753E98, List_1_Moon_DamageReceiver_DamageEntry__GetEnumerator__MethodInfo)
}
