#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SR_6.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Unity::IO::Compression::SR {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SR_6 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String*, GetString, (app::String * p))
} // namespace app::classes::Unity::IO::Compression::SR
