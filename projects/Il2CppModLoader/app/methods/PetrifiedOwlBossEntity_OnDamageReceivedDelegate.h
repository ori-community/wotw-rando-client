#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossEntity_OnDamageReceivedDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, (app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHOD(0x01761300, app::IAsyncResult*, BeginInvoke, (app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate * this_ptr, app::DamageResult result, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PetrifiedOwlBossEntity_OnDamageReceivedDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::PetrifiedOwlBossEntity_OnDamageReceivedDelegate
