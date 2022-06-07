#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaDocumentation {
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Source, (app::XmlSchemaDocumentation * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x01CA73C0, void, set_Language, (app::XmlSchemaDocumentation * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Markup, (app::XmlSchemaDocumentation * this_ptr, app::XmlNode__Array * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSchemaDocumentation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA74E0, void, cctor, ())
}
