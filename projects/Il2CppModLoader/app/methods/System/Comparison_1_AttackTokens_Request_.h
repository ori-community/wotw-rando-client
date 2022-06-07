#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Comparison_1_AttackTokens_Request_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_AttackTokens_Request_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02B847C0, int32_t, Invoke, (app::Comparison_1_AttackTokens_Request_ * this_ptr, app::AttackTokens_Request x, app::AttackTokens_Request y))
    IL2CPP_REGISTER_METHOD(0x02B84E50, app::IAsyncResult *, BeginInvoke, (app::Comparison_1_AttackTokens_Request_ * this_ptr, app::AttackTokens_Request x, app::AttackTokens_Request y, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_AttackTokens_Request_ * this_ptr, app::IAsyncResult * result))
}
