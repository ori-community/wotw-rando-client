#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Predicate_1_WaterPoisonTrail_DamagePoint_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x0288D3A0, bool, Invoke, (app::Predicate_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::WaterPoisonTrail_DamagePoint obj))
    IL2CPP_REGISTER_METHOD(0x02A57080, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::WaterPoisonTrail_DamagePoint obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::IAsyncResult * result))
}
