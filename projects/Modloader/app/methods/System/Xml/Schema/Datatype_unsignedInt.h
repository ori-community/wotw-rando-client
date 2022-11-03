#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::Datatype_unsignedInt {
    IL2CPP_REGISTER_METHOD(0x023621F0, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_unsignedInt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3BD30, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_unsignedInt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02362290, int32_t, Compare, (app::Datatype_unsignedInt * this_ptr, app::Object* value1, app::Object* value2))
    IL2CPP_REGISTER_METHOD(0x02362350, app::Type*, get_ValueType, (app::Datatype_unsignedInt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023623F0, app::Type*, get_ListValueType, (app::Datatype_unsignedInt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02362490, app::Exception*, TryParseValue, (app::Datatype_unsignedInt * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x02362640, void, ctor, (app::Datatype_unsignedInt * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023626E0, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_unsignedInt
