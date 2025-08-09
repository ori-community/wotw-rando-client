#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderBossBaseBehaviour.h>
#include <Modloader/app/structs/SpiderBossEntity_ExecuteAttackInfo.h>

namespace app::classes::SpiderBossEntity_ExecuteAttackInfo {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::SpiderBossEntity_ExecuteAttackInfo* this_ptr, app::SpiderBossBaseBehaviour* beh)
}
