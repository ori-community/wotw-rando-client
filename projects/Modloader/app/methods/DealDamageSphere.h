#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DealDamageSphere.h>

namespace app::classes::DealDamageSphere {
    IL2CPP_REGISTER_METHOD(0x00DDDC50, void, Awake, app::DealDamageSphere* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDDD60, void, DealDamageSphereMethod, app::DealDamageSphere* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00DDE2D0, void, ctor, app::DealDamageSphere* this_ptr)
} // namespace app::classes::DealDamageSphere
