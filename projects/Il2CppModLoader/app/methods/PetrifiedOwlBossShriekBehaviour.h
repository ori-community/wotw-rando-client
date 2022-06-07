#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlBossShriekBehaviour {
    IL2CPP_REGISTER_METHOD(0x0177DC50, void, CopyData, (app::PetrifiedOwlBossShriekBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour * other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (app::PetrifiedOwlBossShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177DD50, void, OnEnter, (app::PetrifiedOwlBossShriekBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossShriekBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0177E080, void, OnExit, (app::PetrifiedOwlBossShriekBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0177E260, void, OnShriekSpawnEvent, (app::PetrifiedOwlBossShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047616F8, PetrifiedOwlBossShriekBehaviour_OnShriekSpawnEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0177E300, app::Enum__Array *, GetEntries, (app::PetrifiedOwlBossShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177E3A0, app::Enum, Evaluate, (app::PetrifiedOwlBossShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossShriekBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossShriekBehaviour * this_ptr))
}
