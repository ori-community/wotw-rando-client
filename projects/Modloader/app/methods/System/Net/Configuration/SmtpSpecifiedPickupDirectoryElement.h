#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SmtpSpecifiedPickupDirectoryElement.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement {
    IL2CPP_REGISTER_METHOD(0x01E99260, void, ctor, (app::SmtpSpecifiedPickupDirectoryElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E99290, app::String*, get_PickupDirectoryLocation, (app::SmtpSpecifiedPickupDirectoryElement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E992C0, void, set_PickupDirectoryLocation, (app::SmtpSpecifiedPickupDirectoryElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01E992F0, app::ConfigurationPropertyCollection*, get_Properties, (app::SmtpSpecifiedPickupDirectoryElement * this_ptr))
} // namespace app::classes::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement
