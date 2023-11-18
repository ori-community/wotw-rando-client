#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinLandOnTrigger.h>
#include <Modloader/app/structs/Collision.h>

namespace app::classes::SeinLandOnTrigger {
    IL2CPP_REGISTER_METHOD(0x01020B70, void, OnCollisionEnter, (app::SeinLandOnTrigger * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinLandOnTrigger * this_ptr))
} // namespace app::classes::SeinLandOnTrigger
