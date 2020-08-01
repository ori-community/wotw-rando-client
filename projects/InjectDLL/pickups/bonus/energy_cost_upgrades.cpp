#include <dll_main.h>
#include <macros.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>

#include <vector>
#include <unordered_map>
#include <Il2CppModLoader/console.h>

using namespace modloader;
using namespace console;

INJECT_C_DLLEXPORT void set_ability_energy_modifier(app::AbilityType__Enum ability, float modifier);

namespace
{
    std::unordered_map<app::AbilityType__Enum, std::vector<float>> initial_costs;

    void set_ability_cost_modifier(std::string const& name, std::vector<CommandParam> const& params)
    {
        if (params.size() != 2)
            return;
        
        int ability = 0;
        if (!try_get_int(params[0], ability))
            console_send("failed to parse ability");

        float modifier = 0;
        if (!try_get_float(params[1], modifier))
            console_send("failed to parse modifier");

        set_ability_energy_modifier(static_cast<app::AbilityType__Enum>(ability), modifier);
    }

    void initialize()
    {
        register_command({ "upgrade", "set_ability_cost_modifier" }, set_ability_cost_modifier);
    }

    CALL_ON_INIT(initialize);
}

INJECT_C_DLLEXPORT void set_ability_energy_modifier(const app::AbilityType__Enum ability, const float modifier)
{
    auto& cost = initial_costs[ability];
    switch (ability)
    {
    case app::AbilityType__Enum_Blaze:
        {
            auto* const blaze = get_sein()->fields.Spells->fields.BlazeSpellWrapper;
            if (blaze->fields.HasState)
            {
                auto* const balance = blaze->fields.State->fields.Balancing;
                if (cost.empty())
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
    case app::AbilityType__Enum_TurretSpell:
        {
            auto* const sentry = get_sein()->fields.Spells->fields.TurretSpell;
            if (sentry != nullptr)
            {
                if (cost.empty())
                    cost.push_back(sentry->fields.BalancingData->fields.EnergyCost);

                sentry->fields.BalancingData->fields.EnergyCost = cost[0] * modifier;
            }
            break;
        }
    case app::AbilityType__Enum_SpiritSpearSpell:
        {
            auto* const spear = get_sein()->fields.Spells->fields.SpiritSpearSpellWrapper;
            if (spear->fields.HasState)
            {
                if (cost.empty())
                    cost.push_back(spear->fields.State->fields.Balancing->fields.EnergyCost);

                spear->fields.State->fields.Balancing->fields.EnergyCost = initial_costs[ability][0] * modifier;
                // Is this even used?
                spear->fields.State->fields.EnergyCost = initial_costs[ability][0] * modifier;
            }
            break;
        }
    case app::AbilityType__Enum_ChakramSpell:
        {
            auto* const shuriken = get_sein()->fields.Spells->fields.ChakramSpellWrapper;
            if (shuriken->fields.HasState)
            {
                if (cost.empty())
                {
                    cost.push_back(shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel1->fields.EnergyCost);
                    cost.push_back(shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel2->fields.EnergyCost);
                }
            
                shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel1->fields.EnergyCost = cost[0] * modifier;
                shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel2->fields.EnergyCost = cost[1] * modifier;
            }
            break;
        }
    case app::AbilityType__Enum_Bow:
        {
            auto* const bow = get_sein()->fields.Abilities->fields.BowWrapper;
            if (bow->fields.HasState)
            {
                if (cost.empty())
                {
                    cost.push_back(bow->fields.State->fields.Balancing->fields.ArrowEnergyCost);
                    cost.push_back(bow->fields.State->fields.Balancing->fields.ChargeShotEnergyCost);
                }
            
                bow->fields.State->fields.Balancing->fields.ArrowEnergyCost = cost[0] * modifier;
                bow->fields.State->fields.Balancing->fields.ChargeShotEnergyCost = cost[1] * modifier;
            }
            break;
        }
    case app::AbilityType__Enum_MeditateSpell:
        {
            auto* const meditate = get_sein()->fields.Spells->fields.MeditateSpellWrapper;
            if (meditate->fields.HasState)
            {
                if (cost.empty())
                {
                    cost.push_back(meditate->fields.State->fields.Balancing->fields.m_energyPerHeal);
                    cost.push_back(meditate->fields.State->fields.Balancing->fields.EnergyPerFullHeal);
                }
            
                meditate->fields.State->fields.Balancing->fields.m_energyPerHeal = cost[0] * modifier;
                meditate->fields.State->fields.Balancing->fields.EnergyPerFullHeal = cost[1] * modifier;
            }
            break;
        }
    case app::AbilityType__Enum_GlowSpell:
        {
            auto* const flash = get_sein()->fields.Spells->fields.GlowWrapper;
            if (flash != nullptr)
            {
                if (cost.empty())
                {
                    cost.push_back(flash->fields.State->fields.Balancing->fields.QuickGlowEnergyDrainPerSecond);
                    cost.push_back(flash->fields.State->fields.Balancing->fields.QuickGlowEnergyCost);
                    cost.push_back(flash->fields.State->fields.Balancing->fields.FullGlowEnergyCost);
                }
            
                flash->fields.State->fields.Balancing->fields.QuickGlowEnergyDrainPerSecond= cost[0] * modifier;
                flash->fields.State->fields.Balancing->fields.QuickGlowEnergyCost = cost[1] * modifier;
                flash->fields.State->fields.Balancing->fields.FullGlowEnergyCost = cost[2] * modifier;
            }
            break;
        }
    case app::AbilityType__Enum_Grenade:
        {
            auto* const grenade = get_sein()->fields.Abilities->fields.GrenadeWrapper;
            if (grenade->fields.HasState)
            {
                if (cost.empty())
                    cost.push_back(grenade->fields.State->fields.Balancing->fields.EnergyCost);
            
                grenade->fields.State->fields.Balancing->fields.EnergyCost = cost[0] * modifier;
            }
            break;
        }
    default:
        trace(MessageType::Warning, 2, "pickups", format("tried to set energy modifier on unsupported ability '%d'", ability));
        break;
    }
}
