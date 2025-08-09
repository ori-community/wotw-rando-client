#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/SmtpDeliveryFormat__Enum.h>
#include <Modloader/app/structs/SmtpDeliveryMethod__Enum.h>
#include <Modloader/app/structs/SmtpNetworkElement.h>
#include <Modloader/app/structs/SmtpSection.h>
#include <Modloader/app/structs/SmtpSpecifiedPickupDirectoryElement.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Configuration::SmtpSection {
    IL2CPP_REGISTER_METHOD(0x01E99080, void, ctor, app::SmtpSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E990B0, app::SmtpDeliveryFormat__Enum, get_DeliveryFormat, app::SmtpSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E990E0, void, set_DeliveryFormat, app::SmtpSection* this_ptr, app::SmtpDeliveryFormat__Enum value)
    IL2CPP_REGISTER_METHOD(0x01E99110, app::SmtpDeliveryMethod__Enum, get_DeliveryMethod, app::SmtpSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99140, void, set_DeliveryMethod, app::SmtpSection* this_ptr, app::SmtpDeliveryMethod__Enum value)
    IL2CPP_REGISTER_METHOD(0x01E99170, app::String*, get_From, app::SmtpSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E991A0, void, set_From, app::SmtpSection* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E991D0, app::SmtpNetworkElement*, get_Network, app::SmtpSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99200, app::ConfigurationPropertyCollection*, get_Properties, app::SmtpSection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99230, app::SmtpSpecifiedPickupDirectoryElement*, get_SpecifiedPickupDirectory, app::SmtpSection* this_ptr)
} // namespace app::classes::System::Net::Configuration::SmtpSection
