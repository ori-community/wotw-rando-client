#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHODINFO(0x047527E8, Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02B847C0, int32_t, Invoke, (app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ * this_ptr, app::Vitals_DamageProcessHelper_SortedDamageEntry x, app::Vitals_DamageProcessHelper_SortedDamageEntry y))
    IL2CPP_REGISTER_METHOD(0x02C7AD30, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ * this_ptr, app::Vitals_DamageProcessHelper_SortedDamageEntry x, app::Vitals_DamageProcessHelper_SortedDamageEntry y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ * this_ptr, app::IAsyncResult * result))
}
