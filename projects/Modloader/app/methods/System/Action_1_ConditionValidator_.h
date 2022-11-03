#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_ConditionValidator_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_ConditionValidator_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_ConditionValidator_ * this_ptr, app::ConditionValidator obj))
    IL2CPP_REGISTER_METHOD(0x029FC820, app::IAsyncResult*, BeginInvoke, (app::Action_1_ConditionValidator_ * this_ptr, app::ConditionValidator obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_ConditionValidator_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_ConditionValidator_
