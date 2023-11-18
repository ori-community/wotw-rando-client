#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BitStack.h>

namespace app::classes::System::Xml::BitStack {
    IL2CPP_REGISTER_METHOD(0x021E7820, void, ctor, (app::BitStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021E7830, void, PushBit, (app::BitStack * this_ptr, bool bit))
    IL2CPP_REGISTER_METHOD(0x021E7980, bool, PopBit, (app::BitStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021E79F0, bool, PeekBit, (app::BitStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021E7A00, void, PushCurr, (app::BitStack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x021E7B20, void, PopCurr, (app::BitStack * this_ptr))
} // namespace app::classes::System::Xml::BitStack
