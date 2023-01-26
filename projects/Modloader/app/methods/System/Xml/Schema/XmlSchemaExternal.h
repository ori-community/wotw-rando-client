#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Compositor__Enum.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlAttribute__Array.h>
#include <Modloader/app/structs/XmlSchema.h>
#include <Modloader/app/structs/XmlSchemaExternal.h>

namespace app::classes::System::Xml::Schema::XmlSchemaExternal {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_SchemaLocation, (app::XmlSchemaExternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_SchemaLocation, (app::XmlSchemaExternal * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::XmlSchema*, get_Schema, (app::XmlSchemaExternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_Schema, (app::XmlSchemaExternal * this_ptr, app::XmlSchema* value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_Id, (app::XmlSchemaExternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Id, (app::XmlSchemaExternal * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Uri*, get_BaseUri, (app::XmlSchemaExternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_BaseUri, (app::XmlSchemaExternal * this_ptr, app::Uri* value))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_IdAttribute, (app::XmlSchemaExternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_IdAttribute, (app::XmlSchemaExternal * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, SetUnhandledAttributes, (app::XmlSchemaExternal * this_ptr, app::XmlAttribute__Array* more_attributes))
    IL2CPP_REGISTER_METHOD(0x002FD750, app::Compositor__Enum, get_Compositor, (app::XmlSchemaExternal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD760, void, set_Compositor, (app::XmlSchemaExternal * this_ptr, app::Compositor__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlSchemaExternal * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaExternal
