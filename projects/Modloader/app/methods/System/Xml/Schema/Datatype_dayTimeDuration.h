#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::Datatype_dayTimeDuration {
    IL2CPP_REGISTER_METHOD(0x0235B380, app::Exception*, TryParseValue, (app::Datatype_dayTimeDuration * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x00E3FDE0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_dayTimeDuration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235B670, void, ctor, (app::Datatype_dayTimeDuration * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_dayTimeDuration
