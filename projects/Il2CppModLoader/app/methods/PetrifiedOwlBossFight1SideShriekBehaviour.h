#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossFight1SideShriekBehaviour {
    IL2CPP_REGISTER_METHOD(0x0176ACD0, void, CopyData, (app::PetrifiedOwlBossFight1SideShriekBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (app::PetrifiedOwlBossFight1SideShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176ADD0, void, OnEnter, (app::PetrifiedOwlBossFight1SideShriekBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFight1SideShriekBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0176B020, void, OnExit, (app::PetrifiedOwlBossFight1SideShriekBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0176B200, void, OnShriekSpawnEvent, (app::PetrifiedOwlBossFight1SideShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D0E0, PetrifiedOwlBossFight1SideShriekBehaviour_OnShriekSpawnEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0176B2A0, app::Enum__Array*, GetEntries, (app::PetrifiedOwlBossFight1SideShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0176B340, app::Enum, Evaluate, (app::PetrifiedOwlBossFight1SideShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossFight1SideShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossFight1SideShriekBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossFight1SideShriekBehaviour
