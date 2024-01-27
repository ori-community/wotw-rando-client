#include <Core/api/uber_states/uber_state.h>
#include <Core/events/action.h>
#include <Core/events/task.h>
#include <Randomizer/macros.h>

#include <Modloader/app/methods/ChakramProjectile.h>
#include <Modloader/app/methods/MoonMath_Angle.h>
#include <Modloader/app/methods/Sein/World/Events.h>
#include <Modloader/app/methods/SeinChakramSpell.h>
#include <Modloader/app/methods/SeinChakramSpell_BalancingData.h>
#include <Modloader/interception_macros.h>

using namespace app::classes;

namespace {
    core::api::uber_states::UberState extra_shurikens(UberStateGroup::RandoUpgrade, 38);
    core::api::uber_states::UberState shuriken_multishot_count(UberStateGroup::RandoUpgrade, 48);
    core::api::uber_states::UberState shuriken_multishot_spread(UberStateGroup::RandoUpgrade, 49);
    core::api::uber_states::UberState shuriken_damage_multiplier(UberStateGroup::RandoUpgrade, 92);

    bool initialized = false;
    int default_max_chakrams = 1;

    IL2CPP_INTERCEPT(SeinChakramSpell, void, EnterMove, (app::SeinChakramSpell * this_ptr)) {
        if (!initialized) {
            default_max_chakrams = this_ptr->fields.MaxChakrams;
            initialized = true;
        }

        this_ptr->fields.MaxChakrams = default_max_chakrams + extra_shurikens.get<int>();

        return next::SeinChakramSpell::EnterMove(this_ptr);
    }

    void throw_shuriken(app::SeinChakramSpell* spell, float angle) {
        SeinChakramSpell::InstantiateProjectile(spell);
        auto offset_direction = MoonMath_Angle::VectorFromAngle(angle);
        spell->fields.m_projectile->fields._._Direction_k__BackingField = app::Vector3(offset_direction.x, offset_direction.y, 0.f);
        ChakramProjectile::Initialize(spell->fields.m_projectile, spell);
    }

    IL2CPP_INTERCEPT(ChakramProjectile, void, UpdateDamage, (app::ChakramProjectile * this_ptr)) {
        next::ChakramProjectile::UpdateDamage(this_ptr);
        this_ptr->fields._.m_damageDealer->fields.m_damageAmount *= shuriken_damage_multiplier.get<float>();
    }

    IL2CPP_INTERCEPT(SeinChakramSpell, void, ReleaseProjectileSingle, (app::SeinChakramSpell * this_ptr, float angle_offset)) {
        auto original_projectile = this_ptr->fields.m_projectile;
        next::SeinChakramSpell::ReleaseProjectileSingle(this_ptr, angle_offset);
        auto direction = original_projectile->fields._._Direction_k__BackingField;
        auto angle = MoonMath_Angle::AngleFromVector(app::Vector2(direction.x, direction.y));

        auto spread = shuriken_multishot_spread.get<float>();  // degrees
        auto count = shuriken_multishot_count.get<int>();
        for (int i = 1; i <= count; ++i) {
            core::events::schedule_task(0.05f * (1 + static_cast<float>(i / 2)), [=]() {
                throw_shuriken(
                    this_ptr,
                    angle +
                    (
                        static_cast<float>((i + 1) / 2) *
                        (
                            spread / static_cast<float>(count) *
                            (i % 2 == 0 ? 1.f : -1.f)
                        )
                    )
                );
            });
        }
    }
} // namespace
