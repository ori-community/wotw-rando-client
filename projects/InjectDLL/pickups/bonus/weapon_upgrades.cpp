#include <dll_main.h>
#include <macros.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/math.h>

#include <vector>
#include <unordered_map>

using namespace modloader;

namespace
{
    std::unordered_map<app::AbilityType__Enum, std::vector<float>> initial_costs;

    IL2CPP_BINDING(UnityEngine, Transform, app::Vector3, get_position, (app::Transform* this_ptr));

    IL2CPP_BINDING(, SeinCharacter, app::Vector3, get_Position, (app::SeinCharacter* this_ptr));

    NAMED_IL2CPP_BINDING(, Damage, void, .ctor, ctor, (app::Damage* this_ptr, float amount, app::Vector2 force, app::Vector3 position,
        app::DamageType__Enum type, app::AbilityType__Enum abilityType, app::GameObject* sender, int damageID, app::DamageOwner* owner,
        app::SpiritShardType__Enum shardType, bool ignoreKickback, app::DamageWeight__Enum weight, float speedTransfer, bool bypassPlayersInvincibility));

    IL2CPP_BINDING(, Damage, void, DealToComponents, (app::Damage* this_ptr, app::GameObject* go));

    STATIC_IL2CPP_BINDING(
        UnityEngine,
        Physics,
        app::Collider__Array*,
        OverlapSphere,
        (app::Vector3 position, float radius, unsigned int layerMask, app::QueryTriggerInteraction__Enum queryTriggerInteraction)
    );

    IL2CPP_INTERCEPT(, SeinBlazeSpell, void, DealBlazeDamage, (app::SeinBlazeSpell* this_ptr, float range, float initial_damage, app::DamageWeight__Enum weight))
    {
        auto* const sein = get_sein();
        const auto source_pos = SeinCharacter::get_Position(sein);

        auto* const physics = il2cpp::get_class<app::Physics__Class>("UnityEngine", "Physics");
        auto* const colliders = Physics::OverlapSphere(source_pos, range, 0xffffffff, app::QueryTriggerInteraction__Enum_Collide);
        for (auto i = 0; i < colliders->max_length; ++i)
        {
            auto* const collider = colliders->vector[i];
            auto* const go = il2cpp::unity::get_game_object(collider);
            if (!il2cpp::unity::get_components(go, "", "SeinDamageReciever").empty())
                continue;
            if (!il2cpp::unity::get_components(go, "", "SeinCharacter").empty())
                continue;

            // Damage
            console::console_send(il2cpp::unity::get_object_name(go));
            auto* const damage = il2cpp::create_object<app::Damage>("", "Damage");
            Damage::ctor(
                damage,
                initial_damage,
                app::Vector2{ 0, 0 },
                source_pos,
                app::DamageType__Enum_Grenade,
                app::AbilityType__Enum_Grenade,
                il2cpp::unity::get_game_object(sein),
                -1,
                nullptr,
                app::SpiritShardType__Enum_None,
                true,
                weight,
                0,
                false
            );

            damage->fields.DamageLayerMask = app::DamageLayerMask__Enum_EnemyAndEnvironment;
            Damage::DealToComponents(damage, go);

            // Flames
            auto flammables = il2cpp::unity::get_components(go, "Moon", "Flammable");
            auto state = app::Flammable_FlameState__Enum_Burning;
            for (auto* const flammable : flammables)
            {
                const auto current = il2cpp::invoke<app::Flammable_FlameState__Enum__Boxed>(flammable, "get_State")->value;
                if (current != state)
                    il2cpp::invoke(flammable, "SetState", &state);
            }
        }
    }
}

INJECT_C_DLLEXPORT void set_ability_energy_modifier(const app::AbilityType__Enum ability, const float modifier)
{
    const auto found = initial_costs.find(ability) != initial_costs.end();
    auto& cost = initial_costs[ability];
    switch (ability)
    {
    case app::AbilityType__Enum_Blaze:
        {
            auto* const blaze = get_sein()->fields.Spells->fields.BlazeSpellWrapper;
            if (blaze->fields.HasState)
            {
                auto* const balance = blaze->fields.State->fields.Balancing;
                if (!found)
                {
                    cost.push_back(balance->fields.BlazeSettingsLevel1->fields.BlazeCost);
                    cost.push_back(balance->fields.BlazeSettingsLevel1->fields.FullBlazeCost);
                    cost.push_back(balance->fields.BlazeSettingsLevel2->fields.BlazeCost);
                    cost.push_back(balance->fields.BlazeSettingsLevel2->fields.FullBlazeCost);
                    cost.push_back(balance->fields.BlazeSettingsLevel3->fields.BlazeCost);
                    cost.push_back(balance->fields.BlazeSettingsLevel3->fields.FullBlazeCost);
                }

                balance->fields.BlazeSettingsLevel1->fields.BlazeCost = cost[0] * modifier;
                balance->fields.BlazeSettingsLevel1->fields.FullBlazeCost = cost[1] * modifier;
                balance->fields.BlazeSettingsLevel2->fields.BlazeCost = cost[2] * modifier;
                balance->fields.BlazeSettingsLevel2->fields.FullBlazeCost = cost[3] * modifier;
                balance->fields.BlazeSettingsLevel3->fields.BlazeCost = cost[4] * modifier;
                balance->fields.BlazeSettingsLevel3->fields.FullBlazeCost = cost[5] * modifier;
            }
            break;
        }
    case app::AbilityType__Enum_SpiritSentrySpell:
        {
            auto* const sentry = get_sein()->fields.Spells->fields.SpiritSentrySpell;
            if (!found)
                cost.push_back(sentry->fields.Balancing->fields.EnergyCost);

            sentry->fields.Balancing->fields.EnergyCost = cost[0] * modifier;
            break;
        }
    case app::AbilityType__Enum_SpiritSpearSpell:
        {
            auto* const spear = get_sein()->fields.Spells->fields.SpiritSpearSpellWrapper;
            if (spear->fields.HasState)
            {
                if (!found)
                    cost.push_back(spear->fields.State->fields.Balancing->fields.EnergyCost);

                spear->fields.State->fields.EnergyCost = initial_costs[ability][0] * modifier;
            }
            break;
        }
    case app::AbilityType__Enum_ChakramSpell:
        {
            auto* const shuriken = get_sein()->fields.Spells->fields.ChakramSpellWrapper;
            if (shuriken->fields.HasState)
            {
                auto& cost = initial_costs[ability];
                if (!found)
                {
                    cost.push_back(shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel1->fields.EnergyCost);
                    cost.push_back(shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel2->fields.EnergyCost);
                }

                shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel1->fields.EnergyCost = cost[0] * modifier;
                shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel2->fields.EnergyCost = cost[1] * modifier;
            }
            break;
        }
    default:
        trace(MessageType::Warning, 2, "pickups", format("tried to set energy modifier on unsupported ability '%d'", ability));
        break;
    }
}
