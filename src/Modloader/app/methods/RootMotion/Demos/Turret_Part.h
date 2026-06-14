#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Turret_Part.h>

namespace app::classes::RootMotion::Demos::Turret_Part {
    IL2CPP_REGISTER_METHOD(0x0204A010, void, AimAt, app::Turret_Part* this_ptr, app::Transform* target)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Turret_Part* this_ptr)
} // namespace app::classes::RootMotion::Demos::Turret_Part
