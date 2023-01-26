#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PickupBase_c.h>

namespace app::classes::PickupBase___c {
    IL2CPP_REGISTER_METHOD(0x011589F0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PickupBase_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, _OnPoolSpawned_b__33_0, (app::PickupBase_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__56_0, (app::PickupBase_c * this_ptr))
} // namespace app::classes::PickupBase___c
