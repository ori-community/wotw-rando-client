#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XUserResolveIssueWithUiUtf16Result.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::XGamingRuntime::XUserResolveIssueWithUiUtf16Result {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XUserResolveIssueWithUiUtf16Result * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::XUserResolveIssueWithUiUtf16Result * this_ptr, int32_t hresult))
    IL2CPP_REGISTER_METHOD(0x030BBA70, app::IAsyncResult*, BeginInvoke, (app::XUserResolveIssueWithUiUtf16Result * this_ptr, int32_t hresult, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XUserResolveIssueWithUiUtf16Result * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::XGamingRuntime::XUserResolveIssueWithUiUtf16Result
