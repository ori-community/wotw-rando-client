#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FacetsChecker.h>
#include <Modloader/app/structs/Datatype_nonNegativeInteger.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::Datatype_nonNegativeInteger {
    IL2CPP_REGISTER_METHOD(0x0235F5B0, app::FacetsChecker*, get_FacetsChecker, (app::Datatype_nonNegativeInteger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3AD20, app::XmlTypeCode__Enum, get_TypeCode, (app::Datatype_nonNegativeInteger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasValueFacets, (app::Datatype_nonNegativeInteger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235EF30, void, ctor, (app::Datatype_nonNegativeInteger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0235F650, void, cctor, ())
} // namespace app::classes::System::Xml::Schema::Datatype_nonNegativeInteger
