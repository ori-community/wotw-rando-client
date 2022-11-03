#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::Configuration::AuthenticationModuleElement {
    IL2CPP_REGISTER_METHOD(0x020180B0, void, ctor_1, (app::AuthenticationModuleElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722058, AuthenticationModuleElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x020180E0, void, ctor_2, (app::AuthenticationModuleElement * this_ptr, app::String* type_name))
    IL2CPP_REGISTER_METHODINFO(0x04766848, AuthenticationModuleElement__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018110, app::ConfigurationPropertyCollection*, get_Properties, (app::AuthenticationModuleElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782AC0, AuthenticationModuleElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018140, app::String*, get_Type, (app::AuthenticationModuleElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753888, AuthenticationModuleElement_get_Type__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02018170, void, set_Type, (app::AuthenticationModuleElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04787EE0, AuthenticationModuleElement_set_Type__MethodInfo)
} // namespace app::classes::System::Net::Configuration::AuthenticationModuleElement
