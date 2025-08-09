#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaAttributeGroup.h>
#include <Modloader/app/structs/XmlSchemaObject.h>
#include <Modloader/app/structs/XmlSchemaObjectCollection.h>
#include <Modloader/app/structs/XmlSchemaObjectTable.h>

namespace app::classes::System::Xml::Schema::XmlSchemaAttributeGroup {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_Name, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Name, app::XmlSchemaAttributeGroup* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBB60, app::XmlSchemaObjectCollection*, get_Attributes, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlSchemaAnyAttribute*, get_AnyAttribute, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_AnyAttribute, app::XmlSchemaAttributeGroup* this_ptr, app::XmlSchemaAnyAttribute* value)
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlQualifiedName*, get_QualifiedName, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CA17C0, app::XmlSchemaObjectTable*, get_AttributeUses, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::XmlSchemaAnyAttribute*, get_AttributeWildcard, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_AttributeWildcard, app::XmlSchemaAttributeGroup* this_ptr, app::XmlSchemaAnyAttribute* value)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::XmlSchemaAttributeGroup*, get_RedefinedAttributeGroup, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::XmlSchemaAttributeGroup*, get_Redefined, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_Redefined, app::XmlSchemaAttributeGroup* this_ptr, app::XmlSchemaAttributeGroup* value)
    IL2CPP_REGISTER_METHOD(0x00989BF0, int32_t, get_SelfReferenceCount, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009C9740, void, set_SelfReferenceCount, app::XmlSchemaAttributeGroup* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::String*, get_NameAttribute, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_NameAttribute, app::XmlSchemaAttributeGroup* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetQualifiedName, app::XmlSchemaAttributeGroup* this_ptr, app::XmlQualifiedName* value)
    IL2CPP_REGISTER_METHOD(0x01CA1920, app::XmlSchemaObject*, Clone, app::XmlSchemaAttributeGroup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CA1AF0, void, ctor, app::XmlSchemaAttributeGroup* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaAttributeGroup
