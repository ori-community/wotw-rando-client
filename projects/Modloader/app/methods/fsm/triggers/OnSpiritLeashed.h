#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::fsm::triggers::OnSpiritLeashed {
    IL2CPP_REGISTER_METHOD(0x009C51C0, void, ctor, (app::OnSpiritLeashed * this_ptr, app::Vector3 position))
}
