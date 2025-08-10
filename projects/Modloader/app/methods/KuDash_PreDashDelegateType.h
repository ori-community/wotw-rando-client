#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/KuDash_PreDashDelegateType.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::KuDash_PreDashDelegateType {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::KuDash_PreDashDelegateType* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, app::KuDash_PreDashDelegateType* this_ptr, bool* allow)
    IL2CPP_REGISTER_METHOD(
        0x012344E0,
        app::IAsyncResult*,
        BeginInvoke,
        app::KuDash_PreDashDelegateType* this_ptr,
        bool* allow,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, app::KuDash_PreDashDelegateType* this_ptr, bool* allow, app::IAsyncResult* result)
} // namespace app::classes::KuDash_PreDashDelegateType
