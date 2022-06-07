#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Security::SecurityManager {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_SecurityEnabled, ())
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CheckElevatedPermissions, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnsureElevatedPermissions, ())
}
