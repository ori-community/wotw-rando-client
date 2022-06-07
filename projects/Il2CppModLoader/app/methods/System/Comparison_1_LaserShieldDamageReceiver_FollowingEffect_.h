#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_LaserShieldDamageReceiver_FollowingEffect_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_LaserShieldDamageReceiver_FollowingEffect_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B847C0, int32_t, Invoke, (app::Comparison_1_LaserShieldDamageReceiver_FollowingEffect_ * this_ptr, app::LaserShieldDamageReceiver_FollowingEffect x, app::LaserShieldDamageReceiver_FollowingEffect y))
    IL2CPP_REGISTER_METHOD(0x02B89100, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_LaserShieldDamageReceiver_FollowingEffect_ * this_ptr, app::LaserShieldDamageReceiver_FollowingEffect x, app::LaserShieldDamageReceiver_FollowingEffect y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_LaserShieldDamageReceiver_FollowingEffect_ * this_ptr, app::IAsyncResult * result))
}
