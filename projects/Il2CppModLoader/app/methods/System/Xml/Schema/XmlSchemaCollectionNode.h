#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::XmlSchemaCollectionNode {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_NamespaceURI, (app::XmlSchemaCollectionNode * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::SchemaInfo*, get_SchemaInfo, (app::XmlSchemaCollectionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_SchemaInfo, (app::XmlSchemaCollectionNode * this_ptr, app::SchemaInfo* value))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::XmlSchema*, get_Schema, (app::XmlSchemaCollectionNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Schema, (app::XmlSchemaCollectionNode * this_ptr, app::XmlSchema* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSchemaCollectionNode * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaCollectionNode
