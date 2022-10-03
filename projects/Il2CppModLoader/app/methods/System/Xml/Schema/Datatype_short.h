#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Xml::Schema::Datatype_short {
    IL2CPP_REGISTER_METHOD(0x0235FE30, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_short * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BD70, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_short * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235FED0, int32_t, Compare, (app::Datatype_short * this_ptr, app::Object* value1, app::Object* value2))
    IL2CPP_REGISTER_METHOD(0x0235FF90, app::Type*, get_ValueType, (app::Datatype_short * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02360030, app::Type*, get_ListValueType, (app::Datatype_short * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023600D0, app::Exception*, TryParseValue, (app::Datatype_short * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x02360280, void, ctor, (app::Datatype_short * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02360320, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_short
