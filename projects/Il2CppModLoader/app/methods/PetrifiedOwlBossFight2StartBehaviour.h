#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlBossFight2StartBehaviour {
    IL2CPP_REGISTER_METHOD(0x0176C900, void, OnEnter, (app::PetrifiedOwlBossFight2StartBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossFight2StartBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0176CBF0, void, OnExit, (app::PetrifiedOwlBossFight2StartBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0176CDD0, void, OnShriekSpawnEvent, (app::PetrifiedOwlBossFight2StartBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766DF8, PetrifiedOwlBossFight2StartBehaviour_OnShriekSpawnEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossFight2StartBehaviour * this_ptr))
}
