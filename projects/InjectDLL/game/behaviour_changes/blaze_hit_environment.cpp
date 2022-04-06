#include <game/player.h>

#include <Common/ext.h>

#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/il2cpp_math.h>

#include <vector>
#include <unordered_set>

namespace
{
    IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_position, (app::Transform* this_ptr));

    IL2CPP_BINDING(, GameplayCamera, bool, IsOnScreen, (app::GameplayCamera* this_ptr, app::Vector3 pos));

    IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter* this_ptr));

    NAMED_IL2CPP_BINDING(, Damage, void, .ctor, ctor, (app::Damage* this_ptr, float amount, app::Vector2 force, app::Vector3 position,
        app::DamageType__Enum type, app::AbilityType__Enum abilityType, app::GameObject* sender, int damageID, app::DamageOwner* owner,
        app::SpiritShardType__Enum shardType, bool ignoreKickback, app::DamageWeight__Enum weight, float speedTransfer, bool bypassPlayersInvincibility));

    IL2CPP_BINDING_OVERLOAD(, Damage, void, DealToComponents, (app::Damage* this_ptr, app::GameObject* go), (UnityEngine:GameObject));

    STATIC_IL2CPP_BINDING(
        UnityEngine,
        Physics,
        app::Collider__Array*,
        OverlapSphere,
        (app::Vector3 position, float radius, int layer_mask, app::QueryTriggerInteraction__Enum query_trigger_interaction)
    );

    bool default_blaze = false;

    STATIC_IL2CPP_BINDING(, Damage, int, GetNewDamageID, ());
    IL2CPP_INTERCEPT(, SeinBlazeSpell, void, DealBlazeDamage, (app::SeinBlazeSpell* this_ptr, float range, float initial_damage, app::DamageWeight__Enum weight))
    {
        if (default_blaze)
        {
            SeinBlazeSpell::DealBlazeDamage(this_ptr, range, initial_damage, weight);
            return;
        }

        auto* sein = game::player::sein();
        const auto source_pos = SeinCharacter::get_Position(sein);

        // Damage
        const auto damage_id = Damage::GetNewDamageID();

        auto* const camera = il2cpp::get_nested_class<app::UI_Cameras__Class>("Game", "UI", "Cameras")->static_fields->Current;
        auto* const colliders = Physics::OverlapSphere(source_pos, range < 0 ? 150 : range, 0xfffffff, app::QueryTriggerInteraction__Enum_Collide);
        for (auto i = 0; i < colliders->max_length; ++i)
        {
            auto* const collider = colliders->vector[i];
            auto* const go = il2cpp::unity::get_game_object(collider);
            auto* const transform = il2cpp::unity::get_transform(go);
            const auto pos = Transform::get_position(transform);
            if (range < 0)
            {
                if (!GameplayCamera::IsOnScreen(camera, pos))
                    continue;
            }

            const auto direction = modloader::math::direction(source_pos, pos);
            auto* const damage = il2cpp::create_object<app::Damage>("", "Damage");
            Damage::ctor(
                damage,
                initial_damage,
                app::Vector2{ direction.x, direction.y },
                source_pos,
                app::DamageType__Enum_Blaze,
                app::AbilityType__Enum_Blaze,
                il2cpp::unity::get_game_object(sein),
                damage_id,
                sein->fields._DamageOwner_k__BackingField,
                app::SpiritShardType__Enum_None,
                false,
                weight,
                2.f,
                false
            );
            damage->fields.DamageLayerMask = app::DamageLayerMask__Enum_EnemyAndEnvironment;

            Damage::DealToComponents(damage, go);
        }
    }
}
