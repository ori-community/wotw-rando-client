#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::Datatype_unsignedShort {
    IL2CPP_REGISTER_METHOD(0x02363020, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_unsignedShort * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D5A0A0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_unsignedShort * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023630C0, int32_t, Compare, (app::Datatype_unsignedShort * this_ptr, app::Object* value1, app::Object* value2))
    IL2CPP_REGISTER_METHOD(0x02363180, app::Type*, get_ValueType, (app::Datatype_unsignedShort * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02363220, app::Type*, get_ListValueType, (app::Datatype_unsignedShort * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023632C0, app::Exception*, TryParseValue, (app::Datatype_unsignedShort * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x02363470, void, ctor, (app::Datatype_unsignedShort * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02363510, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_unsignedShort
