#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaAppInfo {
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Source, (app::XmlSchemaAppInfo * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::XmlNode__Array *, get_Markup, (app::XmlSchemaAppInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Markup, (app::XmlSchemaAppInfo * this_ptr, app::XmlNode__Array * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSchemaAppInfo * this_ptr))
}
