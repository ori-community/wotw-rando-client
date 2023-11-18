#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NullableConverter.h>
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/CultureInfo.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyDescriptorCollection.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeConverter.h>
#include <Modloader/app/structs/TypeConverter_StandardValuesCollection.h>

namespace app::classes::System::ComponentModel::NullableConverter {
    IL2CPP_REGISTER_METHOD(0x02991010, void, ctor, (app::NullableConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x02991160, bool, CanConvertFrom, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHOD(0x02991250, app::Object*, ConvertFrom, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x029913A0, bool, CanConvertTo, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x029914C0, app::Object*, ConvertTo, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x029918E0, app::Object*, CreateInstance, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context, app::IDictionary* property_values))
    IL2CPP_REGISTER_METHOD(0x02991900, bool, GetCreateInstanceSupported, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x02991920, app::PropertyDescriptorCollection*, GetProperties, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context, app::Object* value, app::Attribute__Array* attributes))
    IL2CPP_REGISTER_METHOD(0x02991950, bool, GetPropertiesSupported, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x02991970, app::TypeConverter_StandardValuesCollection*, GetStandardValues, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x02991CC0, bool, GetStandardValuesExclusive, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x023A0050, bool, GetStandardValuesSupported, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x02991CE0, bool, IsValid, (app::NullableConverter * this_ptr, app::ITypeDescriptorContext* context, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_NullableType, (app::NullableConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type*, get_UnderlyingType, (app::NullableConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::TypeConverter*, get_UnderlyingTypeConverter, (app::NullableConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::NullableConverter
