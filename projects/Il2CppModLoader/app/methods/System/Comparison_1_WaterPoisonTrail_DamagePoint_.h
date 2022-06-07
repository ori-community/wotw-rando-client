#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_WaterPoisonTrail_DamagePoint_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B866C0, int32_t, Invoke, (app::Comparison_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::WaterPoisonTrail_DamagePoint x, app::WaterPoisonTrail_DamagePoint y))
    IL2CPP_REGISTER_METHOD(0x02C86140, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::WaterPoisonTrail_DamagePoint x, app::WaterPoisonTrail_DamagePoint y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_WaterPoisonTrail_DamagePoint_ * this_ptr, app::IAsyncResult * result))
}
