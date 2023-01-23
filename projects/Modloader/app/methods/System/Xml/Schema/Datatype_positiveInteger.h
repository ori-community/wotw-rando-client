#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/Datatype_positiveInteger.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_positiveInteger {
    IL2CPP_REGISTER_METHOD(0x0235FAF0, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_positiveInteger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E390, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_positiveInteger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235FB90, void, ctor, (app::Datatype_positiveInteger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235FC30, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_positiveInteger
