#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlScreamBehaviour.h>

namespace app::classes::Moon::PetrifiedOwlScreamBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C37330, void, OnStartBehaviour, app::PetrifiedOwlScreamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C37580, void, OnUpdateBehaviour, app::PetrifiedOwlScreamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C37680, void, OnEndBehaviour, app::PetrifiedOwlScreamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C378B0, float, GetScore, app::PetrifiedOwlScreamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C37900, bool, EndCondition, app::PetrifiedOwlScreamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C37980, void, ResetBehaviour, app::PetrifiedOwlScreamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C37990, void, OnScreamPushEventStart, app::PetrifiedOwlScreamBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C37D40, void, ctor, app::PetrifiedOwlScreamBehaviour* this_ptr)
} // namespace app::classes::Moon::PetrifiedOwlScreamBehaviour
