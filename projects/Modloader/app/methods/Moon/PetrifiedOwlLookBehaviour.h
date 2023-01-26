#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlLookBehaviour.h>

namespace app::classes::Moon::PetrifiedOwlLookBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C36DC0, void, Awake, (app::PetrifiedOwlLookBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36E70, void, ResetBehaviour, (app::PetrifiedOwlLookBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C36EF0, void, OnUpdateBehaviour, (app::PetrifiedOwlLookBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C37240, void, ctor, (app::PetrifiedOwlLookBehaviour * this_ptr))
} // namespace app::classes::Moon::PetrifiedOwlLookBehaviour
