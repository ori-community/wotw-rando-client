#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XdrBuilder_XdrInitFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XdrBuilder_XdrInitFunction * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01686F50, void, Invoke, (app::XdrBuilder_XdrInitFunction * this_ptr, app::XdrBuilder * builder, app::Object * obj))
    IL2CPP_REGISTER_METHOD(0x01435260, app::IAsyncResult *, BeginInvoke, (app::XdrBuilder_XdrInitFunction * this_ptr, app::XdrBuilder * builder, app::Object * obj, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XdrBuilder_XdrInitFunction * this_ptr, app::IAsyncResult * result))
}
