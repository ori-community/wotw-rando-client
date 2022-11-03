#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinLeafParticles {
    IL2CPP_REGISTER_METHOD(0x01021E20, void, Start, (app::SeinLeafParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01021F80, void, FixedUpdate, (app::SeinLeafParticles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010226A0, void, ctor, (app::SeinLeafParticles * this_ptr))
} // namespace app::classes::SeinLeafParticles
