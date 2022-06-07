#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::SchemaNamespaceManager {
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, ctor, (app::SchemaNamespaceManager * this_ptr, app::XmlSchemaObject * node))
    IL2CPP_REGISTER_METHOD(0x01AB8C30, app::String *, LookupNamespace, (app::SchemaNamespaceManager * this_ptr, app::String * prefix))
    IL2CPP_REGISTER_METHOD(0x01AB8DB0, app::String *, LookupPrefix, (app::SchemaNamespaceManager * this_ptr, app::String * ns))
}
