#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Comparison_1_InstantiateUtility_InstantiationInfo_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Comparison_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02B86EB0, int32_t, Invoke, (app::Comparison_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::InstantiateUtility_InstantiationInfo x, app::InstantiateUtility_InstantiationInfo y))
    IL2CPP_REGISTER_METHOD(0x02B88F20, app::IAsyncResult*, BeginInvoke, (app::Comparison_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::InstantiateUtility_InstantiationInfo x, app::InstantiateUtility_InstantiationInfo y, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, (app::Comparison_1_InstantiateUtility_InstantiationInfo_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Comparison_1_InstantiateUtility_InstantiationInfo_
