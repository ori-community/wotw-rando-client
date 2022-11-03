#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Data::ColumnTypeConverter {
    IL2CPP_REGISTER_METHOD(0x02151820, bool, CanConvertTo, (app::ColumnTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x02151900, app::Object*, ConvertTo, (app::ColumnTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x04794E08, ColumnTypeConverter_ConvertTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02151EB0, bool, CanConvertFrom, (app::ColumnTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHOD(0x02151F90, app::Object*, ConvertFrom, (app::ColumnTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02152230, app::TypeConverter_StandardValuesCollection*, GetStandardValues, (app::ColumnTypeConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesExclusive, (app::ColumnTypeConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (app::ColumnTypeConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x02152450, void, cctor, ())
} // namespace app::classes::System::Data::ColumnTypeConverter
