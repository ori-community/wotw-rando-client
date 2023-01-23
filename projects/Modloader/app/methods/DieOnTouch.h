#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DieOnTouch.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::DieOnTouch {
    IL2CPP_REGISTER_METHOD(0x00B91930, void, OnTriggerEnter, (app::DieOnTouch * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DieOnTouch * this_ptr))
} // namespace app::classes::DieOnTouch
