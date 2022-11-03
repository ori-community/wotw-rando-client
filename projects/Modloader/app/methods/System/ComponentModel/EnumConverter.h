#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::ComponentModel::EnumConverter {
    IL2CPP_REGISTER_METHOD(0x01FE8140, void, ctor, (app::EnumConverter * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Type*, get_EnumType, (app::EnumConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::TypeConverter_StandardValuesCollection*, get_Values, (app::EnumConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Values, (app::EnumConverter * this_ptr, app::TypeConverter_StandardValuesCollection* value))
    IL2CPP_REGISTER_METHOD(0x01FE81F0, bool, CanConvertFrom, (app::EnumConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* source_type))
    IL2CPP_REGISTER_METHOD(0x01FE8300, bool, CanConvertTo, (app::EnumConverter * this_ptr, app::ITypeDescriptorContext* context, app::Type* destination_type))
    IL2CPP_REGISTER_METHOD(0x01FE8410, app::IComparer*, get_Comparer, (app::EnumConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FE84B0, app::Object*, ConvertFrom, (app::EnumConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04703288, EnumConverter_ConvertFrom__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FE8930, app::Object*, ConvertTo, (app::EnumConverter * this_ptr, app::ITypeDescriptorContext* context, app::CultureInfo* culture, app::Object* value, app::Type* destination_type))
    IL2CPP_REGISTER_METHODINFO(0x047159E0, EnumConverter_ConvertTo__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FE9730, app::TypeConverter_StandardValuesCollection*, GetStandardValues, (app::EnumConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x01FE9C60, bool, GetStandardValuesExclusive, (app::EnumConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GetStandardValuesSupported, (app::EnumConverter * this_ptr, app::ITypeDescriptorContext* context))
    IL2CPP_REGISTER_METHOD(0x01FE9D40, bool, IsValid, (app::EnumConverter * this_ptr, app::ITypeDescriptorContext* context, app::Object* value))
} // namespace app::classes::System::ComponentModel::EnumConverter
