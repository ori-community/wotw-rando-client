#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CipherSuite.h>
#include <Modloader/app/structs/SecurityParameters.h>

namespace app::classes::Mono::Security::Protocol::Tls::SecurityParameters {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SecurityParameters* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::CipherSuite*, get_Cipher, app::SecurityParameters* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Cipher, app::SecurityParameters* this_ptr, app::CipherSuite* value)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Byte__Array*, get_ClientWriteMAC, app::SecurityParameters* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_ClientWriteMAC, app::SecurityParameters* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Byte__Array*, get_ServerWriteMAC, app::SecurityParameters* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_ServerWriteMAC, app::SecurityParameters* this_ptr, app::Byte__Array* value)
    IL2CPP_REGISTER_METHOD(0x0063D180, void, Clear, app::SecurityParameters* this_ptr)
} // namespace app::classes::Mono::Security::Protocol::Tls::SecurityParameters
