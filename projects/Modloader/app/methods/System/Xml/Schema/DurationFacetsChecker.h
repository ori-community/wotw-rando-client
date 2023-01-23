#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/DurationFacetsChecker.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/ArrayList.h>

namespace app::classes::System::Xml::Schema::DurationFacetsChecker {
    IL2CPP_REGISTER_METHOD(0x02369080, app::Exception*, CheckValueFacets_1, (app::DurationFacetsChecker * this_ptr, app::Object* value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x023691E0, app::Exception*, CheckValueFacets_2, (app::DurationFacetsChecker * this_ptr, app::TimeSpan value, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x02369910, bool, MatchEnumeration_1, (app::DurationFacetsChecker * this_ptr, app::Object* value, app::ArrayList* enumeration, app::XmlSchemaDatatype* datatype))
    IL2CPP_REGISTER_METHOD(0x023699D0, bool, MatchEnumeration_2, (app::DurationFacetsChecker * this_ptr, app::TimeSpan value, app::ArrayList* enumeration))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DurationFacetsChecker * this_ptr))
} // namespace app::classes::System::Xml::Schema::DurationFacetsChecker
