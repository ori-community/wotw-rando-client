#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Datatype_ENTITY.h>
#include <Modloader/app/structs/XmlTokenizedType__Enum.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_ENTITY {
    IL2CPP_REGISTER_METHOD(0x00E3FFC0, app::XmlTypeCode__Enum, get_TypeCode, app::Datatype_ENTITY* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00910BD0, app::XmlTokenizedType__Enum, get_TokenizedType, app::Datatype_ENTITY* this_ptr)
    IL2CPP_REGISTER_METHOD(0x023557A0, void, ctor, app::Datatype_ENTITY* this_ptr)
} // namespace app::classes::System::Xml::Schema::Datatype_ENTITY
