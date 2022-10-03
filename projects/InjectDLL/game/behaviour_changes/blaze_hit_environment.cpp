#include <game/player.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/il2cpp_math.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Transform.h>
#include <Il2CppModLoader/app/methods/UnityEngine/Physics.h>
#include <Il2CppModLoader/app/methods/GameplayCamera.h>
#include <Il2CppModLoader/app/methods/SeinCharacter.h>
#include <Il2CppModLoader/app/methods/Damage.h>
#include <Il2CppModLoader/app/methods/SeinBlazeSpell.h>

using namespace app::classes;

namespace {
    constexpr bool default_blaze = false;

    IL2CPP_INTERCEPT(SeinBlazeSpell, void, DealBlazeDamage, (app::SeinBlazeSpell *
                                                             this_ptr, float range, float initial_damage, app::DamageWeight__Enum weight)) {
        if (default_blaze) {
            next::SeinBlazeSpell::DealBlazeDamage(this_ptr, range, initial_damage, weight);
            return;
        }

        auto *sein = game::player::sein();
        const auto source_pos = SeinCharacter::get_Position(sein);

        // Damage
        const auto damage_id = Damage::GetNewDamageID();

        auto *const camera = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI",
                                                                              "Cameras")->static_fields->Current;
        auto *const colliders = UnityEngine::Physics::OverlapSphere_1(source_pos, range < 0 ? 150 : range, 0xfffffff,
                                                                      app::QueryTriggerInteraction__Enum::Collide);
        for (auto i = 0; i < colliders->max_length; ++i) {
            auto *const collider = colliders->vector[i];
            auto *const go = il2cpp::unity::get_game_object(collider);
            auto *const transform = il2cpp::unity::get_transform(go);
            const auto pos = UnityEngine::Transform::get_position(transform);
            if (range < 0) {
                if (!GameplayCamera::IsOnScreen(camera, pos))
                    continue;
            }

            const auto direction = modloader::math::direction(source_pos, pos);
            auto *const damage = il2cpp::create_object<app::Damage>("", "Damage");
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
