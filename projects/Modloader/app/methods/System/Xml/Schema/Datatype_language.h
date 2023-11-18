#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlTypeCode__Enum.h>
#include <Modloader/app/structs/Datatype_language.h>

namespace app::classes::System::Xml::Schema::Datatype_language {
    IL2CPP_REGISTER_METHOD(0x00E3F100, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_language * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023557A0, void, ctor, (app::Datatype_language * this_ptr))
} // namespace app::classes::System::Xml::Schema::Datatype_language
