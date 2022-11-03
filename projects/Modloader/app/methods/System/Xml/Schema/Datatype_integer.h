#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::Schema::Datatype_integer {
    IL2CPP_REGISTER_METHOD(0x00C754B0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_integer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235E8B0, app::Exception*, TryParseValue, (app::Datatype_integer * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x0235EA40, void, ctor, (app::Datatype_integer * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_integer
