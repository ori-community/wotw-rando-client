#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/EncryptionPolicy__Enum.h>
#include <Modloader/app/structs/ServicePointManagerElement.h>

namespace app::classes::System::Net::Configuration::ServicePointManagerElement {
    IL2CPP_REGISTER_METHOD(0x01E985D0, void, ctor, app::ServicePointManagerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98600, bool, get_CheckCertificateName, app::ServicePointManagerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98630, void, set_CheckCertificateName, app::ServicePointManagerElement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01E98660, bool, get_CheckCertificateRevocationList, app::ServicePointManagerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98690, void, set_CheckCertificateRevocationList, app::ServicePointManagerElement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01E986C0, int32_t, get_DnsRefreshTimeout, app::ServicePointManagerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E986F0, void, set_DnsRefreshTimeout, app::ServicePointManagerElement* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01E98720, bool, get_EnableDnsRoundRobin, app::ServicePointManagerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98750, void, set_EnableDnsRoundRobin, app::ServicePointManagerElement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01E98780, app::EncryptionPolicy__Enum, get_EncryptionPolicy, app::ServicePointManagerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E987B0, void, set_EncryptionPolicy, app::ServicePointManagerElement* this_ptr, app::EncryptionPolicy__Enum value)
    IL2CPP_REGISTER_METHOD(0x01E987E0, bool, get_Expect100Continue, app::ServicePointManagerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98810, void, set_Expect100Continue, app::ServicePointManagerElement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01E98840, app::ConfigurationPropertyCollection*, get_Properties, app::ServicePointManagerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E98870, bool, get_UseNagleAlgorithm, app::ServicePointManagerElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E988A0, void, set_UseNagleAlgorithm, app::ServicePointManagerElement* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01E988D0, void, PostDeserialize, app::ServicePointManagerElement* this_ptr)
} // namespace app::classes::System::Net::Configuration::ServicePointManagerElement
