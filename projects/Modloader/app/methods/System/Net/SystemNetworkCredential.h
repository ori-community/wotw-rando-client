#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SystemNetworkCredential.h>

namespace app::classes::System::Net::SystemNetworkCredential {
    IL2CPP_REGISTER_METHOD(0x020A5D30, void, ctor, (app::SystemNetworkCredential * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020A5DF0, void, cctor, ())
} // namespace app::classes::System::Net::SystemNetworkCredential
