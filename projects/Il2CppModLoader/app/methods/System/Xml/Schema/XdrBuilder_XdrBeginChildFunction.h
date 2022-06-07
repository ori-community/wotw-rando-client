#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XdrBuilder_XdrBeginChildFunction * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::XdrBuilder_XdrBeginChildFunction * this_ptr, app::XdrBuilder * builder))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::XdrBuilder_XdrBeginChildFunction * this_ptr, app::XdrBuilder * builder, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::XdrBuilder_XdrBeginChildFunction * this_ptr, app::IAsyncResult * result))
}
