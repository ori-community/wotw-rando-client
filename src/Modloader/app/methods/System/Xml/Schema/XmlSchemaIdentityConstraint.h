#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompiledIdentityConstraint.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaIdentityConstraint.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaXPath.h>

namespace app::classes::System::Xml::Schema::XmlSchemaIdentityConstraint {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_Name, app::XmlSchemaIdentityConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Name, app::XmlSchemaIdentityConstraint* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaXPath*, get_Selector, app::XmlSchemaIdentityConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_Selector, app::XmlSchemaIdentityConstraint* this_ptr, app::XmlSchemaXPath* value)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchemaObjectCollection*, get_Fields, app::XmlSchemaIdentityConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlQualifiedName*, get_QualifiedName, app::XmlSchemaIdentityConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetQualifiedName, app::XmlSchemaIdentityConstraint* this_ptr, app::XmlQualifiedName* value)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::CompiledIdentityConstraint*, get_CompiledConstraint, app::XmlSchemaIdentityConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_CompiledConstraint, app::XmlSchemaIdentityConstraint* this_ptr, app::CompiledIdentityConstraint* value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_NameAttribute, app::XmlSchemaIdentityConstraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_NameAttribute, app::XmlSchemaIdentityConstraint* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01CA94E0, void, ctor, app::XmlSchemaIdentityConstraint* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaIdentityConstraint
