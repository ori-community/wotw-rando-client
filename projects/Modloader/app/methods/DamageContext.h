#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamageContext__Boxed.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::DamageContext {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, ctor, (app::DamageContext__Boxed * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::Damage*, get_Damage, (app::DamageContext__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_Damage, (app::DamageContext__Boxed * this_ptr, app::Damage* value))
} // namespace app::classes::DamageContext
