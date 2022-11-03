#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossTalonStompBehaviour {
    IL2CPP_REGISTER_METHOD(0x0177FB70, void, CopyData, (app::PetrifiedOwlBossTalonStompBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (app::PetrifiedOwlBossTalonStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177FC50, void, OnEnter, (app::PetrifiedOwlBossTalonStompBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossTalonStompBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01765790, void, OnExit, (app::PetrifiedOwlBossTalonStompBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0177FD70, app::Enum__Array*, GetEntries, (app::PetrifiedOwlBossTalonStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177FE10, app::Enum, Evaluate, (app::PetrifiedOwlBossTalonStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossTalonStompBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossTalonStompBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossTalonStompBehaviour
