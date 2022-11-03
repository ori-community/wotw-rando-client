#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::TypeListConverter {
    IL2CPP_REGISTER_METHOD(0x0295C510, void, ctor, (app::TypeListConverter * this_ptr, app::Type__Array* types))
    IL2CPP_REGISTER_METHOD(0x0295C5C0, bool, CanConvertFrom, (app::TypeListConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHOD(0x0295C6A0, bool, CanConvertTo, (app::TypeListConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x0295C780, app::Object*, ConvertFrom, (app::TypeListConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0295C8E0, app::Object*, ConvertTo, (app::TypeListConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x0476F588, TypeListConverter_ConvertTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0295CD10, app::TypeConverter_StandardValuesCollection*, GetStandardValues, (app::TypeListConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesExclusive, (app::TypeListConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (app::TypeListConverter * this_ptr, app::ITypeDescriptorContext* context))
} // namespace app::classes::System::ComponentModel::TypeListConverter
