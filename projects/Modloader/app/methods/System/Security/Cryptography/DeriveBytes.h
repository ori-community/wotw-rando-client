#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DeriveBytes.h>

namespace app::classes::System::Security::Cryptography::DeriveBytes {
    IL2CPP_REGISTER_METHOD(0x020D7DC0, void, Dispose_1, (app::DeriveBytes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_2, (app::DeriveBytes * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeriveBytes * this_ptr))
} // namespace app::classes::System::Security::Cryptography::DeriveBytes
