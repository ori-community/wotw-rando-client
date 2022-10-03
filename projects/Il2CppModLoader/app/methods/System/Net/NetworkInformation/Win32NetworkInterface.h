#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Net::NetworkInformation::Win32NetworkInterface {
    IL2CPP_REGISTER_METHOD(0x01BCABE0, int32_t, GetNetworkParams, (void* ptr, int32_t* size))
    IL2CPP_REGISTER_METHOD(0x01BCACE0, app::Win32_FIXED_INFO, get_FixedInfo, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::System::Net::NetworkInformation::Win32NetworkInterface
