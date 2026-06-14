#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/TriggerEventBroadcaster.h>

namespace app::classes::RootMotion::TriggerEventBroadcaster {
    IL2CPP_REGISTER_METHOD(0x02A2E0D0, void, OnTriggerEnter, app::TriggerEventBroadcaster* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x02A2E1C0, void, OnTriggerStay, app::TriggerEventBroadcaster* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x02A2E2B0, void, OnTriggerExit, app::TriggerEventBroadcaster* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::TriggerEventBroadcaster* this_ptr)
} // namespace app::classes::RootMotion::TriggerEventBroadcaster
