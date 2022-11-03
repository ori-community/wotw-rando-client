#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::Datatype_NCName {
    IL2CPP_REGISTER_METHOD(0x00E3FB10, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_NCName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02356CE0, app::Exception*, TryParseValue, (app::Datatype_NCName * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x023557A0, void, ctor, (app::Datatype_NCName * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_NCName
