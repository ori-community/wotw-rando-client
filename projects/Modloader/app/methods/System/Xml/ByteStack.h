#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Xml::ByteStack {
    IL2CPP_REGISTER_METHOD(0x021E7EE0, void, ctor, (app::ByteStack * this_ptr, int32_t growth_rate))
    IL2CPP_REGISTER_METHOD(0x021E7F80, void, Push, (app::ByteStack * this_ptr, uint8_t data))
    IL2CPP_REGISTER_METHOD(0x021E8090, uint8_t, Pop, (app::ByteStack * this_ptr))
} // namespace app::classes::System::Xml::ByteStack
