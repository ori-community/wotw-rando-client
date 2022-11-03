#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossFight1ClawSwipeBehaviour {
    IL2CPP_REGISTER_METHOD(0x017657D0, void, CopyData, (app::PetrifiedOwlBossFight1ClawSwipeBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossFight1ClawSwipeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (app::PetrifiedOwlBossFight1ClawSwipeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017658B0, void, OnEnter, (app::PetrifiedOwlBossFight1ClawSwipeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFight1ClawSwipeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01765790, void, OnExit, (app::PetrifiedOwlBossFight1ClawSwipeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017659D0, app::Enum__Array*, GetEntries, (app::PetrifiedOwlBossFight1ClawSwipeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765A70, app::Enum, Evaluate, (app::PetrifiedOwlBossFight1ClawSwipeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossFight1ClawSwipeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossFight1ClawSwipeBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFight1ClawSwipeBehaviour
