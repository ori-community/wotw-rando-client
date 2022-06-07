#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::PearsonHash {
    IL2CPP_REGISTER_METHOD(0x01B64F70, uint16_t, Hash, (app::String * guid))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PearsonHash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B65090, void, cctor, ())
}
