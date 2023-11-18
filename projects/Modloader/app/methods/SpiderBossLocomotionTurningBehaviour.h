#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderBossEntity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SpiderBossLocomotionTurningBehaviour.h>

namespace app::classes::SpiderBossLocomotionTurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x011B6B40, app::SpiderBossEntity*, get_SpiderBoss, (app::SpiderBossLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B6C10, bool, get_ShouldDoTurning, (app::SpiderBossLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B6D10, void, PlayAnimation, (app::SpiderBossLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005DA240, bool, CanCancel, (app::SpiderBossLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB0300, void, OnCanFinishEnd, (app::SpiderBossLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFFEB0, void, OnCanFinishStart, (app::SpiderBossLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B7260, bool, ShouldEndBehaviour, (app::SpiderBossLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B7290, void, OnExitTask, (app::SpiderBossLocomotionTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::SpiderBossLocomotionTurningBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (app::SpiderBossLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B7390, bool, ShouldPauseLocomotion, (app::SpiderBossLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011B73A0, void, ctor, (app::SpiderBossLocomotionTurningBehaviour * this_ptr))
} // namespace app::classes::SpiderBossLocomotionTurningBehaviour
