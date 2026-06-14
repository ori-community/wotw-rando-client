#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_3_Boolean_Boolean_Int32_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Action_3_Boolean_Boolean_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02C149C0, void, Invoke, app::Action_3_Boolean_Boolean_Int32_* this_ptr, bool arg1, bool arg2, int32_t arg3)
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Action_3_Boolean_Boolean_Int32_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02C14D50,
        app::IAsyncResult*,
        BeginInvoke,
        app::Action_3_Boolean_Boolean_Int32_* this_ptr,
        bool arg1,
        bool arg2,
        int32_t arg3,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::Action_3_Boolean_Boolean_Int32_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Action_3_Boolean_Boolean_Int32_
