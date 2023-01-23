#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/PearsonHash.h>

namespace app::classes::Moon::PearsonHash {
    IL2CPP_REGISTER_METHOD(0x01B64F70, uint16_t, Hash, (app::String * guid))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PearsonHash * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B65090, void, cctor, ())
} // namespace app::classes::Moon::PearsonHash
