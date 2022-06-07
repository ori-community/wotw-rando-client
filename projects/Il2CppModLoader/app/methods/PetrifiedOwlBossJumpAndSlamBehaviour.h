#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlBossJumpAndSlamBehaviour {
    IL2CPP_REGISTER_METHOD(0x00660430, app::StateMachine_2 *, get_StateMachine, (app::PetrifiedOwlBossJumpAndSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::PetrifiedOwlBossBaseBehaviour_PetrifiedOwlBossBaseStatesSet *, get_States, (app::PetrifiedOwlBossJumpAndSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017744F0, void, InitializeCancellableController, (app::PetrifiedOwlBossJumpAndSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01765C10, void, InitializeHitReactionController, (app::PetrifiedOwlBossJumpAndSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01774580, void, OnEntityInitialized, (app::PetrifiedOwlBossJumpAndSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017749D0, void, OnEnter, (app::PetrifiedOwlBossJumpAndSlamBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01766290, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossJumpAndSlamBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01766390, void, OnExit, (app::PetrifiedOwlBossJumpAndSlamBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01774A20, void, ctor, (app::PetrifiedOwlBossJumpAndSlamBehaviour * this_ptr))
}
