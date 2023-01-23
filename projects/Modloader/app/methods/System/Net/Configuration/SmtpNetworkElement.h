#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SmtpNetworkElement.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ConfigurationPropertyCollection.h>

namespace app::classes::System::Net::Configuration::SmtpNetworkElement {
    IL2CPP_REGISTER_METHOD(0x01E98CF0, void, ctor, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755560, SmtpNetworkElement__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98D20, app::String*, get_ClientDomain, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472DB58, SmtpNetworkElement_get_ClientDomain__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98D50, void, set_ClientDomain, (app::SmtpNetworkElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04744538, SmtpNetworkElement_set_ClientDomain__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98D80, bool, get_DefaultCredentials, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E260, SmtpNetworkElement_get_DefaultCredentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98DB0, void, set_DefaultCredentials, (app::SmtpNetworkElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0477F558, SmtpNetworkElement_set_DefaultCredentials__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98DE0, bool, get_EnableSsl, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047022D8, SmtpNetworkElement_get_EnableSsl__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98E10, void, set_EnableSsl, (app::SmtpNetworkElement * this_ptr, bool value))
    IL2CPP_REGISTER_METHODINFO(0x0471E118, SmtpNetworkElement_set_EnableSsl__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98E40, app::String*, get_Host, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047302F8, SmtpNetworkElement_get_Host__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98E70, void, set_Host, (app::SmtpNetworkElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x047553C8, SmtpNetworkElement_set_Host__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98EA0, app::String*, get_Password, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04798A58, SmtpNetworkElement_get_Password__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98ED0, void, set_Password, (app::SmtpNetworkElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0478F960, SmtpNetworkElement_set_Password__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98F00, int32_t, get_Port, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04755848, SmtpNetworkElement_get_Port__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98F30, void, set_Port, (app::SmtpNetworkElement * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHODINFO(0x0472BCA8, SmtpNetworkElement_set_Port__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98F60, app::ConfigurationPropertyCollection*, get_Properties, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706C60, SmtpNetworkElement_get_Properties__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98F90, app::String*, get_TargetName, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047889F0, SmtpNetworkElement_get_TargetName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98FC0, void, set_TargetName, (app::SmtpNetworkElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x0473CC10, SmtpNetworkElement_set_TargetName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E98FF0, app::String*, get_UserName, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04753040, SmtpNetworkElement_get_UserName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99020, void, set_UserName, (app::SmtpNetworkElement * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHODINFO(0x04733FE8, SmtpNetworkElement_set_UserName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E99050, void, PostDeserialize, (app::SmtpNetworkElement * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474FE88, SmtpNetworkElement_PostDeserialize__MethodInfo)
} // namespace app::classes::System::Net::Configuration::SmtpNetworkElement
