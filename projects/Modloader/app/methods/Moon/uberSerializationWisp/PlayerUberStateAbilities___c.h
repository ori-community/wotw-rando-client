#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerUberStateAbilities_c.h>
#include <Modloader/app/structs/AbilityType__Enum.h>

namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateAbilities___c {
    IL2CPP_REGISTER_METHOD(0x00F35400, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerUberStateAbilities_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__5_0, (app::PlayerUberStateAbilities_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__23_0, (app::PlayerUberStateAbilities_c * this_ptr, app::AbilityType__Enum _p0_, bool _p1_))
} // namespace app::classes::Moon::uberSerializationWisp::PlayerUberStateAbilities___c
