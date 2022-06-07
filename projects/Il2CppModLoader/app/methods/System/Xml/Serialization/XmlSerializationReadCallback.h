#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Serialization::XmlSerializationReadCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::XmlSerializationReadCallback * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x01938310, app::Object *, Invoke, (app::XmlSerializationReadCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00611B10, app::IAsyncResult *, BeginInvoke, (app::XmlSerializationReadCallback * this_ptr, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, app::Object *, EndInvoke, (app::XmlSerializationReadCallback * this_ptr, app::IAsyncResult * result))
}
