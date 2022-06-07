#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaSimpleContentExtension {
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlQualifiedName *, get_BaseTypeName, (app::XmlSchemaSimpleContentExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191CE20, void, set_BaseTypeName, (app::XmlSchemaSimpleContentExtension * this_ptr, app::XmlQualifiedName * value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlSchemaObjectCollection *, get_Attributes, (app::XmlSchemaSimpleContentExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaAnyAttribute *, get_AnyAttribute, (app::XmlSchemaSimpleContentExtension * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_AnyAttribute, (app::XmlSchemaSimpleContentExtension * this_ptr, app::XmlSchemaAnyAttribute * value))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, SetAttributes, (app::XmlSchemaSimpleContentExtension * this_ptr, app::XmlSchemaObjectCollection * new_attributes))
    IL2CPP_REGISTER_METHOD(0x0191CF10, void, ctor, (app::XmlSchemaSimpleContentExtension * this_ptr))
}
