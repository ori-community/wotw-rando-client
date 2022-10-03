#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Data::PrimaryKeyTypeConverter {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetPropertiesSupported, (app::PrimaryKeyTypeConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x01E49100, bool, CanConvertTo, (app::PrimaryKeyTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x01E491E0, app::Object*, ConvertTo, (app::PrimaryKeyTypeConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x047705D8, PrimaryKeyTypeConverter_ConvertTo__MethodInfo)
} // namespace app::classes::System::Data::PrimaryKeyTypeConverter
