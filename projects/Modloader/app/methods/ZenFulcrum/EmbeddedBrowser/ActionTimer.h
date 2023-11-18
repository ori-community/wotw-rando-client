#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActionTimer.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::ActionTimer {
    IL2CPP_REGISTER_METHOD(0x01C60770, void, OnTriggerEnter, (app::ActionTimer * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x01C60980, app::IEnumerator*, DoThings, (app::ActionTimer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ActionTimer * this_ptr))
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::ActionTimer
