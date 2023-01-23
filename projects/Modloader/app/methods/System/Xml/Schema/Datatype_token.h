#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/Datatype_token.h>
#include <Modloader/app/structs/XmlSchemaWhiteSpace__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_token {
    IL2CPP_REGISTER_METHOD(0x00E3EE80, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_token * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlSchemaWhiteSpace__Enum, get_BuiltInWhitespaceFacet, (app::Datatype_token * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023557A0, void, ctor, (app::Datatype_token * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_token
