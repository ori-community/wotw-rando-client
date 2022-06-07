#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaAnnotated {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String *, get_Id, (app::XmlSchemaAnnotated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_Id, (app::XmlSchemaAnnotated * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::XmlSchemaAnnotation *, get_Annotation, (app::XmlSchemaAnnotated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Annotation, (app::XmlSchemaAnnotated * this_ptr, app::XmlSchemaAnnotation * value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::XmlAttribute__Array *, get_UnhandledAttributes, (app::XmlSchemaAnnotated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_UnhandledAttributes, (app::XmlSchemaAnnotated * this_ptr, app::XmlAttribute__Array * value))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String *, get_IdAttribute, (app::XmlSchemaAnnotated * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_IdAttribute, (app::XmlSchemaAnnotated * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, SetUnhandledAttributes, (app::XmlSchemaAnnotated * this_ptr, app::XmlAttribute__Array * more_attributes))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, AddAnnotation, (app::XmlSchemaAnnotated * this_ptr, app::XmlSchemaAnnotation * annotation))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSchemaAnnotated * this_ptr))
}
