#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/Datatype_IDREF.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_IDREF {
    IL2CPP_REGISTER_METHOD(0x00E3F7C0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_IDREF * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::XmlTokenizedType__Enum, get_TokenizedType, (app::Datatype_IDREF * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023557A0, void, ctor, (app::Datatype_IDREF * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_IDREF
