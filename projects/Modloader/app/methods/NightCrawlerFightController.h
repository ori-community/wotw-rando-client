#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/NightCrawlerFightController.h>

namespace app::classes::NightCrawlerFightController {
    IL2CPP_REGISTER_METHOD(0x00603D60, bool, get_Defeated, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00603D70, void, set_Defeated, app::NightCrawlerFightController* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00603D80, float, get_CurrentFarZoneTimer, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00603DA0, bool, get_ShouldDoFarAttack, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00603DC0, bool, get_HasCriticalHealth, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00603EA0, void, Awake, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006046F0, void, OnEnable, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00604AF0, void, OnDisable, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00604EF0, void, OnFirstHit, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006050F0, void, ResetFight, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00605300, void, StartFight, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00605770, void, FinishFight, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00605B50, void, OriDamaged, app::NightCrawlerFightController* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00605B90, void, EscapeFinished, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00605D60, void, FixedUpdate, app::NightCrawlerFightController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00606040, void, DamageReceived, app::NightCrawlerFightController* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00606740, void, ctor, app::NightCrawlerFightController* this_ptr)
} // namespace app::classes::NightCrawlerFightController
