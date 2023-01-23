#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XUserGetGamerPictureCompleted.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::XGamingRuntime::XUserGetGamerPictureCompleted {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XUserGetGamerPictureCompleted * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, (app::XUserGetGamerPictureCompleted * this_ptr, int32_t hresult, app::Byte__Array* buffer))
    IL2CPP_REGISTER_METHOD(0x030BB660, app::IAsyncResult*, BeginInvoke, (app::XUserGetGamerPictureCompleted * this_ptr, int32_t hresult, app::Byte__Array* buffer, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XUserGetGamerPictureCompleted * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::XGamingRuntime::XUserGetGamerPictureCompleted
