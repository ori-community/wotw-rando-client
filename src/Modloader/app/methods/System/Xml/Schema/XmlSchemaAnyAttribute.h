#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NamespaceList.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaAnyAttribute.h>
#include <Modloader/app/structs/XmlSchemaContentProcessing__Enum.h>

namespace app::classes::System::Xml::Schema::XmlSchemaAnyAttribute {
    IL2CPP_REGISTER_METHOD(0x002FBB50, void, set_Namespace, app::XmlSchemaAnyAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x004C6660, app::XmlSchemaContentProcessing__Enum, get_ProcessContents, app::XmlSchemaAnyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0191E6A0, void, set_ProcessContents, app::XmlSchemaAnyAttribute* this_ptr, app::XmlSchemaContentProcessing__Enum value)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::NamespaceList*, get_NamespaceList, app::XmlSchemaAnyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CA0B00, app::XmlSchemaContentProcessing__Enum, get_ProcessContentsCorrect, app::XmlSchemaAnyAttribute* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01CA0B10, void, BuildNamespaceList, app::XmlSchemaAnyAttribute* this_ptr, app::String* target_namespace)
    IL2CPP_REGISTER_METHOD(0x01CA0D30, void, BuildNamespaceListV1Compat, app::XmlSchemaAnyAttribute* this_ptr, app::String* target_namespace)
    IL2CPP_REGISTER_METHOD(0x01CA0F60, bool, Allows, app::XmlSchemaAnyAttribute* this_ptr, app::XmlQualifiedName* qname)
    IL2CPP_REGISTER_METHOD(0x01CA0FA0, bool, IsSubset, app::XmlSchemaAnyAttribute* sub, app::XmlSchemaAnyAttribute* super)
    IL2CPP_REGISTER_METHOD(
        0x01CA0FD0,
        app::XmlSchemaAnyAttribute*,
        Intersection,
        app::XmlSchemaAnyAttribute* o1,
        app::XmlSchemaAnyAttribute* o2,
        bool v1_compat
    )
    IL2CPP_REGISTER_METHOD(0x01CA1180, app::XmlSchemaAnyAttribute*, Union, app::XmlSchemaAnyAttribute* o1, app::XmlSchemaAnyAttribute* o2, bool v1_compat)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XmlSchemaAnyAttribute* this_ptr)
} // namespace app::classes::System::Xml::Schema::XmlSchemaAnyAttribute
