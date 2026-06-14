#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Func_4_Byte_Int32_Int32_Int32_.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_4_Byte___Int32_Int32_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::Func_4_Byte_Int32_Int32_Int32_* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02FA7D80,
        app::IAsyncResult*,
        BeginInvoke,
        app::Func_4_Byte_Int32_Int32_Int32_* this_ptr,
        app::Byte__Array* arg1,
        int32_t arg2,
        int32_t arg3,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, app::Func_4_Byte_Int32_Int32_Int32_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Func_4_Byte___Int32_Int32_Int32_
