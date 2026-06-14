#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SchemaNamespaceManager.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlSchemaObject.h>

namespace app::classes::System::Xml::Schema::SchemaNamespaceManager {
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, ctor, app::SchemaNamespaceManager* this_ptr, app::XmlSchemaObject* node)
    IL2CPP_REGISTER_METHOD(0x01AB8C30, app::String*, LookupNamespace, app::SchemaNamespaceManager* this_ptr, app::String* prefix)
    IL2CPP_REGISTER_METHOD(0x01AB8DB0, app::String*, LookupPrefix, app::SchemaNamespaceManager* this_ptr, app::String* ns)
} // namespace app::classes::System::Xml::Schema::SchemaNamespaceManager
