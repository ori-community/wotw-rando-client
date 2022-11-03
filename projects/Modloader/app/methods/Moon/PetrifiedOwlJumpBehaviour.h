#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::PetrifiedOwlJumpBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C34F30, void, OnStartBehaviour, (app::PetrifiedOwlJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C351F0, void, OnEndBehaviour, (app::PetrifiedOwlJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C35230, float, GetScore, (app::PetrifiedOwlJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C35400, bool, EndCondition, (app::PetrifiedOwlJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C35480, void, OnBeforeJumpDownEventStarted, (app::PetrifiedOwlJumpBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470AFA8, PetrifiedOwlJumpBehaviour_OnBeforeJumpDownEventStarted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C35710, void, ctor, (app::PetrifiedOwlJumpBehaviour * this_ptr))
} // namespace app::classes::Moon::PetrifiedOwlJumpBehaviour
