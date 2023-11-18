#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AuthenticationModuleElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Configuration::AuthenticationModuleElement {
    IL2CPP_REGISTER_METHOD(0x020180B0, void, ctor_1, (app::AuthenticationModuleElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020180E0, void, ctor_2, (app::AuthenticationModuleElement * this_ptr, app::String* type_name))
    IL2CPP_REGISTER_METHOD(0x02018110, app::ConfigurationPropertyCollection*, get_Properties, (app::AuthenticationModuleElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018140, app::String*, get_Type, (app::AuthenticationModuleElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02018170, void, set_Type, (app::AuthenticationModuleElement * this_ptr, app::String* value))
} // namespace app::classes::System::Net::Configuration::AuthenticationModuleElement
