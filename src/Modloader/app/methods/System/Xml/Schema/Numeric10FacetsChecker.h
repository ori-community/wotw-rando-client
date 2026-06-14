#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrayList.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/Numeric10FacetsChecker.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/XmlSchemaDatatype.h>
#include <Modloader/app/structs/XmlValueConverter.h>

namespace app::classes::System::Xml::Schema::Numeric10FacetsChecker {
    IL2CPP_REGISTER_METHOD(0x016D0D80, void, ctor, app::Numeric10FacetsChecker* this_ptr, app::Decimal min_val, app::Decimal max_val)
    IL2CPP_REGISTER_METHOD(
        0x016D0D90,
        app::Exception*,
        CheckValueFacets_1,
        app::Numeric10FacetsChecker* this_ptr,
        app::Object* value,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x016D0E30,
        app::Exception*,
        CheckValueFacets_2,
        app::Numeric10FacetsChecker* this_ptr,
        app::Decimal value,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x016D19A0,
        app::Exception*,
        CheckValueFacets_3,
        app::Numeric10FacetsChecker* this_ptr,
        int64_t value,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x016D1AA0,
        app::Exception*,
        CheckValueFacets_4,
        app::Numeric10FacetsChecker* this_ptr,
        int32_t value,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x016D1BA0,
        app::Exception*,
        CheckValueFacets_5,
        app::Numeric10FacetsChecker* this_ptr,
        int16_t value,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x016D1CA0,
        bool,
        MatchEnumeration_1,
        app::Numeric10FacetsChecker* this_ptr,
        app::Object* value,
        app::ArrayList* enumeration,
        app::XmlSchemaDatatype* datatype
    )
    IL2CPP_REGISTER_METHOD(
        0x016D1D60,
        bool,
        MatchEnumeration_2,
        app::Numeric10FacetsChecker* this_ptr,
        app::Decimal value,
        app::ArrayList* enumeration,
        app::XmlValueConverter* value_converter
    )
    IL2CPP_REGISTER_METHOD(
        0x016D1ED0,
        app::Exception*,
        CheckTotalAndFractionDigits,
        app::Numeric10FacetsChecker* this_ptr,
        app::Decimal value,
        int32_t total_digits,
        int32_t fraction_digits,
        bool check_total,
        bool check_fraction
    )
    IL2CPP_REGISTER_METHOD(0x016D2530, void, cctor, )
} // namespace app::classes::System::Xml::Schema::Numeric10FacetsChecker
