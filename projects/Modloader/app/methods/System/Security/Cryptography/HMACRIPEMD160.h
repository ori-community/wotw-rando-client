#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HMACRIPEMD160.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::System::Security::Cryptography::HMACRIPEMD160 {
    IL2CPP_REGISTER_METHOD(0x020D9B70, void, ctor_1, (app::HMACRIPEMD160 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020D9C20, void, ctor_2, (app::HMACRIPEMD160 * this_ptr, app::Byte__Array* key))
} // namespace app::classes::System::Security::Cryptography::HMACRIPEMD160
