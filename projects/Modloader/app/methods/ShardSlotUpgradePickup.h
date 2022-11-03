#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ShardSlotUpgradePickup {
    IL2CPP_REGISTER_METHOD(0x005ABE60, void, OnCollectorCandidateTouch, (app::ShardSlotUpgradePickup * this_ptr, app::GameObject* collector))
    IL2CPP_REGISTER_METHOD(0x005ABF70, void, Collected, (app::ShardSlotUpgradePickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, (app::ShardSlotUpgradePickup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005AC270, bool, _Collected_b__2_0, (app::ShardSlotUpgradePickup * this_ptr, app::RuntimeWorldMapIcon* a))
    IL2CPP_REGISTER_METHODINFO(0x0472C580, ShardSlotUpgradePickup__Collected_b__2_0__MethodInfo)
} // namespace app::classes::ShardSlotUpgradePickup
