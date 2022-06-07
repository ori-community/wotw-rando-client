#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Action_1_Moon_Substr_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Action_1_Moon_Substr_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01D253C0, void, Invoke, (app::Action_1_Moon_Substr_ * this_ptr, app::Substr obj))
    IL2CPP_REGISTER_METHOD(0x02A00E70, app::IAsyncResult *, BeginInvoke, (app::Action_1_Moon_Substr_ * this_ptr, app::Substr obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::Action_1_Moon_Substr_ * this_ptr, app::IAsyncResult * result))
}
