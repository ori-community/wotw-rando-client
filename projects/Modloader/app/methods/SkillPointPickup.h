#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SkillPointPickup.h>

namespace app::classes::SkillPointPickup {
    IL2CPP_REGISTER_METHOD(0x006B52C0, void, OnCollectorCandidateTouch, app::SkillPointPickup* this_ptr, app::GameObject* collector)
    IL2CPP_REGISTER_METHOD(0x005AC260, void, ctor, app::SkillPointPickup* this_ptr)
} // namespace app::classes::SkillPointPickup
