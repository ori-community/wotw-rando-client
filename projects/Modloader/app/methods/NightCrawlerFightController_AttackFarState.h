#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NightCrawlerFightController_AttackFarState.h>
#include <Modloader/app/structs/NightCrawlerFightController.h>

namespace app::classes::NightCrawlerFightController_AttackFarState {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::NightCrawlerFightController_AttackFarState * this_ptr, app::NightCrawlerFightController* controller))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, IsRightSide, (app::NightCrawlerFightController_AttackFarState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00606E00, void, OnEnter, (app::NightCrawlerFightController_AttackFarState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049C100, void, OnFarAttackRightTrigger, (app::NightCrawlerFightController_AttackFarState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00607140, void, AttackFinished, (app::NightCrawlerFightController_AttackFarState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00607190, void, OnExit, (app::NightCrawlerFightController_AttackFarState * this_ptr))
} // namespace app::classes::NightCrawlerFightController_AttackFarState
