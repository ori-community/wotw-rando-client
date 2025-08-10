#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/HMACMD5.h>

namespace app::classes::System::Security::Cryptography::HMACMD5 {
    IL2CPP_REGISTER_METHOD(0x020D9880, void, ctor_1, app::HMACMD5* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020D9930, void, ctor_2, app::HMACMD5* this_ptr, app::Byte__Array* key)
} // namespace app::classes::System::Security::Cryptography::HMACMD5
