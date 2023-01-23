#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaSimpleTypeUnion.h>
#include <Modloader/app/structs/XmlQualifiedName__Array.h>
#include <Modloader/app/structs/XmlSchemaSimpleType__Array.h>
#include <Modloader/app/structs/XmlSchemaObject.h>

namespace app::classes::System::Xml::Schema::XmlSchemaSimpleTypeUnion {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::XmlSchemaObjectCollection*, get_BaseTypes, (app::XmlSchemaSimpleTypeUnion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlQualifiedName__Array*, get_MemberTypes, (app::XmlSchemaSimpleTypeUnion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB70, void, set_MemberTypes, (app::XmlSchemaSimpleTypeUnion * this_ptr, app::XmlQualifiedName__Array* value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchemaSimpleType__Array*, get_BaseMemberTypes, (app::XmlSchemaSimpleTypeUnion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, SetBaseMemberTypes, (app::XmlSchemaSimpleTypeUnion * this_ptr, app::XmlSchemaSimpleType__Array* base_member_types))
    IL2CPP_REGISTER_METHOD(0x0191DCD0, app::XmlSchemaObject*, Clone, (app::XmlSchemaSimpleTypeUnion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191DF10, void, ctor, (app::XmlSchemaSimpleTypeUnion * this_ptr))
} // namespace app::classes::System::Xml::Schema::XmlSchemaSimpleTypeUnion
