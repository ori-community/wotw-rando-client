#include <dll_main.h>
#include <macros.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>

#include <vector>
#include <unordered_map>

using namespace modloader;

namespace
{
    std::unordered_map<app::AbilityType__Enum, std::vector<float>> initial_costs;
}

INJECT_C_DLLEXPORT void set_ability_energy_modifier(const app::AbilityType__Enum ability , const float modifier)
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
