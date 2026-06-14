#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossOffLimitsBehaviour.h>

namespace app::classes::PetrifiedOwlBossOffLimitsBehaviour {
    IL2CPP_REGISTER_METHOD(0x0177A4A0, void, CopyData, app::PetrifiedOwlBossOffLimitsBehaviour* this_ptr, app::PetrifiedOwlBossBaseBehaviour* other)
    IL2CPP_REGISTER_METHOD(0x017640A0, void, InitializeCancellableController, app::PetrifiedOwlBossOffLimitsBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0177A580, void, OnEnter, app::PetrifiedOwlBossOffLimitsBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x017644B0, app::BehaviourStatus__Enum, OnExecute, app::PetrifiedOwlBossOffLimitsBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0177A8F0, void, OnExit, app::PetrifiedOwlBossOffLimitsBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0177ABF0, void, OnAnticipationPlayEvent, app::PetrifiedOwlBossOffLimitsBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0177AD40, void, OnArenaOffLimitsVFXPlayEvent, app::PetrifiedOwlBossOffLimitsBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017657C0, void, ctor, app::PetrifiedOwlBossOffLimitsBehaviour* this_ptr)
} // namespace app::classes::PetrifiedOwlBossOffLimitsBehaviour
