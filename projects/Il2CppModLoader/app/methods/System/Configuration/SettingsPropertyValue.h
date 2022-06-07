#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::SettingsPropertyValue {
    IL2CPP_REGISTER_METHOD(0x01FFDB70, void, ctor, (app::SettingsPropertyValue * this_ptr, app::SettingsProperty * property))
    IL2CPP_REGISTER_METHODINFO(0x0474B6E8, SettingsPropertyValue__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDBA0, bool, get_Deserialized, (app::SettingsPropertyValue * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047793E8, SettingsPropertyValue_get_Deserialized__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDBD0, void, set_Deserialized, (app::SettingsPropertyValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0476D2D0, SettingsPropertyValue_set_Deserialized__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDC00, bool, get_IsDirty, (app::SettingsPropertyValue * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04750800, SettingsPropertyValue_get_IsDirty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDC30, void, set_IsDirty, (app::SettingsPropertyValue * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x047724A8, SettingsPropertyValue_set_IsDirty__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDC60, app::String *, get_Name, (app::SettingsPropertyValue * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047533D0, SettingsPropertyValue_get_Name__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDC90, app::SettingsProperty *, get_Property, (app::SettingsPropertyValue * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740738, SettingsPropertyValue_get_Property__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDCC0, app::Object *, get_PropertyValue, (app::SettingsPropertyValue * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047093E0, SettingsPropertyValue_get_PropertyValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDCF0, void, set_PropertyValue, (app::SettingsPropertyValue * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x04746528, SettingsPropertyValue_set_PropertyValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDD20, app::Object *, get_SerializedValue, (app::SettingsPropertyValue * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722258, SettingsPropertyValue_get_SerializedValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDD50, void, set_SerializedValue, (app::SettingsPropertyValue * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHODINFO(0x0473F2B8, SettingsPropertyValue_set_SerializedValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01FFDD80, bool, get_UsingDefaultValue, (app::SettingsPropertyValue * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791540, SettingsPropertyValue_get_UsingDefaultValue__MethodInfo)
}
