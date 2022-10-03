#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlSchemaSimpleContentRestriction {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlQualifiedName*, get_BaseTypeName, (app::XmlSchemaSimpleContentRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191D090, void, set_BaseTypeName, (app::XmlSchemaSimpleContentRestriction * this_ptr, app::XmlQualifiedName* value))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaSimpleType*, get_BaseType, (app::XmlSchemaSimpleContentRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_BaseType, (app::XmlSchemaSimpleContentRestriction * this_ptr, app::XmlSchemaSimpleType* value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchemaObjectCollection*, get_Facets, (app::XmlSchemaSimpleContentRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlSchemaObjectCollection*, get_Attributes, (app::XmlSchemaSimpleContentRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::XmlSchemaAnyAttribute*, get_AnyAttribute, (app::XmlSchemaSimpleContentRestriction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_AnyAttribute, (app::XmlSchemaSimpleContentRestriction * this_ptr, app::XmlSchemaAnyAttribute* value))
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetAttributes, (app::XmlSchemaSimpleContentRestriction * this_ptr, app::XmlSchemaObjectCollection* new_attributes))
    IL2CPP_REGISTER_METHOD(0x0191D180, void, ctor, (app::XmlSchemaSimpleContentRestriction * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaSimpleContentRestriction
