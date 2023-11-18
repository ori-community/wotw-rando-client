#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_LaserShieldDamageReceiver_FollowingEffect_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/LaserShieldDamageReceiver_FollowingEffect.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Predicate_1_LaserShieldDamageReceiver_FollowingEffect_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_LaserShieldDamageReceiver_FollowingEffect_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Predicate_1_LaserShieldDamageReceiver_FollowingEffect_ * this_ptr, app::LaserShieldDamageReceiver_FollowingEffect obj))
    IL2CPP_REGISTER_METHOD(0x0288F4D0, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_LaserShieldDamageReceiver_FollowingEffect_ * this_ptr, app::LaserShieldDamageReceiver_FollowingEffect obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_LaserShieldDamageReceiver_FollowingEffect_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_LaserShieldDamageReceiver_FollowingEffect_
