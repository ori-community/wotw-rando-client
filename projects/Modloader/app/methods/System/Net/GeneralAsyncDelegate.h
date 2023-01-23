#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GeneralAsyncDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::Net::GeneralAsyncDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::GeneralAsyncDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015FE410, void, Invoke, (app::GeneralAsyncDelegate * this_ptr, app::Object* request, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult*, BeginInvoke, (app::GeneralAsyncDelegate * this_ptr, app::Object* request, app::Object* state, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::GeneralAsyncDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::GeneralAsyncDelegate
