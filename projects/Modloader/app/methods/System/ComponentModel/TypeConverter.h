#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection.h>

namespace app::classes::System::ComponentModel::TypeConverter {
    IL2CPP_REGISTER_METHOD(0x02944320, bool, get_UseCompatibleTypeConversion, )
    IL2CPP_REGISTER_METHOD(0x024A9E40, bool, CanConvertFrom_1, app::TypeConverter* this_ptr, app::Type* source_type)
    IL2CPP_REGISTER_METHOD(0x029443D0, bool, CanConvertFrom_2, app::TypeConverter* this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type)
    IL2CPP_REGISTER_METHOD(0x02944480, bool, CanConvertTo_1, app::TypeConverter* this_ptr, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x029444A0, bool, CanConvertTo_2, app::TypeConverter* this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x02944550, app::Object*, ConvertFrom_1, app::TypeConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02944630,
        app::Object*,
        ConvertFrom_2,
        app::TypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x029446F0, app::Object*, ConvertFromInvariantString_1, app::TypeConverter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(
        0x029447C0,
        app::Object*,
        ConvertFromInvariantString_2,
        app::TypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::String* text
    )
    IL2CPP_REGISTER_METHOD(0x02944890, app::Object*, ConvertFromString_1, app::TypeConverter* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(0x029448C0, app::Object*, ConvertFromString_2, app::TypeConverter* this_ptr, app::ITypeDescriptorContext* context, app::String* text)
    IL2CPP_REGISTER_METHOD(
        0x029449B0,
        app::Object*,
        ConvertFromString_3,
        app::TypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::String* text
    )
    IL2CPP_REGISTER_METHOD(0x029449D0, app::Object*, ConvertTo_1, app::TypeConverter* this_ptr, app::Object* value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(
        0x02944A00,
        app::Object*,
        ConvertTo_2,
        app::TypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value,
        app::Type* destination_type
    )
    IL2CPP_REGISTER_METHOD(0x02944BE0, app::String*, ConvertToInvariantString_1, app::TypeConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02944CA0,
        app::String*,
        ConvertToInvariantString_2,
        app::TypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02944D70, app::String*, ConvertToString_1, app::TypeConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02944ED0, app::String*, ConvertToString_2, app::TypeConverter* this_ptr, app::ITypeDescriptorContext* context, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02945030,
        app::String*,
        ConvertToString_3,
        app::TypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::CultureInfo* culture,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(0x02945150, app::Object*, CreateInstance_1, app::TypeConverter* this_ptr, app::IDictionary* property_values)
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::Object*,
        CreateInstance_2,
        app::TypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::IDictionary* property_values
    )
    IL2CPP_REGISTER_METHOD(0x02945170, app::Exception*, GetConvertFromException, app::TypeConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x029452F0, app::Exception*, GetConvertToException, app::TypeConverter* this_ptr, app::Object* value, app::Type* destination_type)
    IL2CPP_REGISTER_METHOD(0x004C5D30, bool, GetCreateInstanceSupported_1, app::TypeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetCreateInstanceSupported_2, app::TypeConverter* this_ptr, app::ITypeDescriptorContext* context)
    IL2CPP_REGISTER_METHOD(0x029454B0, app::PropertyDescriptorCollection*, GetProperties_1, app::TypeConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02945600,
        app::PropertyDescriptorCollection*,
        GetProperties_2,
        app::TypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::Object* value
    )
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::PropertyDescriptorCollection*,
        GetProperties_3,
        app::TypeConverter* this_ptr,
        app::ITypeDescriptorContext* context,
        app::Object* value,
        app::Attribute__Array* attributes
    )
    IL2CPP_REGISTER_METHOD(0x02945750, bool, GetPropertiesSupported_1, app::TypeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetPropertiesSupported_2, app::TypeConverter* this_ptr, app::ITypeDescriptorContext* context)
    IL2CPP_REGISTER_METHOD(0x012B3270, app::ICollection*, GetStandardValues_1, app::TypeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00420EE0,
        app::TypeConverter_StandardValuesCollection*,
        GetStandardValues_2,
        app::TypeConverter* this_ptr,
        app::ITypeDescriptorContext* context
    )
    IL2CPP_REGISTER_METHOD(0x02945770, bool, GetStandardValuesExclusive_1, app::TypeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetStandardValuesExclusive_2, app::TypeConverter* this_ptr, app::ITypeDescriptorContext* context)
    IL2CPP_REGISTER_METHOD(0x02945790, bool, GetStandardValuesSupported_1, app::TypeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetStandardValuesSupported_2, app::TypeConverter* this_ptr, app::ITypeDescriptorContext* context)
    IL2CPP_REGISTER_METHOD(0x029457B0, bool, IsValid_1, app::TypeConverter* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x029457D0, bool, IsValid_2, app::TypeConverter* this_ptr, app::ITypeDescriptorContext* context, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x029459C0,
        app::PropertyDescriptorCollection*,
        SortProperties,
        app::TypeConverter* this_ptr,
        app::PropertyDescriptorCollection* props,
        app::String__Array* names
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TypeConverter* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::System::ComponentModel::TypeConverter
