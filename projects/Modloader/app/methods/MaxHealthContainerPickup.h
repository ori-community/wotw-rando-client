#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MaxHealthContainerPickup.h>

namespace app::classes::MaxHealthContainerPickup {
    IL2CPP_REGISTER_METHOD(0x01385E50, void, OnCollectorCandidateTouch, app::MaxHealthContainerPickup* this_ptr, app::GameObject* collector)
    IL2CPP_REGISTER_METHOD(0x01385F60, void, PickupStateChanged, app::MaxHealthContainerPickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, app::MaxHealthContainerPickup* this_ptr)
} // namespace app::classes::MaxHealthContainerPickup
