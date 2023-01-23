#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DelayedAction_Action.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::DelayedAction_Action {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DelayedAction_Action * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::DelayedAction_Action * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::DelayedAction_Action * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DelayedAction_Action * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::DelayedAction_Action
