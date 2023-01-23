#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/NightCrawlerBackAttackController.h>
#include <Modloader/app/structs/Enum.h>

namespace app::classes::NightCrawlerBackAttackController {
    IL2CPP_REGISTER_METHOD(0x006018D0, app::Enum__Array*, GetEntries, (app::NightCrawlerBackAttackController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00601960, app::Enum, Evaluate, (app::NightCrawlerBackAttackController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldSkip, (app::NightCrawlerBackAttackController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NightCrawlerBackAttackController * this_ptr))
} // namespace app::classes::NightCrawlerBackAttackController
