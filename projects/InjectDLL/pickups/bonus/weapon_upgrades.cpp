#include <dll_main.h>
#include <macros.h>

#include <Common/ext.h>
#include <Il2CppModLoader/common.h>

#include <unordered_map>

using namespace modloader;

namespace
{
    std::unordered_map<app::AbilityType__Enum, float> initial_costs;
    struct BlazeCost
    {
        bool set = false;
        float level_one;
        float level_one_full;
        float level_two;
        float level_two_full;
        float level_three;
        float level_three_full;
    };

    BlazeCost initial_blaze_cost;
}

INJECT_C_DLLEXPORT void set_ability_energy_modifier(const app::AbilityType__Enum ability , const float modifier)
{
    const auto it = initial_costs.find(ability);
    switch (ability)
    {
    case app::AbilityType__Enum_Blaze:
    {
        auto* const blaze = get_sein()->fields.Spells->fields.BlazeSpellWrapper;
        if (blaze->fields.HasState)
        {
            auto* const balance = blaze->fields.State->fields.Balancing;
            if (!initial_blaze_cost.set)
            {
                initial_blaze_cost.level_one = balance->fields.BlazeSettingsLevel1->fields.BlazeCost;
                initial_blaze_cost.level_one_full = balance->fields.BlazeSettingsLevel1->fields.FullBlazeCost;
                initial_blaze_cost.level_two = balance->fields.BlazeSettingsLevel2->fields.BlazeCost;
                initial_blaze_cost.level_two_full = balance->fields.BlazeSettingsLevel2->fields.FullBlazeCost;
                initial_blaze_cost.level_three = balance->fields.BlazeSettingsLevel3->fields.BlazeCost;
                initial_blaze_cost.level_three_full = balance->fields.BlazeSettingsLevel3->fields.FullBlazeCost;
                initial_blaze_cost.set = true;
            }

            balance->fields.BlazeSettingsLevel1->fields.BlazeCost = initial_blaze_cost.level_one * modifier;
            balance->fields.BlazeSettingsLevel1->fields.FullBlazeCost = initial_blaze_cost.level_one_full * modifier;
            balance->fields.BlazeSettingsLevel2->fields.BlazeCost = initial_blaze_cost.level_two * modifier;
            balance->fields.BlazeSettingsLevel2->fields.FullBlazeCost = initial_blaze_cost.level_two_full * modifier;
            balance->fields.BlazeSettingsLevel3->fields.BlazeCost = initial_blaze_cost.level_three * modifier;
            balance->fields.BlazeSettingsLevel3->fields.FullBlazeCost = initial_blaze_cost.level_three_full * modifier;
        }
        break;
    }
    case app::AbilityType__Enum_SpiritSentrySpell:
    {
        auto* const sentry = get_sein()->fields.Spells->fields.SpiritSentrySpell;
        if (it == initial_costs.end())
            initial_costs[ability] = sentry->fields.Balancing->fields.EnergyCost;

        sentry->fields.Balancing->fields.EnergyCost = initial_costs[ability] * modifier;
        break;
    }
    case app::AbilityType__Enum_SpiritSpearSpell:
    {
        auto* const spear = get_sein()->fields.Spells->fields.SpiritSpearSpellWrapper;
        if (spear->fields.HasState)
        {
            if (it == initial_costs.end())
                initial_costs[ability] = spear->fields.State->fields.Balancing->fields.EnergyCost;

            spear->fields.State->fields.EnergyCost = initial_costs[ability] * modifier;
        }
        break;
    }
    default:
        trace(MessageType::Warning, 2, "pickups", format("tried to set energy modifier on unsupported ability '%d'", ability));
        break;
    }
}
