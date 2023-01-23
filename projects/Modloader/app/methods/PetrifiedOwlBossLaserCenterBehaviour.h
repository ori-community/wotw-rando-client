#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlBossLaserCenterBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/Enum.h>

namespace app::classes::PetrifiedOwlBossLaserCenterBehaviour {
    IL2CPP_REGISTER_METHOD(0x01776660, void, CopyData, (app::PetrifiedOwlBossLaserCenterBehaviour * this_ptr, app::PetrifiedOwlBossBaseBehaviour* other))
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, (app::PetrifiedOwlBossLaserCenterBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01776740, void, OnEnter, (app::PetrifiedOwlBossLaserCenterBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, (app::PetrifiedOwlBossLaserCenterBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01765790, void, OnExit, (app::PetrifiedOwlBossLaserCenterBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01776850, app::Enum__Array*, GetEntries, (app::PetrifiedOwlBossLaserCenterBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017768F0, app::Enum, Evaluate, (app::PetrifiedOwlBossLaserCenterBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::PetrifiedOwlBossLaserCenterBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, (app::PetrifiedOwlBossLaserCenterBehaviour * this_ptr))
} // namespace app::classes::PetrifiedOwlBossLaserCenterBehaviour
