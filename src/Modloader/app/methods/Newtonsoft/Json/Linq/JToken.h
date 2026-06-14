#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BigInteger_2.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/DynamicMetaObject.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Formatting__Enum_1.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/IEnumerator_1_Newtonsoft_Json_Linq_JToken_.h>
#include <Modloader/app/structs/IJsonLineInfo.h>
#include <Modloader/app/structs/JContainer.h>
#include <Modloader/app/structs/JEnumerable_1_JToken_.h>
#include <Modloader/app/structs/JToken.h>
#include <Modloader/app/structs/JTokenType__Enum__Array.h>
#include <Modloader/app/structs/JToken_LineInfoAnnotation.h>
#include <Modloader/app/structs/JValue.h>
#include <Modloader/app/structs/JsonConverter__Array.h>
#include <Modloader/app/structs/JsonLoadSettings.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_Byte_.h>
#include <Modloader/app/structs/Nullable_1_Char_.h>
#include <Modloader/app/structs/Nullable_1_DateTimeOffset_.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_Decimal_.h>
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_Guid_.h>
#include <Modloader/app/structs/Nullable_1_Int16_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Nullable_1_Int64_.h>
#include <Modloader/app/structs/Nullable_1_SByte_.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#include <Modloader/app/structs/Nullable_1_System_Numerics_BigInteger_.h>
#include <Modloader/app/structs/Nullable_1_TimeSpan_.h>
#include <Modloader/app/structs/Nullable_1_UInt16_.h>
#include <Modloader/app/structs/Nullable_1_UInt32_.h>
#include <Modloader/app/structs/Nullable_1_UInt64_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Uri.h>

