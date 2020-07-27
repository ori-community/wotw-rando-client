#include <macros.h>
/*
namespace
{
    std::unordered_map<app::AbilityType__Enum, float> initial_costs;

}

INJECT_C_DLLEXPORT void set_ability_energy_modifier(app::AbilityType__Enum ability , float modifier)
{
    auto it = initial_costs.find(ability);
    switch (ability)
    {
    case app::AbilityType__Enum_Blaze:
    {
        auto blaze = get_sein()->fields.Spells->fields.BlazeSpellWrapper;
        if (blaze->fields.HasState)
        {
            if (it == initial_costs.end())
                initial_costs[ability] = blaze->fields.State->fields.Balancing->fields.EnergyCost;

            blaze->fields.State->fields.EnergyCost = initial_costs[ability] * modifier;
        }
        break;
    }
    case app::AbilityType__Enum_SpiritSentrySpell:
    {
        auto sentry = get_sein()->fields.Spells->fields.SpiritSentrySpell;
        if (it == initial_costs.end())
            initial_costs[ability] = sentry->fields.Balancing->fields.EnergyCost;

        sentry->fields.EnergyCost = initial_costs[ability] * modifier;
        break;
    }
    case app::AbilityType__Enum_SpiritSpearSpell:
    {
        auto spear = get_sein()->fields.Spells->fields.SpiritSpearSpellWrapper;
        if (spear->fields.HasState)
        {
            if (it == initial_costs.end())
                initial_costs[ability] = spear->fields.State->fields.Balancing->fields.EnergyCost;

            spear->fields.State->fields.EnergyCost = initial_costs[ability] * modifier;
        }
        break;
    }
    default:
        trace(MessageType::Warning, 2, "pickups", format("tried to set energy modifier on unsupported ability '%d'", ability)));
        break;
    }
}
*/