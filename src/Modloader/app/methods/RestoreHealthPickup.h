#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RestoreHealthPickup.h>

namespace app::classes::RestoreHealthPickup {
    IL2CPP_REGISTER_METHOD(0x0090CE90, void, OnCollectorCandidateTouch, app::RestoreHealthPickup* this_ptr, app::GameObject* collector)
    IL2CPP_REGISTER_METHOD(0x0090CFA0, void, ctor, app::RestoreHealthPickup* this_ptr)
} // namespace app::classes::RestoreHealthPickup
