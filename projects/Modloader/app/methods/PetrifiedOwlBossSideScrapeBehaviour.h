#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlBossSideScrapeBehaviour {
    IL2CPP_REGISTER_METHOD(0x0177E440, void, CopyData, (app::PetrifiedOwlBossSideScrapeBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossSideScrapeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765700, void, InitializeHitReactionController, (app::PetrifiedOwlBossSideScrapeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177E520, void, OnEnter, (app::PetrifiedOwlBossSideScrapeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossSideScrapeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01765790, void, OnExit, (app::PetrifiedOwlBossSideScrapeBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0177E640, app::Enum__Array*, GetEntries, (app::PetrifiedOwlBossSideScrapeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0177E6E0, app::Enum, Evaluate, (app::PetrifiedOwlBossSideScrapeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossSideScrapeBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossSideScrapeBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossSideScrapeBehaviour
