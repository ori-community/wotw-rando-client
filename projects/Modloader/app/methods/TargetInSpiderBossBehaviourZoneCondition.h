#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/TargetInSpiderBossBehaviourZoneCondition.h>

namespace app::classes::TargetInSpiderBossBehaviourZoneCondition {
    IL2CPP_REGISTER_METHOD(0x00CE24B0, app::String*, get_Info, (app::TargetInSpiderBossBehaviourZoneCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE2570, bool, OnCheck, (app::TargetInSpiderBossBehaviourZoneCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::TargetInSpiderBossBehaviourZoneCondition * this_ptr))
} // namespace app::classes::TargetInSpiderBossBehaviourZoneCondition
