#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Action_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01D247B0, void, Invoke, (app::Action_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * this_ptr, app::XalHttpHeader obj))
    IL2CPP_REGISTER_METHOD(0x029FF8D0, app::IAsyncResult*, BeginInvoke, (app::Action_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * this_ptr, app::XalHttpHeader obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Action_1_Microsoft_Xbox_Services_Xal_XalHttpHeader_
