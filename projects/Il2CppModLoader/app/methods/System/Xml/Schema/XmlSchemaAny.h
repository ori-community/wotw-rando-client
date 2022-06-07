#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Xml::Schema::XmlSchemaAny {
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::String *, get_Namespace, (app::XmlSchemaAny * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Namespace, (app::XmlSchemaAny * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x00C03C80, void, set_ProcessContents, (app::XmlSchemaAny * this_ptr, app::XmlSchemaContentProcessing__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::NamespaceList *, get_NamespaceList, (app::XmlSchemaAny * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA00A0, app::String *, get_ResolvedNamespace, (app::XmlSchemaAny * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA0130, app::XmlSchemaContentProcessing__Enum, get_ProcessContentsCorrect, (app::XmlSchemaAny * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA0150, app::String *, get_NameString, (app::XmlSchemaAny * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01CA05D0, void, BuildNamespaceList, (app::XmlSchemaAny * this_ptr, app::String * target_namespace))
    IL2CPP_REGISTER_METHOD(0x01CA07F0, void, BuildNamespaceListV1Compat, (app::XmlSchemaAny * this_ptr, app::String * target_namespace))
    IL2CPP_REGISTER_METHOD(0x01CA0A20, bool, Allows, (app::XmlSchemaAny * this_ptr, app::XmlQualifiedName * qname))
    IL2CPP_REGISTER_METHOD(0x01CA0A60, void, ctor, (app::XmlSchemaAny * this_ptr))
}
