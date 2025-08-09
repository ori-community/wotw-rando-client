#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/SmtpNetworkElement.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::Configuration::SmtpNetworkElement {
    IL2CPP_REGISTER_METHOD(0x01E98CF0, void, ctor, app::SmtpNetworkElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98D20, app::String*, get_ClientDomain, app::SmtpNetworkElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98D50, void, set_ClientDomain, app::SmtpNetworkElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E98D80, bool, get_DefaultCredentials, app::SmtpNetworkElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98DB0, void, set_DefaultCredentials, app::SmtpNetworkElement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01E98DE0, bool, get_EnableSsl, app::SmtpNetworkElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98E10, void, set_EnableSsl, app::SmtpNetworkElement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01E98E40, app::String*, get_Host, app::SmtpNetworkElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98E70, void, set_Host, app::SmtpNetworkElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E98EA0, app::String*, get_Password, app::SmtpNetworkElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98ED0, void, set_Password, app::SmtpNetworkElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E98F00, int32_t, get_Port, app::SmtpNetworkElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98F30, void, set_Port, app::SmtpNetworkElement* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01E98F60, app::ConfigurationPropertyCollection*, get_Properties, app::SmtpNetworkElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98F90, app::String*, get_TargetName, app::SmtpNetworkElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98FC0, void, set_TargetName, app::SmtpNetworkElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E98FF0, app::String*, get_UserName, app::SmtpNetworkElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E99020, void, set_UserName, app::SmtpNetworkElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x01E99050, void, PostDeserialize, app::SmtpNetworkElement* this_ptr)
} // namespace app::classes::System::Net::Configuration::SmtpNetworkElement
