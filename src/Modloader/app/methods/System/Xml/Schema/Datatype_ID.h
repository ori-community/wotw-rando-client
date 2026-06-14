#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_ID.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_ID {
    IL2CPP_REGISTER_METHOD(0x00E3F9D0, app::XmlTypeCode__Enum, get_TypeCode, app::Datatype_ID* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, app::XmlTokenizedType__Enum, get_TokenizedType, app::Datatype_ID* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023557A0, void, ctor, app::Datatype_ID* this_ptr)
} // namespace app::classes::System::Xml::Schema::Datatype_ID
