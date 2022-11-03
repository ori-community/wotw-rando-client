#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::UberStateException {
    IL2CPP_REGISTER_METHOD(0x01B6CEE0, void, ctor_1, (app::UberStateException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B6CF80, void, ctor_2, (app::UberStateException * this_ptr, app::String* text))
} // namespace app::classes::Moon::UberStateException
