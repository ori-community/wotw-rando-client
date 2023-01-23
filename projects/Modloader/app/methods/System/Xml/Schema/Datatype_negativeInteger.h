#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/Datatype_negativeInteger.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_negativeInteger {
    IL2CPP_REGISTER_METHOD(0x0235F270, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_negativeInteger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D6E50, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_negativeInteger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235F310, void, ctor, (app::Datatype_negativeInteger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235F3B0, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_negativeInteger
