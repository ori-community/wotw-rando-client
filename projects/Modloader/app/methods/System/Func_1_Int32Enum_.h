#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_1_Int32Enum_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Int32Enum__Enum.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Func_1_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Func_1_Int32Enum_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x0167F180, app::Int32Enum__Enum, Invoke, (app::Func_1_Int32Enum_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult*, BeginInvoke, (app::Func_1_Int32Enum_ * this_ptr, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::Int32Enum__Enum, EndInvoke, (app::Func_1_Int32Enum_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Func_1_Int32Enum_
