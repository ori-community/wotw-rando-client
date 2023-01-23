#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/Datatype_NMTOKEN.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_NMTOKEN {
    IL2CPP_REGISTER_METHOD(0x00A79BB0, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_NMTOKEN * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D89A0, app::XmlTokenizedType__Enum, get_TokenizedType, (app::Datatype_NMTOKEN * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023557A0, void, ctor, (app::Datatype_NMTOKEN * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_NMTOKEN
