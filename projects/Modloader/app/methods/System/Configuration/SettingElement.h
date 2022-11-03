#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Configuration::SettingElement {
    IL2CPP_REGISTER_METHOD(0x029623B0, void, ctor_1, (app::SettingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471BFB0, SettingElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029623E0, void, ctor_2, (app::SettingElement * this_ptr, app::String* name, app::SettingsSerializeAs__Enum serialize_as))
    IL2CPP_REGISTER_METHODINFO(0x04758A98, SettingElement__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962410, app::String*, get_Name, (app::SettingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778018, SettingElement_get_Name__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962440, void, set_Name, (app::SettingElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x047510A0, SettingElement_set_Name__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962470, app::ConfigurationPropertyCollection*, get_Properties, (app::SettingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04702F90, SettingElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029624A0, app::SettingsSerializeAs__Enum, get_SerializeAs, (app::SettingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472C238, SettingElement_get_SerializeAs__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029624D0, void, set_SerializeAs, (app::SettingElement * this_ptr, app::SettingsSerializeAs__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x04796540, SettingElement_set_SerializeAs__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962500, app::SettingValueElement*, get_Value, (app::SettingElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047138F0, SettingElement_get_Value__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962530, void, set_Value, (app::SettingElement * this_ptr, app::SettingValueElement* value))
    IL2CPP_REGISTER_METHODINFO(0x04756080, SettingElement_set_Value__MethodInfo)
} // namespace app::classes::System::Configuration::SettingElement
