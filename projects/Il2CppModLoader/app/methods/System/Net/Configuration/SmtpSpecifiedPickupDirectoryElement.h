#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement {
    IL2CPP_REGISTER_METHOD(0x01E99260, void, ctor, (app::SmtpSpecifiedPickupDirectoryElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04718AB8, SmtpSpecifiedPickupDirectoryElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99290, app::String*, get_PickupDirectoryLocation, (app::SmtpSpecifiedPickupDirectoryElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762D48, SmtpSpecifiedPickupDirectoryElement_get_PickupDirectoryLocation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E992C0, void, set_PickupDirectoryLocation, (app::SmtpSpecifiedPickupDirectoryElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04739E28, SmtpSpecifiedPickupDirectoryElement_set_PickupDirectoryLocation__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E992F0, app::ConfigurationPropertyCollection*, get_Properties, (app::SmtpSpecifiedPickupDirectoryElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04705538, SmtpSpecifiedPickupDirectoryElement_get_Properties__MethodInfo)
} // namespace app::classes::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement
