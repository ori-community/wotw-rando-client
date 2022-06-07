#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_Int32Enum_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Int32Enum_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C7E620, int32_t, Invoke, (app::Comparison_1_Int32Enum_ * this_ptr, app::Int32Enum__Enum x, app::Int32Enum__Enum y))
    IL2CPP_REGISTER_METHOD(0x02C7EA40, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_Int32Enum_ * this_ptr, app::Int32Enum__Enum x, app::Int32Enum__Enum y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Int32Enum_ * this_ptr, app::IAsyncResult * result))
}
