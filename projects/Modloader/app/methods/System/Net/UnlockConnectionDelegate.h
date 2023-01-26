#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UnlockConnectionDelegate.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Net::UnlockConnectionDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::UnlockConnectionDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00611820, void, Invoke, (app::UnlockConnectionDelegate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::UnlockConnectionDelegate * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::UnlockConnectionDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Net::UnlockConnectionDelegate
