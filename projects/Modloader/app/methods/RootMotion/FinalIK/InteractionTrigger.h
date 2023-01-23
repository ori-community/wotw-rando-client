#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InteractionTrigger.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/RaycastHit.h>

namespace app::classes::RootMotion::FinalIK::InteractionTrigger {
    IL2CPP_REGISTER_METHOD(0x02A15DB0, void, OpenTutorial4, (app::InteractionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A15E70, void, SupportGroup, (app::InteractionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A15F30, void, ASThread, (app::InteractionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::InteractionTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02A15FF0, int32_t, GetBestRangeIndex, (app::InteractionTrigger * this_ptr, app::Transform* character, app::Transform* raycast_from, app::RaycastHit raycast_hit))
    IL2CPP_REGISTER_METHOD(0x02A16340, void, ctor, (app::InteractionTrigger * this_ptr))
} // namespace app::classes::RootMotion::FinalIK::InteractionTrigger
