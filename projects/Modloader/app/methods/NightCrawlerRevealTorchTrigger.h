#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NightCrawlerRevealTorchTrigger {
    IL2CPP_REGISTER_METHOD(0x00608EB0, void, LateUpdate, (app::NightCrawlerRevealTorchTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTriggerEnter, (app::NightCrawlerRevealTorchTrigger * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x00609220, void, ReceiveDamage, (app::NightCrawlerRevealTorchTrigger * this_ptr, app::Damage* damage, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnTriggerExit, (app::NightCrawlerRevealTorchTrigger * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NightCrawlerRevealTorchTrigger * this_ptr))
} // namespace app::classes::NightCrawlerRevealTorchTrigger
