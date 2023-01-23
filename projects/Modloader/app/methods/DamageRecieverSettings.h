#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamageRecieverSettings.h>

namespace app::classes::DamageRecieverSettings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DamageRecieverSettings * this_ptr))
}
