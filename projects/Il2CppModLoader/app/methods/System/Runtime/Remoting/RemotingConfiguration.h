#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Runtime::Remoting::RemotingConfiguration {
    IL2CPP_REGISTER_METHOD(0x02320D70, app::String*, get_ApplicationName, ())
    IL2CPP_REGISTER_METHOD(0x02320E10, void, set_ApplicationName, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x02320EC0, app::String*, get_ProcessId, ())
    IL2CPP_REGISTER_METHOD(0x02321080, void, LoadDefaultDelayedChannels, ())
    IL2CPP_REGISTER_METHOD(0x023215C0, bool, IsActivationAllowed, (app::Type * svr_type))
    IL2CPP_REGISTER_METHOD(0x023217A0, app::ActivatedClientTypeEntry*, IsRemotelyActivatedClientType, (app::Type * svr_type))
    IL2CPP_REGISTER_METHOD(0x023219C0, app::WellKnownClientTypeEntry*, IsWellKnownClientType, (app::Type * svr_type))
    IL2CPP_REGISTER_METHOD(0x02321BE0, void, RegisterActivatedClientType, (app::ActivatedClientTypeEntry * entry))
    IL2CPP_REGISTER_METHODINFO(0x04764180, RemotingConfiguration_RegisterActivatedClientType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02321EC0, void, RegisterActivatedServiceType, (app::ActivatedServiceTypeEntry * entry))
    IL2CPP_REGISTER_METHOD(0x02322080, void, RegisterWellKnownClientType, (app::WellKnownClientTypeEntry * entry))
    IL2CPP_REGISTER_METHODINFO(0x047054B0, RemotingConfiguration_RegisterWellKnownClientType__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02322360, void, RegisterWellKnownServiceType, (app::WellKnownServiceTypeEntry * entry))
    IL2CPP_REGISTER_METHOD(0x02322580, void, RegisterChannelTemplate, (app::ChannelData * channel))
    IL2CPP_REGISTER_METHOD(0x02322660, void, RegisterClientProviderTemplate, (app::ProviderData * prov))
    IL2CPP_REGISTER_METHOD(0x02322740, void, RegisterServerProviderTemplate, (app::ProviderData * prov))
    IL2CPP_REGISTER_METHOD(0x02322820, void, RegisterChannels, (app::ArrayList * channels, bool only_delayed))
    IL2CPP_REGISTER_METHODINFO(0x04741950, RemotingConfiguration_RegisterChannels__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02323000, void, RegisterTypes, (app::ArrayList * types))
    IL2CPP_REGISTER_METHOD(0x02323480, bool, CustomErrorsEnabled, (bool is_local_request))
    IL2CPP_REGISTER_METHOD(0x023235D0, void, SetCustomErrorsMode, (app::String * mode))
    IL2CPP_REGISTER_METHODINFO(0x047343F0, RemotingConfiguration_SetCustomErrorsMode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02323790, void, cctor, ())
} // namespace app::classes::System::Runtime::Remoting::RemotingConfiguration
