#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/PlayerDetector.h>

namespace app::classes::PlayerDetector {
    IL2CPP_REGISTER_METHOD(0x0140E450, void, OnTriggerStay, app::PlayerDetector* this_ptr, app::Collider* col)
    IL2CPP_REGISTER_METHOD(0x0089F980, void, OnUnreachable, app::PlayerDetector* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::PlayerDetector* this_ptr)
} // namespace app::classes::PlayerDetector
