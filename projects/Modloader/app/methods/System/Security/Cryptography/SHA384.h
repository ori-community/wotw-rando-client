#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SHA384.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Security::Cryptography::SHA384 {
    IL2CPP_REGISTER_METHOD(0x028F9210, void, ctor, app::SHA384* this_ptr)
    IL2CPP_REGISTER_METHOD(0x028F9220, app::SHA384*, Create_1, )
    IL2CPP_REGISTER_METHOD(0x028F9360, app::SHA384*, Create_2, app::String* hash_name)
} // namespace app::classes::System::Security::Cryptography::SHA384
