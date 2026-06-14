#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageStructureMetaDataGroup.h>
#include <Modloader/app/structs/SpiderBossBehaviourGroup.h>

namespace app::classes::SpiderBossBehaviourGroup {
    IL2CPP_REGISTER_METHOD(0x009690E0, app::CageStructureMetaDataGroup*, GetItem, app::SpiderBossBehaviourGroup* this_ptr, float look_direction)
    IL2CPP_REGISTER_METHOD(0x00969210, void, ctor, app::SpiderBossBehaviourGroup* this_ptr)
} // namespace app::classes::SpiderBossBehaviourGroup
