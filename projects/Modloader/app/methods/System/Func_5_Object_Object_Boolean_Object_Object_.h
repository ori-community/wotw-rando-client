#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Func_5_Object_Object_Boolean_Object_Object_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_5_Object_Object_Boolean_Object_Object_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_5_Object_Object_Boolean_Object_Object_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02FAB580,
        app::Object*,
        Invoke,
        app::Func_5_Object_Object_Boolean_Object_Object_* this_ptr,
        app::Object* arg1,
        app::Object* arg2,
        bool arg3,
        app::Object* arg4
    )
    IL2CPP_REGISTER_METHOD(
        0x02FABBC0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_5_Object_Object_Boolean_Object_Object_* this_ptr,
        app::Object* arg1,
        app::Object* arg2,
        bool arg3,
        app::Object* arg4,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object*, EndInvoke, app::Func_5_Object_Object_Boolean_Object_Object_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Func_5_Object_Object_Boolean_Object_Object_
