#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::X509Certificates::X509ChainStatus {
    IL2CPP_REGISTER_METHOD(0x001DE2E0, void, ctor, (app::X509ChainStatus__Boxed * this_ptr, app::X509ChainStatusFlags__Enum flag))
    IL2CPP_REGISTER_METHOD(0x0010E170, app::X509ChainStatusFlags__Enum, get_Status, (app::X509ChainStatus__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010DB80, void, set_Status, (app::X509ChainStatus__Boxed * this_ptr, app::X509ChainStatusFlags__Enum value))
    IL2CPP_REGISTER_METHOD(0x0010D3A0, void, set_StatusInformation, (app::X509ChainStatus__Boxed * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x021D4840, app::String*, GetInformation, (app::X509ChainStatusFlags__Enum flags))
} // namespace app::classes::System::Security::Cryptography::X509Certificates::X509ChainStatus
