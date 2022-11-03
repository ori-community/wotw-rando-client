#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossFight1ClawSlamBehaviour {
    IL2CPP_REGISTER_METHOD(0x01765620, void, CopyData, (app::PetrifiedOwlBossFight1ClawSlamBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossFight1ClawSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (app::PetrifiedOwlBossFight1ClawSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765750, void, OnEnter, (app::PetrifiedOwlBossFight1ClawSlamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFight1ClawSlamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01765790, void, OnExit, (app::PetrifiedOwlBossFight1ClawSlamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossFight1ClawSlamBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFight1ClawSlamBehaviour
