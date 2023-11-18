#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LianaHealLanternVisuals.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::LianaHealLanternVisuals {
    IL2CPP_REGISTER_METHOD(0x0113F2B0, void, AttachVisuals, (app::LianaHealLanternVisuals * this_ptr, app::Transform* follow_transform))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LianaHealLanternVisuals * this_ptr))
} // namespace app::classes::LianaHealLanternVisuals
