#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlBossTakeOffBehaviour.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>

namespace app::classes::PetrifiedOwlBossTakeOffBehaviour {
    IL2CPP_REGISTER_METHOD(0x0177FA30, void, CopyData, (app::PetrifiedOwlBossTakeOffBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x0177FB10, void, OnEnter, (app::PetrifiedOwlBossTakeOffBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossTakeOffBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01765790, void, OnExit, (app::PetrifiedOwlBossTakeOffBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossTakeOffBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossTakeOffBehaviour
