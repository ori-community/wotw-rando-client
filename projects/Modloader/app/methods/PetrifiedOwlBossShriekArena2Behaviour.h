#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossShriekArena2Behaviour {
    IL2CPP_REGISTER_METHOD(0x0177D490, void, CopyData, (app::PetrifiedOwlBossShriekArena2Behaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossShriekArena2Behaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177D590, void, OnEnter, (app::PetrifiedOwlBossShriekArena2Behaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossShriekArena2Behaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0177D890, void, OnExit, (app::PetrifiedOwlBossShriekArena2Behaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0177DA70, void, OnShriekSpawnEvent, (app::PetrifiedOwlBossShriekArena2Behaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D838, PetrifiedOwlBossShriekArena2Behaviour_OnShriekSpawnEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0177DB10, app::Enum__Array*, GetEntries, (app::PetrifiedOwlBossShriekArena2Behaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177DBB0, app::Enum, Evaluate, (app::PetrifiedOwlBossShriekArena2Behaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossShriekArena2Behaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossShriekArena2Behaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossShriekArena2Behaviour
