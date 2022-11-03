#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::DomNameTable {
    IL2CPP_REGISTER_METHOD(0x021E9360, void, ctor, (app::DomNameTable * this_ptr, app::XmlDocument* document))
    IL2CPP_REGISTER_METHOD(0x021E9430, app::XmlName*, GetName, (app::DomNameTable * this_ptr, app::String* prefix, app::String* local_name, app::String* ns, app::IXmlSchemaInfo* schema_info))
    IL2CPP_REGISTER_METHOD(0x021E9600, app::XmlName*, AddName, (app::DomNameTable * this_ptr, app::String* prefix, app::String* local_name, app::String* ns, app::IXmlSchemaInfo* schema_info))
    IL2CPP_REGISTER_METHOD(0x021E9930, void, Grow, (app::DomNameTable * this_ptr))
} // namespace app::classes::System::Xml::DomNameTable
