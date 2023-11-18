#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XUserChangeEventCallback.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XUserChangeEvent__Enum.h>
#include <Modloader/app/structs/XUserLocalId.h>

namespace app::classes::XGamingRuntime::XUserChangeEventCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XUserChangeEventCallback * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015FF360, void, Invoke, (app::XUserChangeEventCallback * this_ptr, app::XUserLocalId user_local_id, app::XUserChangeEvent__Enum event_type))
    IL2CPP_REGISTER_METHOD(0x030BB590, app::IAsyncResult*, BeginInvoke, (app::XUserChangeEventCallback * this_ptr, app::XUserLocalId user_local_id, app::XUserChangeEvent__Enum event_type, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XUserChangeEventCallback * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::XGamingRuntime::XUserChangeEventCallback
