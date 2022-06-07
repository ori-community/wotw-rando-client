#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Net::NetworkInformation::IPGlobalProperties {
    IL2CPP_REGISTER_METHOD(0x01E765D0, bool, get_PlatformNeedsLibCWorkaround, ())
    IL2CPP_REGISTER_METHOD(0x01E76650, app::IPGlobalProperties *, GetIPGlobalProperties, ())
    IL2CPP_REGISTER_METHOD(0x01E76A10, app::IPGlobalProperties *, InternalGetIPGlobalProperties, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::IPGlobalProperties * this_ptr))
}
