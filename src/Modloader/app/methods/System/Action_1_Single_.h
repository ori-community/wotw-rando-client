#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_1_Single_ {
    IL2CPP_REGISTER_METHOD(0x02A05520, void, Invoke, app::Action_1_Single_* this_ptr, float obj)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_1_Single_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02C07D60,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_1_Single_* this_ptr,
        float obj,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::Action_1_Single_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Action_1_Single_
