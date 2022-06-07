#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Predicate_1_UInt16_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_UInt16_ * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02A50C10, bool, Invoke, (app::Predicate_1_UInt16_ * this_ptr, uint16_t obj))
    IL2CPP_REGISTER_METHOD(0x02A529E0, app::IAsyncResult *, BeginInvoke, (app::Predicate_1_UInt16_ * this_ptr, uint16_t obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_UInt16_ * this_ptr, app::IAsyncResult * result))
}