namespace app::classes::Newtonsoft::Json::Linq::JToken {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::JContainer*, get_Parent, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Parent, app::JToken* this_ptr, app::JContainer* value)
    IL2CPP_REGISTER_METHOD(0x01F0FEB0, app::JToken*, get_Root, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::JToken*, get_Next, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_Next, app::JToken* this_ptr, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::JToken*, get_Previous, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_Previous, app::JToken* this_ptr, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F0FEE0, app::String*, get_Path, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F103C0, app::JToken*, get_First, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F104B0, app::JToken*, get_Last, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F105A0, app::JEnumerable_1_JToken_, Children, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F10640, void, Remove, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F10700, void, Replace, app::JToken* this_ptr, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F107D0, app::String*, ToString_1, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F10860,
        app::String*,
        ToString_2,
        app::JToken* this_ptr,
        app::Formatting__Enum_1 formatting,
        app::JsonConverter__Array* converters
    )
    IL2CPP_REGISTER_METHOD(0x01F10BB0, app::JValue*, EnsureValue, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F10D00, app::String*, GetType, app::JToken* token)
    IL2CPP_REGISTER_METHOD(0x01F10E40, bool, ValidateToken, app::JToken* o, app::JTokenType__Enum__Array* valid_types, bool nullable)
    IL2CPP_REGISTER_METHOD(0x01F10F60, bool, op_Explicit_1, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F111E0, app::DateTimeOffset, op_Explicit_2, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F114C0, app::Nullable_1_Boolean_, op_Explicit_3, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F11780, int64_t, op_Explicit_4, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F119E0, app::Nullable_1_DateTime_, op_Explicit_5, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F11C70, app::Nullable_1_DateTimeOffset_, op_Explicit_6, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F11FB0, app::Nullable_1_Decimal_, op_Explicit_7, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F12270, app::Nullable_1_Double_, op_Explicit_8, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F12540, app::Nullable_1_Char_, op_Explicit_9, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F127E0, int32_t, op_Explicit_10, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F12A40, int16_t, op_Explicit_11, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F12CA0, uint16_t, op_Explicit_12, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F12F00, char16_t, op_Explicit_13, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F13160, uint8_t, op_Explicit_14, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F133C0, int8_t, op_Explicit_15, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F13620, app::Nullable_1_Int32_, op_Explicit_16, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F138C0, app::Nullable_1_Int16_, op_Explicit_17, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F13B60, app::Nullable_1_UInt16_, op_Explicit_18, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F13E00, app::Nullable_1_Byte_, op_Explicit_19, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F14090, app::Nullable_1_SByte_, op_Explicit_20, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F14320, app::DateTime, op_Explicit_21, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F14560, app::Nullable_1_Int64_, op_Explicit_22, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F14810, app::Nullable_1_Single_, op_Explicit_23, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F14AB0, app::Decimal, op_Explicit_24, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F14D30, app::Nullable_1_UInt32_, op_Explicit_25, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F14FD0, app::Nullable_1_UInt64_, op_Explicit_26, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F15280, double, op_Explicit_27, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F154E0, float, op_Explicit_28, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F15740, app::String*, op_Explicit_29, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F15A10, uint32_t, op_Explicit_30, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F15C70, uint64_t, op_Explicit_31, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F15ED0, app::Guid, op_Explicit_32, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F16160, app::Nullable_1_Guid_, op_Explicit_33, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F16440, app::TimeSpan, op_Explicit_34, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F166A0, app::Nullable_1_TimeSpan_, op_Explicit_35, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F16940, app::Uri*, op_Explicit_36, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F16C40, app::BigInteger_2, ToBigInteger, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F16E10, app::Nullable_1_System_Numerics_BigInteger_, ToBigIntegerNullable, app::JToken* value)
    IL2CPP_REGISTER_METHOD(0x01F17040, app::JToken*, op_Implicit_1, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01F17190, app::JToken*, op_Implicit_2, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01F172E0, app::JToken*, op_Implicit_3, uint32_t value)
    IL2CPP_REGISTER_METHOD(0x01F17430, app::IEnumerator*, IEnumerable_GetEnumerator, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F174C0, app::IEnumerator_1_Newtonsoft_Json_Linq_JToken_*, IEnumerable_JToken__GetEnumerator, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F17560, app::JsonReader*, CreateReader, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F176B0, app::Object*, ToObject_1, app::JToken* this_ptr, app::Type* object_type)
    IL2CPP_REGISTER_METHOD(0x01F18690, app::Object*, ToObject_2, app::JToken* this_ptr, app::Type* object_type, app::JsonSerializer* json_serializer)
    IL2CPP_REGISTER_METHOD(0x01F188C0, app::JToken*, ReadFrom_1, app::JsonReader* reader)
    IL2CPP_REGISTER_METHOD(0x01F18960, app::JToken*, ReadFrom_2, app::JsonReader* reader, app::JsonLoadSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01F18DB0, void, SetLineInfo_1, app::JToken* this_ptr, app::IJsonLineInfo* line_info, app::JsonLoadSettings* settings)
    IL2CPP_REGISTER_METHOD(0x01F18FD0, void, SetLineInfo_2, app::JToken* this_ptr, int32_t line_number, int32_t line_position)
    IL2CPP_REGISTER_METHOD(0x01F19140, bool, IJsonLineInfo_HasLineInfo, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F191D0, int32_t, IJsonLineInfo_get_LineNumber, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F19260, int32_t, IJsonLineInfo_get_LinePosition, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F192F0, app::DynamicMetaObject*, GetMetaObject, app::JToken* this_ptr, app::Expression* parameter)
    IL2CPP_REGISTER_METHOD(0x01F19530, app::DynamicMetaObject*, IDynamicMetaObjectProvider_GetMetaObject, app::JToken* this_ptr, app::Expression* parameter)
    IL2CPP_REGISTER_METHOD(0x008009A0, app::Object*, ICloneable_Clone, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008009A0, app::JToken*, DeepClone, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F19550, void, AddAnnotation, app::JToken* this_ptr, app::Object* annotation)
    IL2CPP_REGISTER_METHOD(0x01F19830, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x015F3960, app::Object*, Annotation_1, app::JToken* this_ptr)
    IL2CPP_REGISTER_METHOD(0x015F3960, app::JToken_LineInfoAnnotation*, Annotation_2, app::JToken* this_ptr)
} // namespace app::classes::Newtonsoft::Json::Linq::JToken
