#include <constants.h>

#include <Modloader/app/methods/BlockableLaser.h>
#include <Modloader/app/methods/Damage.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/types/Damage.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

namespace {
    /**
     * We fake lasers to be always on screen for most of the code, except for
     * the part where damage is dealt to Ori to still allow going through lasers
     * when they are offscreen.
     */

    IL2CPP_INTERCEPT(BlockableLaser, bool, IsLaserOnScreen, (app::BlockableLaser * this_ptr, app::Vector3 end_point)) {
        return true;
    }

    IL2CPP_INTERCEPT(BlockableLaser, app::Damage*, DealLaserDamage, (app::BlockableLaser * this_ptr, app::GameObject* target)) {
        auto is_on_screen = next::BlockableLaser::IsLaserOnScreen(this_ptr, this_ptr->fields.m_cachedEnvHit.m_Point);

        if (is_on_screen) {
            return next::BlockableLaser::DealLaserDamage(this_ptr, target);
        }

        auto damage = types::Damage::create();
        Damage::ctor(damage, 0.f, app::Vector2{ 0.f, 0.f }, app::Vector3{ 0.f, 0.f, 0.f }, app::DamageType__Enum::Laser, app::AbilityType__Enum::None, nullptr, 0, nullptr, app::SpiritShardType__Enum::None, true, app::DamageWeight__Enum::Default, 0.f, false);

        return damage;
    }
} // namespace
