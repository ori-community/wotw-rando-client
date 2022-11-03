#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Net::UnsafeNclNativeMethods_SecureStringHelper {
    IL2CPP_REGISTER_METHOD(0x020ACA80, app::String*, CreateString, (app::SecureString * secure_string))
    IL2CPP_REGISTER_METHOD(0x020ACCD0, app::SecureString*, CreateSecureString, (app::String * plain_string))
} // namespace app::classes::System::Net::UnsafeNclNativeMethods_SecureStringHelper
