#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FixedRotation.h>

namespace app::classes::FixedRotation {
    IL2CPP_REGISTER_METHOD(0x0126F480, void, OnPoolSpawned, (app::FixedRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::FixedRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126F530, void, Start, (app::FixedRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126F610, void, FixedUpdate, (app::FixedRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126F890, void, ctor, (app::FixedRotation * this_ptr))
} // namespace app::classes::FixedRotation
