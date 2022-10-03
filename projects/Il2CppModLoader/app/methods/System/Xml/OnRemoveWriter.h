#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::OnRemoveWriter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::OnRemoveWriter * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::OnRemoveWriter * this_ptr, app::XmlRawWriter* writer))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::OnRemoveWriter * this_ptr, app::XmlRawWriter* writer, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::OnRemoveWriter * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Xml::OnRemoveWriter
