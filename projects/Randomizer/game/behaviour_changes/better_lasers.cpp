#include <Randomizer/constants.h>

#include <Modloader/app/methods/BlockableLaser.h>
#include <Modloader/app/methods/Damage.h>
#include <Modloader/app/methods/LaserShooterEntity.h>
#include <Modloader/app/methods/LegacyRotateAnimator.h>
#include <Modloader/app/types/Damage.h>
#include <Modloader/app/types/LegacyRotateAnimator.h>
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

    // Fix laser going through walls on the first frame
    IL2CPP_INTERCEPT(BlockableLaser, void, OnEnable, (app::BlockableLaser * this_ptr)) {
        next::BlockableLaser::OnEnable(this_ptr);

        if (!this_ptr->fields.OptimizeStaticSetupAndOri) {
            BlockableLaser::PerformLaserLogic(this_ptr);
        }
    }

    // Fix Laser Shooter Elementals having a wrong laser rotation when
    // dying while a laser is shot.
    // This happens because the LegacyRotateAnimator does save and restore
    // *global* rotation values instead of local ones, despite
    // the laser being a child of the Elemental, which itself is rotated as well.
    // The LegacyRotateAnimator component is not actually used, but causes
    // internal crashes when being removed, due to the Pool Spawning system depending
    // on its existence.
    IL2CPP_INTERCEPT(LaserShooterEntity, void, OnAwake, (app::LaserShooterEntity * this_ptr)) {
        next::LaserShooterEntity::OnAwake(this_ptr);

        for (auto component: il2cpp::unity::get_components_in_children<app::LegacyRotateAnimator>(this_ptr, types::LegacyRotateAnimator::get_class(), true)) {
            // Values other than 1.0f and 0.0f aren't used here, so I set it to
            // -1.0f and short-circuit AnimateIt below if that value is set.
            component->fields.RotateAxisFilter.z = -1.f;
        }
    }

    IL2CPP_INTERCEPT(LegacyRotateAnimator, void, AnimateIt, (app::LegacyRotateAnimator* this_ptr, float value)) {
        if (this_ptr->fields.RotateAxisFilter.z == -1.f) {
            return;
        }

        next::LegacyRotateAnimator::AnimateIt(this_ptr, value);
    }
} // namespace
