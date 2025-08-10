#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RuntimeWorldMapIcon.h>
#include <Modloader/app/structs/ShardSlotUpgradePickup.h>

namespace app::classes::ShardSlotUpgradePickup {
    IL2CPP_REGISTER_METHOD(0x005ABE60, void, OnCollectorCandidateTouch, app::ShardSlotUpgradePickup* this_ptr, app::GameObject* collector)
    IL2CPP_REGISTER_METHOD(0x005ABF70, void, Collected, app::ShardSlotUpgradePickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, app::ShardSlotUpgradePickup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005AC270, bool, _Collected_b__2_0, app::ShardSlotUpgradePickup* this_ptr, app::RuntimeWorldMapIcon* a)
} // namespace app::classes::ShardSlotUpgradePickup
