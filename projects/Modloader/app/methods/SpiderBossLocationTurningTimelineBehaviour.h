#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossLocationTurningTimelineBehaviour.h>

namespace app::classes::SpiderBossLocationTurningTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x011B3D10, void, OnEnter, app::SpiderBossLocationTurningTimelineBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011B3EE0, app::BehaviourStatus__Enum, OnExecute, app::SpiderBossLocationTurningTimelineBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011B3F30, void, OnExit, app::SpiderBossLocationTurningTimelineBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011B3F40, void, ctor, app::SpiderBossLocationTurningTimelineBehaviour* this_ptr)
} // namespace app::classes::SpiderBossLocationTurningTimelineBehaviour
