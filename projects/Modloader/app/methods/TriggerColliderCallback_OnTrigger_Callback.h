#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TriggerColliderCallback_OnTrigger_Callback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::TriggerColliderCallback_OnTrigger_Callback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::TriggerColliderCallback_OnTrigger_Callback * this_ptr, app::Collider* c))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::TriggerColliderCallback_OnTrigger_Callback * this_ptr, app::Collider* c, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::TriggerColliderCallback_OnTrigger_Callback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::TriggerColliderCallback_OnTrigger_Callback
