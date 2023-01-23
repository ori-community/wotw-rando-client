#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TargetInSpiderBossLocationZoneCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::TargetInSpiderBossLocationZoneCondition {
    IL2CPP_REGISTER_METHOD(0x00CE2720, app::String*, get_Info, (app::TargetInSpiderBossLocationZoneCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE27E0, bool, OnCheck, (app::TargetInSpiderBossLocationZoneCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::TargetInSpiderBossLocationZoneCondition * this_ptr))
} // namespace app::classes::TargetInSpiderBossLocationZoneCondition
