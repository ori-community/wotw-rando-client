#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EncryptionPolicy__Enum.h>
#include <Modloader/app/structs/SettingsSectionInternal.h>

namespace app::classes::System::Net::Configuration::SettingsSectionInternal {
    IL2CPP_REGISTER_METHOD(0x01E98AE0, app::SettingsSectionInternal*, get_Section, )
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_UseNagleAlgorithm, app::SettingsSectionInternal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_UseNagleAlgorithm, app::SettingsSectionInternal* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00533160, bool, get_Expect100Continue, app::SettingsSectionInternal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00533170, void, set_Expect100Continue, app::SettingsSectionInternal* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00F43310, bool, get_CheckCertificateName, app::SettingsSectionInternal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98B80, void, set_CheckCertificateName, app::SettingsSectionInternal* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_DnsRefreshTimeout, app::SettingsSectionInternal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A020, void, set_DnsRefreshTimeout, app::SettingsSectionInternal* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0052A030, bool, get_EnableDnsRoundRobin, app::SettingsSectionInternal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A040, void, set_EnableDnsRoundRobin, app::SettingsSectionInternal* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00DF3DF0, bool, get_CheckCertificateRevocationList, app::SettingsSectionInternal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DF3E00, void, set_CheckCertificateRevocationList, app::SettingsSectionInternal* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00529E80, app::EncryptionPolicy__Enum, get_EncryptionPolicy, app::SettingsSectionInternal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529E90, void, set_EncryptionPolicy, app::SettingsSectionInternal* this_ptr, app::EncryptionPolicy__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Ipv6Enabled, app::SettingsSectionInternal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98B90, void, ctor, app::SettingsSectionInternal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98BA0, void, cctor, )
} // namespace app::classes::System::Net::Configuration::SettingsSectionInternal
