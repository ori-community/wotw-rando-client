#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x029FD8B0, void, Invoke, (app::Action_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ * this_ptr, app::Vitals_DamageProcessHelper_DamageBucket obj))
    IL2CPP_REGISTER_METHOD(0x02A02B60, app::IAsyncResult *, BeginInvoke, (app::Action_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ * this_ptr, app::Vitals_DamageProcessHelper_DamageBucket obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Moon_Vitals_DamageProcessHelper_DamageBucket_ * this_ptr, app::IAsyncResult * result))
}
