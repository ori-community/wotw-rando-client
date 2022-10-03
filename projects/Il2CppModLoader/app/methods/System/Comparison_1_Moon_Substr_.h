#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Comparison_1_Moon_Substr_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_Moon_Substr_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B85030, int32_t, Invoke, (app::Comparison_1_Moon_Substr_ * this_ptr, app::Substr x, app::Substr y))
    IL2CPP_REGISTER_METHOD(0x02B8C440, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_Moon_Substr_ * this_ptr, app::Substr x, app::Substr y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_Moon_Substr_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_Moon_Substr_
