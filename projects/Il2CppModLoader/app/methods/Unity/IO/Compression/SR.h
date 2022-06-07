#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Unity::IO::Compression::SR {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SR_6 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::String *, GetString, (app::String * p))
}
