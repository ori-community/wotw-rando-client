#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/Datatype_NCName.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNameTable.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Xml::Schema::Datatype_NCName {
    IL2CPP_REGISTER_METHOD(0x00E3FB10, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_NCName * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02356CE0, app::Exception*, TryParseValue, (app::Datatype_NCName * this_ptr, app::String* s, app::XmlNameTable* name_table, app::IXmlNamespaceResolver* nsmgr, app::Object** typed_value))
    IL2CPP_REGISTER_METHOD(0x023557A0, void, ctor, (app::Datatype_NCName * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_NCName
