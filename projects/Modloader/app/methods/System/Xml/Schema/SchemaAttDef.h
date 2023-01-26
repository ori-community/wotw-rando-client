#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SchemaAttDef.h>
#include <Modloader/app/structs/IValidationEventHandling.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SchemaAttDef_Reserve__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaAttribute.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>

namespace app::classes::System::Xml::Schema::SchemaAttDef {
    IL2CPP_REGISTER_METHOD(0x016E7630, void, ctor_1, (app::SchemaAttDef * this_ptr, app::XmlQualifiedName* name, app::String* prefix))
    IL2CPP_REGISTER_METHOD(0x016E7640, void, ctor_2, (app::SchemaAttDef * this_ptr, app::XmlQualifiedName* name))
    IL2CPP_REGISTER_METHOD(0x016E7650, void, ctor_3, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016E7660, app::String*, IDtdAttributeInfo_get_Prefix, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::String*, IDtdAttributeInfo_get_LocalName, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, IDtdAttributeInfo_get_LineNumber, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00608710, int32_t, IDtdAttributeInfo_get_LinePosition, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016E7670, bool, IDtdAttributeInfo_get_IsNonCDataType, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, IDtdAttributeInfo_get_IsDeclaredInExternal, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016E76A0, bool, IDtdAttributeInfo_get_IsXmlAttribute, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016E76B0, app::String*, IDtdDefaultAttributeInfo_get_DefaultValueExpanded, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Object*, IDtdDefaultAttributeInfo_get_DefaultValueTyped, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, IDtdDefaultAttributeInfo_get_ValueLineNumber, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, IDtdDefaultAttributeInfo_get_ValueLinePosition, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00608710, int32_t, get_LinePosition, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00608720, void, set_LinePosition, (app::SchemaAttDef * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, get_LineNumber, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F083C0, void, set_LineNumber, (app::SchemaAttDef * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003FF7D0, int32_t, get_ValueLinePosition, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0111BFC0, void, set_ValueLinePosition, (app::SchemaAttDef * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x003FF7B0, int32_t, get_ValueLineNumber, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FF7C0, void, set_ValueLineNumber, (app::SchemaAttDef * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x016E76C0, app::String*, get_DefaultValueExpanded, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_DefaultValueExpanded, (app::SchemaAttDef * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x016E7750, app::XmlTokenizedType__Enum, get_TokenizedType, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016E7780, void, set_TokenizedType, (app::SchemaAttDef * this_ptr, app::XmlTokenizedType__Enum value))
    IL2CPP_REGISTER_METHOD(0x003FF8B0, app::SchemaAttDef_Reserve__Enum, get_Reserved, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_Reserved, (app::SchemaAttDef * this_ptr, app::SchemaAttDef_Reserve__Enum value))
    IL2CPP_REGISTER_METHOD(0x0085D750, bool, get_DefaultValueChecked, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::XmlSchemaAttribute*, get_SchemaAttribute, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC10, void, set_SchemaAttribute, (app::SchemaAttDef * this_ptr, app::XmlSchemaAttribute* value))
    IL2CPP_REGISTER_METHOD(0x016E77A0, void, CheckXmlSpace, (app::SchemaAttDef * this_ptr, app::IValidationEventHandling* validation_event_handling))
    IL2CPP_REGISTER_METHOD(0x016E7B40, app::SchemaAttDef*, Clone, (app::SchemaAttDef * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016E7C70, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::SchemaAttDef
