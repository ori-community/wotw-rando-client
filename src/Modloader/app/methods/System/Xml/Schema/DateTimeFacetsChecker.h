#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeFacetsChecker.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>

namespace app::classes::System::Xml::Schema::DateTimeFacetsChecker {
    IL2CPP_REGISTER_METHOD(
        0x02364270,
        app::Exception*,
        CheckValueFacets_1,
        app::DateTimeFacetsChecker* this_ptr,
        app::Object* value,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x02364300,
        app::Exception*,
        CheckValueFacets_2,
        app::DateTimeFacetsChecker* this_ptr,
        app::DateTime value,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x02364AC0,
        bool,
        MatchEnumeration_1,
        app::DateTimeFacetsChecker* this_ptr,
        app::Object* value,
        app::ArrayList* enumeration,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x02364B50,
        bool,
        MatchEnumeration_2,
        app::DateTimeFacetsChecker* this_ptr,
        app::DateTime value,
        app::ArrayList* enumeration,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DateTimeFacetsChecker* this_ptr)
} // namespace app::classes::System::Xml::Schema::DateTimeFacetsChecker
