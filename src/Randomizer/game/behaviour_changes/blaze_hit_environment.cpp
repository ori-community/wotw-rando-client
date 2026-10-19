#include <Core/api/game/player.h>

#include <Modloader/app/methods/Damage.h>
#include <Modloader/app/methods/GameplayCamera.h>
#include <Modloader/app/methods/SeinBlazeSpell.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/UnityEngine/Physics.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/Damage.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/interception_macros.h>

using namespace app::classes;

namespace {
    constexpr bool default_blaze = false;

    IL2CPP_INTERCEPT(void, SeinBlazeSpell, DealBlazeDamage, app::SeinBlazeSpell * this_ptr, float range, float initial_damage, app::DamageWeight__Enum weight) {
        if (default_blaze) {
            next::SeinBlazeSpell::DealBlazeDamage(this_ptr, range, initial_damage, weight);
            return;
        }

        auto* sein = core::api::game::player::sein();
        const auto source_pos = SeinCharacter::get_Position(sein);

        // Damage
        const auto damage_id = Damage::GetNewDamageID();
        const auto camera = types::UI_Cameras::get_class()->static_fields->Current;
        auto* colliders = UnityEngine::Physics::OverlapSphere_1(source_pos, range < 0 ? 150 : range, 0xfffffff, app::QueryTriggerInteraction__Enum::Collide);
        for (auto collider: il2cpp::ArrayIterator(colliders)) {
            const auto go = il2cpp::unity::get_game_object(collider);
            const auto transform = il2cpp::unity::get_transform(go);
            const auto pos = UnityEngine::Transform::get_position(transform);
            if (range < 0 && !GameplayCamera::IsOnScreen(camera, pos)) {
                continue;
            }

            const auto direction = modloader::math::direction(source_pos, pos);
            const auto damage = types::Damage::create();
            Damage::ctor(
                damage,
                initial_damage,
                app::Vector2{direction.x, direction.y},
                source_pos,
                app::DamageType__Enum::Blaze,
                app::AbilityType__Enum::Blaze,
                il2cpp::unity::get_game_object(sein),
                damage_id,
                sein->fields._DamageOwner_k__BackingField,
                app::SpiritShardType__Enum::None,
                false,
                weight,
                2.f,
                false
            );

            damage->fields.DamageLayerMask = app::DamageLayerMask__Enum::EnemyAndEnvironment;
            Damage::DealToComponents_1(damage, go);
        }
    }
} // namespace
