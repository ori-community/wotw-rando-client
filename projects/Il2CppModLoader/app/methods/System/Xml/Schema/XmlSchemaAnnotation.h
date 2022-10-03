#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlSchemaAnnotation {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_Id, (app::XmlSchemaAnnotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Id, (app::XmlSchemaAnnotation * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::XmlSchemaObjectCollection*, get_Items, (app::XmlSchemaAnnotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_IdAttribute, (app::XmlSchemaAnnotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_IdAttribute, (app::XmlSchemaAnnotation * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, SetUnhandledAttributes, (app::XmlSchemaAnnotation * this_ptr, app::XmlAttribute__Array* more_attributes))
    IL2CPP_REGISTER_METHOD(0x01C9FF50, void, ctor, (app::XmlSchemaAnnotation * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaAnnotation
