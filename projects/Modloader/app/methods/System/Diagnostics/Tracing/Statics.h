#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompilerGeneratedAttribute.h>
#include <Modloader/app/structs/Delegate.h>
#include <Modloader/app/structs/EventDataAttribute.h>
#include <Modloader/app/structs/EventFieldAttribute.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/IEnumerable_1_System_Reflection_PropertyInfo_.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/PropertyInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataType__Enum.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_EmptyStruct_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Boolean_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Byte_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Char_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_DateTimeOffset_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_DateTime_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Decimal_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Double_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Guid_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Int16_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Int32_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Int64_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_IntPtr_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Object__1.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_SByte_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_Single_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_TimeSpan_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_UInt16_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_UInt32_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_UInt64_.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_UIntPtr_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Type__Array.h>

namespace app::classes::System::Diagnostics::Tracing::Statics {
    IL2CPP_REGISTER_METHOD(
        0x01A07C40,
        app::Byte__Array*,
        MetadataForString,
        app::String* name,
        int32_t prefix_size,
        int32_t suffix_size,
        int32_t additional_size
    )
    IL2CPP_REGISTER_METHOD(0x01A07E50, void, EncodeTags, int32_t tags, int32_t* pos, app::Byte__Array* metadata)
    IL2CPP_REGISTER_METHOD(0x01A07EC0, uint8_t, Combine_1, int32_t setting_value, uint8_t default_value)
    IL2CPP_REGISTER_METHOD(0x01A07ED0, int32_t, Combine_2, int32_t setting_value1, int32_t setting_value2)
    IL2CPP_REGISTER_METHOD(0x01A07EE0, void, CheckName, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01A07FB0, bool, ShouldOverrideFieldName, app::String* field_name)
    IL2CPP_REGISTER_METHOD(
        0x01A07FF0,
        app::TraceLoggingDataType__Enum,
        MakeDataType,
        app::TraceLoggingDataType__Enum base_type,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(0x01A08000, app::TraceLoggingDataType__Enum, Format8, app::EventFieldFormat__Enum format, app::TraceLoggingDataType__Enum native)
    IL2CPP_REGISTER_METHOD(0x01A080F0, app::TraceLoggingDataType__Enum, Format16, app::EventFieldFormat__Enum format, app::TraceLoggingDataType__Enum native)
    IL2CPP_REGISTER_METHOD(0x01A081D0, app::TraceLoggingDataType__Enum, Format32, app::EventFieldFormat__Enum format, app::TraceLoggingDataType__Enum native)
    IL2CPP_REGISTER_METHOD(0x01A082D0, app::TraceLoggingDataType__Enum, Format64, app::EventFieldFormat__Enum format, app::TraceLoggingDataType__Enum native)
    IL2CPP_REGISTER_METHOD(0x01A08390, app::TraceLoggingDataType__Enum, FormatPtr, app::EventFieldFormat__Enum format, app::TraceLoggingDataType__Enum native)
    IL2CPP_REGISTER_METHOD(0x01A08480, app::Object*, CreateInstance, app::Type* type, app::Object__Array* parameters)
    IL2CPP_REGISTER_METHOD(0x013DD740, bool, IsValueType, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01A084B0, bool, IsEnum, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x013DD610, app::IEnumerable_1_System_Reflection_PropertyInfo_*, GetProperties, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01A084E0, app::MethodInfo_1*, GetGetMethod, app::PropertyInfo_1* prop_info)
    IL2CPP_REGISTER_METHOD(0x01A08510, app::MethodInfo_1*, GetDeclaredStaticMethod, app::Type* declaring_type, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01A08530, bool, HasCustomAttribute, app::PropertyInfo_1* prop_info, app::Type* attribute_type)
    IL2CPP_REGISTER_METHOD(0x018507D0, app::Type__Array*, GetGenericArguments, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01A08570, app::Type*, FindEnumerableElementType, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01A088D0, bool, IsGenericMatch, app::Type* type, app::Object* open_type)
    IL2CPP_REGISTER_METHOD(0x013DCFD0, app::Delegate*, CreateDelegate, app::Type* delegate_type, app::MethodInfo_1* method_info)
    IL2CPP_REGISTER_METHOD(0x01A08A10, app::TraceLoggingTypeInfo*, GetTypeInfoInstance, app::Type* data_type, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x01A08DC0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x018E83E0, app::Object*, GetCustomAttribute_1, app::PropertyInfo_1* prop_info)
    IL2CPP_REGISTER_METHOD(0x018E8530, app::Object*, GetCustomAttribute_2, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x02644220, app::TraceLoggingTypeInfo_1_System_Object__1*, CreateDefaultTypeInfo_1, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x018E83E0, app::EventFieldAttribute*, GetCustomAttribute_3, app::PropertyInfo_1* prop_info)
    IL2CPP_REGISTER_METHOD(0x01EBC1C0, app::TraceLoggingTypeInfo_1_System_Boolean_*, CreateDefaultTypeInfo_2, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x018E8530, app::EventDataAttribute*, GetCustomAttribute_4, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x018E8530, app::CompilerGeneratedAttribute*, GetCustomAttribute_5, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x01EBDE50, app::TraceLoggingTypeInfo_1_System_Byte_*, CreateDefaultTypeInfo_3, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x01EBFAE0, app::TraceLoggingTypeInfo_1_System_Char_*, CreateDefaultTypeInfo_4, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(
        0x01EC1770,
        app::TraceLoggingTypeInfo_1_System_Collections_Generic_KeyValuePair_2_*,
        CreateDefaultTypeInfo_5,
        app::List_1_System_Type_* recursion_check
    )
    IL2CPP_REGISTER_METHOD(0x01EC3400, app::TraceLoggingTypeInfo_1_System_DateTime_*, CreateDefaultTypeInfo_6, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x01EC5090, app::TraceLoggingTypeInfo_1_System_DateTimeOffset_*, CreateDefaultTypeInfo_7, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x01EC6D20, app::TraceLoggingTypeInfo_1_System_Decimal_*, CreateDefaultTypeInfo_8, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x01EC89B0, app::TraceLoggingTypeInfo_1_EmptyStruct_*, CreateDefaultTypeInfo_9, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x01ECA640, app::TraceLoggingTypeInfo_1_System_Double_*, CreateDefaultTypeInfo_10, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x01ECC2D0, app::TraceLoggingTypeInfo_1_System_Guid_*, CreateDefaultTypeInfo_11, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x01ECDF60, app::TraceLoggingTypeInfo_1_System_Int16_*, CreateDefaultTypeInfo_12, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x01ECFBF0, app::TraceLoggingTypeInfo_1_System_Int32_*, CreateDefaultTypeInfo_13, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x02640900, app::TraceLoggingTypeInfo_1_System_Int64_*, CreateDefaultTypeInfo_14, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x02642590, app::TraceLoggingTypeInfo_1_System_IntPtr_*, CreateDefaultTypeInfo_15, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x02645EB0, app::TraceLoggingTypeInfo_1_System_SByte_*, CreateDefaultTypeInfo_16, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x02647B40, app::TraceLoggingTypeInfo_1_System_Single_*, CreateDefaultTypeInfo_17, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x026497D0, app::TraceLoggingTypeInfo_1_System_TimeSpan_*, CreateDefaultTypeInfo_18, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x0264B460, app::TraceLoggingTypeInfo_1_System_UInt16_*, CreateDefaultTypeInfo_19, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x0264D0F0, app::TraceLoggingTypeInfo_1_System_UInt32_*, CreateDefaultTypeInfo_20, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x0264ED80, app::TraceLoggingTypeInfo_1_System_UInt64_*, CreateDefaultTypeInfo_21, app::List_1_System_Type_* recursion_check)
    IL2CPP_REGISTER_METHOD(0x02650A10, app::TraceLoggingTypeInfo_1_System_UIntPtr_*, CreateDefaultTypeInfo_22, app::List_1_System_Type_* recursion_check)
} // namespace app::classes::System::Diagnostics::Tracing::Statics
