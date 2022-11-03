#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlSchemaRedefine {
    IL2CPP_REGISTER_METHOD(0x01CBA3A0, void, ctor, (app::XmlSchemaRedefine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlSchemaObjectCollection*, get_Items, (app::XmlSchemaRedefine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::XmlSchemaObjectTable*, get_AttributeGroups, (app::XmlSchemaRedefine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::XmlSchemaObjectTable*, get_SchemaTypes, (app::XmlSchemaRedefine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::XmlSchemaObjectTable*, get_Groups, (app::XmlSchemaRedefine * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CBA750, void, AddAnnotation, (app::XmlSchemaRedefine * this_ptr, app::XmlSchemaAnnotation* annotation))
} // namespace app::classes::System::Xml::Schema::XmlSchemaRedefine
