#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/LegacySeinLandOnTrigger.h>

namespace app::classes::LegacySeinLandOnTrigger {
    IL2CPP_REGISTER_METHOD(0x00A35510, void, OnCollisionEnter, app::LegacySeinLandOnTrigger* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::LegacySeinLandOnTrigger* this_ptr)
} // namespace app::classes::LegacySeinLandOnTrigger
