#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlBossFight1GroundLaserBehaviour {
    IL2CPP_REGISTER_METHOD(0x017691C0, void, CopyData, (app::PetrifiedOwlBossFight1GroundLaserBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour * other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossFight1GroundLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (app::PetrifiedOwlBossFight1GroundLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017692A0, void, OnEnter, (app::PetrifiedOwlBossFight1GroundLaserBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFight1GroundLaserBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01765790, void, OnExit, (app::PetrifiedOwlBossFight1GroundLaserBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x017693B0, app::Enum__Array *, GetEntries, (app::PetrifiedOwlBossFight1GroundLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01769450, app::Enum, Evaluate, (app::PetrifiedOwlBossFight1GroundLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossFight1GroundLaserBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossFight1GroundLaserBehaviour * this_ptr))
}
