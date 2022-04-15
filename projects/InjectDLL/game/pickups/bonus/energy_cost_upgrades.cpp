#include <macros.h>
#include <game/player.h>
#include <uber_states/uber_state_interface.h>

#include <Il2CppModLoader/interception_macros.h>

#include <vector>
#include <unordered_map>

using namespace modloader;

namespace
{
    std::unordered_map<app::AbilityType__Enum, std::vector<float>> initial_costs;
    uber_states::UberState blaze_cost(UberStateGroup::RandoUpgrade, 2);
    uber_states::UberState spear_cost(UberStateGroup::RandoUpgrade, 3);
    uber_states::UberState shuriken_cost(UberStateGroup::RandoUpgrade, 4);
    uber_states::UberState sentry_cost(UberStateGroup::RandoUpgrade, 5);
    uber_states::UberState bow_cost(UberStateGroup::RandoUpgrade, 6);
    uber_states::UberState regeneration_cost(UberStateGroup::RandoUpgrade, 7);
    uber_states::UberState flash_cost(UberStateGroup::RandoUpgrade, 8);
    uber_states::UberState grenade_cost(UberStateGroup::RandoUpgrade, 9);

    void update_blaze(float modifier)
    {
        auto& cost = initial_costs[app::AbilityType__Enum_Blaze];
        auto* sein = game::player::sein();
        if (sein == nullptr)
            return;

        auto* const blaze = sein->fields.Spells->fields.BlazeSpellWrapper;
        if (!blaze->fields.HasState)
            return;

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

    void update_sentry(float modifier)
    {
        auto& cost = initial_costs[app::AbilityType__Enum_TurretSpell];
        auto* sein = game::player::sein();
        if (sein == nullptr)
            return;

        auto* const sentry = sein->fields.Spells->fields.TurretSpell;
        if (sentry == nullptr)
            return;

        if (cost.empty())
            cost.push_back(sentry->fields.BalancingData->fields.EnergyCost);

        sentry->fields.BalancingData->fields.EnergyCost = cost[0] * modifier;
    }

    void update_spike(float modifier)
    {
        auto& cost = initial_costs[app::AbilityType__Enum_SpiritSpearSpell];
        auto* sein = game::player::sein();
        if (sein == nullptr)
            return;

        auto* const spear = sein->fields.Spells->fields.SpiritSpearSpellWrapper;
        if (!spear->fields.HasState)
            return;

        if (cost.empty())
            cost.push_back(spear->fields.State->fields.Balancing->fields.EnergyCost);

        spear->fields.State->fields.Balancing->fields.EnergyCost = cost[0] * modifier;
        // Is this even used?
        spear->fields.State->fields.EnergyCost = cost[0] * modifier;
    }

    void update_shuriken(float modifier)
    {
        auto& cost = initial_costs[app::AbilityType__Enum_ChakramSpell];
        auto* sein = game::player::sein();
        if (sein == nullptr)
            return;

        auto* const shuriken = sein->fields.Spells->fields.ChakramSpellWrapper;
        if (!shuriken->fields.HasState)
            return;

        if (cost.empty())
        {
            cost.push_back(shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel1->fields.EnergyCost);
            cost.push_back(shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel2->fields.EnergyCost);
        }

        shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel1->fields.EnergyCost = cost[0] * modifier;
        shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel2->fields.EnergyCost = cost[1] * modifier;
    }

    void update_bow(float modifier)
    {
        auto& cost = initial_costs[app::AbilityType__Enum_Bow];
        auto* sein = game::player::sein();
        if (sein == nullptr)
            return;

        auto* const bow = sein->fields.Abilities->fields.BowWrapper;
        if (!bow->fields.HasState)
            return;

        if (cost.empty())
        {
            cost.push_back(bow->fields.State->fields.Balancing->fields.ArrowEnergyCost);
            cost.push_back(bow->fields.State->fields.Balancing->fields.ChargeShotEnergyCost);
        }

        bow->fields.State->fields.Balancing->fields.ArrowEnergyCost = cost[0] * modifier;
        bow->fields.State->fields.Balancing->fields.ChargeShotEnergyCost = cost[1] * modifier;
    }

    void update_regeneration(float modifier)
    {
        auto& cost = initial_costs[app::AbilityType__Enum_MeditateSpell];
        auto* sein = game::player::sein();
        if (sein == nullptr)
            return;

        auto* const meditate = sein->fields.Spells->fields.MeditateSpellWrapper;
        if (!meditate->fields.HasState)
            return;

        if (cost.empty())
        {
            cost.push_back(meditate->fields.State->fields.Balancing->fields.m_energyPerHeal);
            cost.push_back(meditate->fields.State->fields.Balancing->fields.EnergyPerFullHeal);
        }

        meditate->fields.State->fields.Balancing->fields.m_energyPerHeal = cost[0] * modifier;
        meditate->fields.State->fields.Balancing->fields.EnergyPerFullHeal = cost[1] * modifier;
    }

    void update_flash(float modifier)
    {
        auto& cost = initial_costs[app::AbilityType__Enum_GlowSpell];
        auto* sein = game::player::sein();
        if (sein == nullptr)
            return;

        auto* const flash = sein->fields.Spells->fields.GlowWrapper;
        if (!flash->fields.HasState)
            return;

        if (cost.empty())
        {
            cost.push_back(flash->fields.State->fields.Balancing->fields.QuickGlowEnergyDrainPerSecond);
            cost.push_back(flash->fields.State->fields.Balancing->fields.QuickGlowEnergyCost);
            cost.push_back(flash->fields.State->fields.Balancing->fields.FullGlowEnergyCost);
        }

        flash->fields.State->fields.Balancing->fields.QuickGlowEnergyDrainPerSecond = cost[0] * modifier;
        flash->fields.State->fields.Balancing->fields.QuickGlowEnergyCost = cost[1] * modifier;
        flash->fields.State->fields.Balancing->fields.FullGlowEnergyCost = cost[2] * modifier;
    }

    void update_grenade(float modifier)
    {
        auto& cost = initial_costs[app::AbilityType__Enum_Grenade];
        auto* sein = game::player::sein();
        if (sein != nullptr)
        {
            auto* const grenade = sein->fields.Abilities->fields.GrenadeWrapper;
            if (grenade->fields.HasState)
            {
                if (cost.empty())
                    cost.push_back(grenade->fields.State->fields.Balancing->fields.EnergyCost);

                grenade->fields.State->fields.Balancing->fields.EnergyCost = cost[0] * modifier;
            }
        }
    }
}

INJECT_C_DLLEXPORT void refresh_ability_energy_modifiers()
{
    update_blaze(blaze_cost.get<float>());
    update_spike(spear_cost.get<float>());
    update_shuriken(shuriken_cost.get<float>());
    update_sentry(sentry_cost.get<float>());
    update_bow(bow_cost.get<float>());
    update_regeneration(regeneration_cost.get<float>());
    update_flash(flash_cost.get<float>());
    update_grenade(grenade_cost.get<float>());
}
