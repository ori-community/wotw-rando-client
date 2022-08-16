#include <constants.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/app/methods/BlockableLaser.h>
#include <Il2CppModLoader/app/methods/UnityEngine/GameObject.h>

using namespace modloader;
using namespace app::methods;

namespace {
    /**
     * We fake lasers to be always on screen for most of the code, except for
     * the part where damage is dealt to Ori to still allow going through lasers
     * when they are offscreen.
     */

    bool override_is_laser_on_screen = true;

    IL2CPP_INTERCEPT(BlockableLaser, bool, IsLaserOnScreen, (app::BlockableLaser * this_ptr, app::Vector3 end_point)) {
        return override_is_laser_on_screen
                ? true
                : next::BlockableLaser::IsLaserOnScreen(this_ptr, end_point);
    }

    IL2CPP_INTERCEPT(BlockableLaser, app::Damage*, DealLaserDamage, (app::BlockableLaser * this_ptr, app::GameObject* target)) {
        ScopedSetter setter(override_is_laser_on_screen, false);

        auto is_on_screen = BlockableLaser::IsLaserOnScreen(this_ptr, this_ptr->fields.m_cachedEnvHit.m_Point);

        if (is_on_screen) {
            return next::BlockableLaser::DealLaserDamage(this_ptr, target);
        }
    }
} // namespace
