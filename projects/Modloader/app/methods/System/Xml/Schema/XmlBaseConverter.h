#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Uri.h>
#include <Modloader/app/structs/XmlBaseConverter.h>
#include <Modloader/app/structs/XmlQualifiedName.h>
#include <Modloader/app/structs/XmlSchemaType.h>
#include <Modloader/app/structs/XmlTypeCode__Enum.h>

namespace app::classes::System::Xml::Schema::XmlBaseConverter {
    IL2CPP_REGISTER_METHOD(0x0223D4D0, void, ctor_1, app::XmlBaseConverter* this_ptr, app::XmlSchemaType* schema_type)
    IL2CPP_REGISTER_METHOD(0x0223D620, void, ctor_2, app::XmlBaseConverter* this_ptr, app::XmlTypeCode__Enum type_code)
    IL2CPP_REGISTER_METHOD(0x0223D780, void, ctor_3, app::XmlBaseConverter* this_ptr, app::XmlBaseConverter* converter_atomic)
    IL2CPP_REGISTER_METHOD(0x0223D7E0, void, ctor_4, app::XmlBaseConverter* this_ptr, app::XmlBaseConverter* converter_atomic, app::Type* clr_type_default)
    IL2CPP_REGISTER_METHOD(0x0223D810, bool, ToBoolean_1, app::XmlBaseConverter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x0223D930, bool, ToBoolean_2, app::XmlBaseConverter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x0223DA60, bool, ToBoolean_3, app::XmlBaseConverter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0223DB80, bool, ToBoolean_4, app::XmlBaseConverter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0223DCA0, bool, ToBoolean_5, app::XmlBaseConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0223DDB0, bool, ToBoolean_6, app::XmlBaseConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0223DEC0, app::DateTime, ToDateTime_1, app::XmlBaseConverter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0223DFE0, app::DateTime, ToDateTime_2, app::XmlBaseConverter* this_ptr, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x0223E100, app::DateTime, ToDateTime_3, app::XmlBaseConverter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x0223E230, app::DateTime, ToDateTime_4, app::XmlBaseConverter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0223E350, app::DateTime, ToDateTime_5, app::XmlBaseConverter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0223E470, app::DateTime, ToDateTime_6, app::XmlBaseConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0223E580, app::DateTime, ToDateTime_7, app::XmlBaseConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0223E690, app::DateTimeOffset, ToDateTimeOffset_1, app::XmlBaseConverter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x0223E7C0, app::DateTimeOffset, ToDateTimeOffset_2, app::XmlBaseConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0223E8E0, app::DateTimeOffset, ToDateTimeOffset_3, app::XmlBaseConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0223EA00, app::Decimal, ToDecimal_1, app::XmlBaseConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0223EB10, app::Decimal, ToDecimal_2, app::XmlBaseConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0223EC20, double, ToDouble_1, app::XmlBaseConverter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0223ED40, double, ToDouble_2, app::XmlBaseConverter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x0223EE60, double, ToDouble_3, app::XmlBaseConverter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0223EF80, double, ToDouble_4, app::XmlBaseConverter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0223F0A0, double, ToDouble_5, app::XmlBaseConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0223F1B0, double, ToDouble_6, app::XmlBaseConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0223F2C0, int32_t, ToInt32_1, app::XmlBaseConverter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0223F3E0, int32_t, ToInt32_2, app::XmlBaseConverter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x0223F500, int32_t, ToInt32_3, app::XmlBaseConverter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x0223F620, int32_t, ToInt32_4, app::XmlBaseConverter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x0223F740, int32_t, ToInt32_5, app::XmlBaseConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0223F840, int32_t, ToInt32_6, app::XmlBaseConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0223F940, int64_t, ToInt64_1, app::XmlBaseConverter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0223FA60, int64_t, ToInt64_2, app::XmlBaseConverter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x0223FB80, int64_t, ToInt64_3, app::XmlBaseConverter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x0223FCA0, int64_t, ToInt64_4, app::XmlBaseConverter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0223FDC0, int64_t, ToInt64_5, app::XmlBaseConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x0223FEC0, int64_t, ToInt64_6, app::XmlBaseConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0223FFC0, float, ToSingle_1, app::XmlBaseConverter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x022400F0, float, ToSingle_2, app::XmlBaseConverter* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02240200, float, ToSingle_3, app::XmlBaseConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02240310, app::String*, ToString_1, app::XmlBaseConverter* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x02240420, app::String*, ToString_2, app::XmlBaseConverter* this_ptr, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x02240530, app::String*, ToString_3, app::XmlBaseConverter* this_ptr, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x02240650, app::String*, ToString_4, app::XmlBaseConverter* this_ptr, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x02240770, app::String*, ToString_5, app::XmlBaseConverter* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x02240890, app::String*, ToString_6, app::XmlBaseConverter* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x022409A0, app::String*, ToString_7, app::XmlBaseConverter* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02240AB0, app::String*, ToString_8, app::XmlBaseConverter* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x02240BD0, app::String*, ToString_9, app::XmlBaseConverter* this_ptr, app::Object* value, app::IXmlNamespaceResolver* ns_resolver)
    IL2CPP_REGISTER_METHOD(0x02240CE0, app::String*, ToString_10, app::XmlBaseConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02240D00, app::Object*, ChangeType_1, app::XmlBaseConverter* this_ptr, bool value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x02240DC0, app::Object*, ChangeType_2, app::XmlBaseConverter* this_ptr, app::DateTime value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x02240E80, app::Object*, ChangeType_3, app::XmlBaseConverter* this_ptr, app::Decimal value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x02240F50, app::Object*, ChangeType_4, app::XmlBaseConverter* this_ptr, double value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x02241020, app::Object*, ChangeType_5, app::XmlBaseConverter* this_ptr, int32_t value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x022410E0, app::Object*, ChangeType_6, app::XmlBaseConverter* this_ptr, int64_t value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(
        0x022411A0,
        app::Object*,
        ChangeType_7,
        app::XmlBaseConverter* this_ptr,
        app::String* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(0x022411C0, app::Object*, ChangeType_8, app::XmlBaseConverter* this_ptr, app::Object* value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlSchemaType*, get_SchemaType, app::XmlBaseConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::XmlTypeCode__Enum, get_TypeCode, app::XmlBaseConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022411F0, app::String*, get_XmlTypeName, app::XmlBaseConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type*, get_DefaultClrType, app::XmlBaseConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02241540, bool, IsDerivedFrom, app::Type* derived_type, app::Type* base_type)
    IL2CPP_REGISTER_METHOD(
        0x02241640,
        app::Exception*,
        CreateInvalidClrMappingException,
        app::XmlBaseConverter* this_ptr,
        app::Type* source_type,
        app::Type* destination_type
    )
    IL2CPP_REGISTER_METHOD(0x02241A90, app::String*, QNameToString_1, app::XmlQualifiedName* name)
    IL2CPP_REGISTER_METHOD(
        0x02241C00,
        app::Object*,
        ChangeListType,
        app::XmlBaseConverter* this_ptr,
        app::Object* value,
        app::Type* destination_type,
        app::IXmlNamespaceResolver* ns_resolver
    )
    IL2CPP_REGISTER_METHOD(0x02241C70, app::Byte__Array*, StringToBase64Binary, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02241D40, app::DateTime, StringToDate, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02241E10, app::DateTime, StringToDateTime, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02241EE0, app::TimeSpan, StringToDayTimeDuration, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02241F40, app::TimeSpan, StringToDuration, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02241FA0, app::DateTime, StringToGDay, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242070, app::DateTime, StringToGMonth, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242140, app::DateTime, StringToGMonthDay, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242210, app::DateTime, StringToGYear, app::String* value)
    IL2CPP_REGISTER_METHOD(0x022422E0, app::DateTime, StringToGYearMonth, app::String* value)
    IL2CPP_REGISTER_METHOD(0x022423B0, app::DateTimeOffset, StringToDateOffset, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242490, app::DateTimeOffset, StringToDateTimeOffset, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242570, app::DateTimeOffset, StringToGDayOffset, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242650, app::DateTimeOffset, StringToGMonthOffset, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242740, app::DateTimeOffset, StringToGMonthDayOffset, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242820, app::DateTimeOffset, StringToGYearOffset, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242900, app::DateTimeOffset, StringToGYearMonthOffset, app::String* value)
    IL2CPP_REGISTER_METHOD(0x022429E0, app::Byte__Array*, StringToHexBinary, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242AF0, app::XmlQualifiedName*, StringToQName, app::String* value, app::IXmlNamespaceResolver* ns_resolver)
    IL2CPP_REGISTER_METHOD(0x02242E60, app::DateTime, StringToTime, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02242F30, app::DateTimeOffset, StringToTimeOffset, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02243010, app::TimeSpan, StringToYearMonthDuration, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02243070, app::String*, AnyUriToString, app::Uri* value)
    IL2CPP_REGISTER_METHOD(0x022430E0, app::String*, Base64BinaryToString, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x02243180, app::String*, DateToString, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x022431C0, app::String*, DateTimeToString, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x02243200, app::String*, DayTimeDurationToString, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x01963C60, app::String*, DurationToString, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x02243260, app::String*, GDayToString, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x022432A0, app::String*, GMonthToString, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x022432E0, app::String*, GMonthDayToString, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x02243320, app::String*, GYearToString, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x02243360, app::String*, GYearMonthToString, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x022433A0, app::String*, DateOffsetToString, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x022433F0, app::String*, DateTimeOffsetToString, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x02243440, app::String*, GDayOffsetToString, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x02243490, app::String*, GMonthOffsetToString, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x022434E0, app::String*, GMonthDayOffsetToString, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x02243530, app::String*, GYearOffsetToString, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x02243580, app::String*, GYearMonthOffsetToString, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x022435D0, app::String*, QNameToString_2, app::XmlQualifiedName* qname, app::IXmlNamespaceResolver* ns_resolver)
    IL2CPP_REGISTER_METHOD(0x022437C0, app::String*, TimeToString, app::DateTime value)
    IL2CPP_REGISTER_METHOD(0x02243800, app::String*, TimeOffsetToString, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x02243850, app::String*, YearMonthDurationToString, app::TimeSpan value)
    IL2CPP_REGISTER_METHOD(0x022438B0, app::DateTime, DateTimeOffsetToDateTime, app::DateTimeOffset value)
    IL2CPP_REGISTER_METHOD(0x022438D0, int32_t, DecimalToInt32, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x02243B80, int64_t, DecimalToInt64, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x02243DC0, uint64_t, DecimalToUInt64, app::Decimal value)
    IL2CPP_REGISTER_METHOD(0x02244000, uint8_t, Int32ToByte, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02244150, int16_t, Int32ToInt16, int32_t value)
    IL2CPP_REGISTER_METHOD(0x022442B0, int8_t, Int32ToSByte, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02244410, uint16_t, Int32ToUInt16, int32_t value)
    IL2CPP_REGISTER_METHOD(0x02244560, int32_t, Int64ToInt32, int64_t value)
    IL2CPP_REGISTER_METHOD(0x022446C0, uint32_t, Int64ToUInt32, int64_t value)
    IL2CPP_REGISTER_METHOD(0x02244820, app::DateTime, UntypedAtomicToDateTime, app::String* value)
    IL2CPP_REGISTER_METHOD(0x022448F0, app::DateTimeOffset, UntypedAtomicToDateTimeOffset, app::String* value)
    IL2CPP_REGISTER_METHOD(0x022449E0, void, cctor, )
} // namespace app::classes::System::Xml::Schema::XmlBaseConverter
