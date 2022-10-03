#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::Configuration::SmtpSection {
    IL2CPP_REGISTER_METHOD(0x01E99080, void, ctor, (app::SmtpSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04780160, SmtpSection__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E990B0, app::SmtpDeliveryFormat__Enum, get_DeliveryFormat, (app::SmtpSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759158, SmtpSection_get_DeliveryFormat__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E990E0, void, set_DeliveryFormat, (app::SmtpSection * this_ptr, app::SmtpDeliveryFormat__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x047796B0, SmtpSection_set_DeliveryFormat__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99110, app::SmtpDeliveryMethod__Enum, get_DeliveryMethod, (app::SmtpSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766588, SmtpSection_get_DeliveryMethod__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99140, void, set_DeliveryMethod, (app::SmtpSection * this_ptr, app::SmtpDeliveryMethod__Enum value))
    IL2CPP_REGISTER_METHODINFO(0x04719B50, SmtpSection_set_DeliveryMethod__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99170, app::String*, get_From, (app::SmtpSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04726B68, SmtpSection_get_From__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E991A0, void, set_From, (app::SmtpSection * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04708428, SmtpSection_set_From__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E991D0, app::SmtpNetworkElement*, get_Network, (app::SmtpSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470AC60, SmtpSection_get_Network__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99200, app::ConfigurationPropertyCollection*, get_Properties, (app::SmtpSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047506C0, SmtpSection_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99230, app::SmtpSpecifiedPickupDirectoryElement*, get_SpecifiedPickupDirectory, (app::SmtpSection * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04720F28, SmtpSection_get_SpecifiedPickupDirectory__MethodInfo)
} // namespace app::classes::System::Net::Configuration::SmtpSection
