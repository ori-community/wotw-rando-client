#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Configuration::SettingsBase {
    IL2CPP_REGISTER_METHOD(0x02962950, void, ctor, (app::SettingsBase * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477FE60, SettingsBase__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962980, app::SettingsContext*, get_Context, (app::SettingsBase * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047806F0, SettingsBase_get_Context__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029629B0, bool, get_IsSynchronized, (app::SettingsBase * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047773C0, SettingsBase_get_IsSynchronized__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029629E0, app::Object*, get_Item, (app::SettingsBase * this_ptr, app::String* property_name))
    IL2CPP_REGISTER_METHODINFO(0x04711A70, SettingsBase_get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962A10, void, set_Item, (app::SettingsBase * this_ptr, app::String* property_name, app::Object* value))
    IL2CPP_REGISTER_METHODINFO(0x04754318, SettingsBase_set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962A40, app::SettingsPropertyCollection*, get_Properties, (app::SettingsBase * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04771900, SettingsBase_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962A70, app::SettingsPropertyValueCollection*, get_PropertyValues, (app::SettingsBase * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04701848, SettingsBase_get_PropertyValues__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962AA0, app::SettingsProviderCollection*, get_Providers, (app::SettingsBase * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D7F0, SettingsBase_get_Providers__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962AD0, void, Initialize, (app::SettingsBase * this_ptr, app::SettingsContext* context, app::SettingsPropertyCollection* properties, app::SettingsProviderCollection* providers))
    IL2CPP_REGISTER_METHODINFO(0x04763630, SettingsBase_Initialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962B00, void, Save, (app::SettingsBase * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A078, SettingsBase_Save__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962B30, app::SettingsBase*, Synchronized, (app::SettingsBase * settings_base))
    IL2CPP_REGISTER_METHODINFO(0x0474EE20, SettingsBase_Synchronized__MethodInfo)
} // namespace app::classes::System::Configuration::SettingsBase
