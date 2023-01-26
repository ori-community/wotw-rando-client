#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageDealer_c.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>

namespace app::classes::DamageDealer___c {
    IL2CPP_REGISTER_METHOD(0x00DC76F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DamageDealer_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__112_0, (app::DamageDealer_c * this_ptr, app::DamageDealer* _p0_, app::DamageResult _p1_))
} // namespace app::classes::DamageDealer___c
