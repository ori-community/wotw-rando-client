#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameplayToCinematicEntity_c.h>
#include <Modloader/app/structs/FloatProviderZone.h>

namespace app::classes::Moon::Timeline::GameplayToCinematicEntity___c {
    IL2CPP_REGISTER_METHOD(0x0076F470, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GameplayToCinematicEntity_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076F5B0, float, _OnUpdateEntity_b__15_0, (app::GameplayToCinematicEntity_c * this_ptr, float current, app::FloatProviderZone* zone))
    IL2CPP_REGISTER_METHODINFO(0x0472C038, GameplayToCinematicEntity_c__OnUpdateEntity_b__15_0__MethodInfo)
} // namespace app::classes::Moon::Timeline::GameplayToCinematicEntity___c
