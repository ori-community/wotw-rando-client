#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonReader_State__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/DateParseHandling__Enum.h>
#include <Modloader/app/structs/DateTimeZoneHandling__Enum.h>
#include <Modloader/app/structs/FloatParseHandling__Enum.h>
#include <Modloader/app/structs/JsonContainerType__Enum.h>
#include <Modloader/app/structs/JsonContract.h>
#include <Modloader/app/structs/JsonPosition.h>
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonReaderException.h>
#include <Modloader/app/structs/JsonToken__Enum_1.h>
#include <Modloader/app/structs/List_1_System_Byte_.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#include <Modloader/app/structs/Nullable_1_DateTimeOffset_.h>
#include <Modloader/app/structs/Nullable_1_DateTime_.h>
#include <Modloader/app/structs/Nullable_1_Decimal_.h>
#include <Modloader/app/structs/Nullable_1_Double_.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Newtonsoft::Json::JsonReader {
    IL2CPP_REGISTER_METHOD(0x00529E80, app::JsonReader_State__Enum, get_CurrentState, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_CloseInput, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724140, void, set_CloseInput, (app::JsonReader * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x015CCAD0, bool, get_SupportMultipleContent, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015CCAE0, void, set_SupportMultipleContent, (app::JsonReader * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006410F0, app::DateTimeZoneHandling__Enum, get_DateTimeZoneHandling, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66750, void, set_DateTimeZoneHandling, (app::JsonReader * this_ptr, app::DateTimeZoneHandling__Enum value))
    IL2CPP_REGISTER_METHOD(0x004C6660, app::DateParseHandling__Enum, get_DateParseHandling, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66810, void, set_DateParseHandling, (app::JsonReader * this_ptr, app::DateParseHandling__Enum value))
    IL2CPP_REGISTER_METHOD(0x003FF2B0, app::FloatParseHandling__Enum, get_FloatParseHandling, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A668D0, void, set_FloatParseHandling, (app::JsonReader * this_ptr, app::FloatParseHandling__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::String*, get_DateFormatString, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_DateFormatString, (app::JsonReader * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01A66990, app::Nullable_1_Int32_, get_MaxDepth, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A669A0, void, set_MaxDepth, (app::JsonReader * this_ptr, app::Nullable_1_Int32_ value))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::JsonToken__Enum_1, get_TokenType, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_Value, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66A70, app::Type*, get_ValueType, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66A90, int32_t, get_Depth, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66B40, app::String*, get_Path, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66CA0, app::CultureInfo*, get_Culture, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, set_Culture, (app::JsonReader * this_ptr, app::CultureInfo* value))
    IL2CPP_REGISTER_METHOD(0x01A66D50, app::JsonPosition, GetPosition, (app::JsonReader * this_ptr, int32_t depth))
    IL2CPP_REGISTER_METHOD(0x01A66E20, void, ctor, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A66E40, void, Push, (app::JsonReader * this_ptr, app::JsonContainerType__Enum value))
    IL2CPP_REGISTER_METHOD(0x01A671B0, app::JsonContainerType__Enum, Pop, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB970, app::JsonContainerType__Enum, Peek, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A67350, app::Nullable_1_Int32_, ReadAsInt32, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A67790, app::Nullable_1_Int32_, ReadInt32String, (app::JsonReader * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01A67A80, app::String*, ReadAsString, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A67D10, app::Byte__Array*, ReadAsBytes, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A68230, app::Byte__Array*, ReadArrayIntoByteArray, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A68550, bool, ReadArrayElementIntoByteArrayReportDone, (app::JsonReader * this_ptr, app::List_1_System_Byte_* buffer))
    IL2CPP_REGISTER_METHOD(0x01A687C0, app::Nullable_1_Double_, ReadAsDouble, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A68B60, app::Nullable_1_Double_, ReadDoubleString, (app::JsonReader * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01A68E80, app::Nullable_1_Boolean_, ReadAsBoolean, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A69260, app::Nullable_1_Boolean_, ReadBooleanString, (app::JsonReader * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01A69560, app::Nullable_1_Decimal_, ReadAsDecimal, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A69980, app::Nullable_1_Decimal_, ReadDecimalString, (app::JsonReader * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01A69D80, app::Nullable_1_DateTime_, ReadAsDateTime, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6A090, app::Nullable_1_DateTime_, ReadDateTimeString, (app::JsonReader * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01A6A470, app::Nullable_1_DateTimeOffset_, ReadAsDateTimeOffset, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6A790, app::Nullable_1_DateTimeOffset_, ReadDateTimeOffsetString, (app::JsonReader * this_ptr, app::String* s))
    IL2CPP_REGISTER_METHOD(0x01A6AB90, void, ReaderReadAndAssert, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6AC40, app::JsonReaderException*, CreateUnexpectedEndException, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6ACD0, void, ReadIntoWrappedTypeObject, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B020, void, Skip, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B0D0, void, SetToken_1, (app::JsonReader * this_ptr, app::JsonToken__Enum_1 new_token))
    IL2CPP_REGISTER_METHOD(0x01A6B0F0, void, SetToken_2, (app::JsonReader * this_ptr, app::JsonToken__Enum_1 new_token, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01A6B110, void, SetToken_3, (app::JsonReader * this_ptr, app::JsonToken__Enum_1 new_token, app::Object* value, bool update_index))
    IL2CPP_REGISTER_METHOD(0x01A6B300, void, SetPostValueState, (app::JsonReader * this_ptr, bool update_index))
    IL2CPP_REGISTER_METHOD(0x01A6B330, void, UpdateScopeWithFinishedValue, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B340, void, ValidateEnd, (app::JsonReader * this_ptr, app::JsonToken__Enum_1 end_token))
    IL2CPP_REGISTER_METHOD(0x01A6B590, void, SetStateBasedOnCurrent, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B6F0, void, SetFinished, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B710, app::JsonContainerType__Enum, GetTypeForCloseToken, (app::JsonReader * this_ptr, app::JsonToken__Enum_1 token))
    IL2CPP_REGISTER_METHOD(0x01A6B850, void, IDisposable_Dispose, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B900, void, Dispose, (app::JsonReader * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01A6B930, void, Close, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6B950, void, ReadAndAssert, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6BA00, void, ReadForTypeAndAssert, (app::JsonReader * this_ptr, app::JsonContract* contract, bool has_converter))
    IL2CPP_REGISTER_METHOD(0x01A6BAC0, bool, ReadForType, (app::JsonReader * this_ptr, app::JsonContract* contract, bool has_converter))
    IL2CPP_REGISTER_METHOD(0x01A6BDB0, bool, ReadAndMoveToContent, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6BE10, bool, MoveToContent, (app::JsonReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A6BE70, app::JsonToken__Enum_1, GetContentToken, (app::JsonReader * this_ptr))
} // namespace app::classes::Newtonsoft::Json::JsonReader
