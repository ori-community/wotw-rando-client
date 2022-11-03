#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::BooleanConverter {
    IL2CPP_REGISTER_METHOD(0x024A5150, bool, CanConvertFrom, (app::BooleanConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHOD(0x024A5230, app::Object*, ConvertFrom, (app::BooleanConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04768060, BooleanConverter_ConvertFrom__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024A5440, app::TypeConverter_StandardValuesCollection*, GetStandardValues, (app::BooleanConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesExclusive, (app::BooleanConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (app::BooleanConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x024A56D0, void, ctor, (app::BooleanConverter * this_ptr))
} // namespace app::classes::System::ComponentModel::BooleanConverter
