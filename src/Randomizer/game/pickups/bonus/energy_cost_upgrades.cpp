#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/modloader.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <unordered_map>
#include <vector>


using namespace modloader;

namespace {
    auto& blaze_cost = randomizer::uber_states::state<"bonusUpgrades", "blazeCost">();
    auto& charge_blaze_cost = randomizer::uber_states::state<"bonusUpgrades", "chargeBlazeCost">();
    auto& spear_cost = randomizer::uber_states::state<"bonusUpgrades", "spearCost">();
    auto& shuriken_cost = randomizer::uber_states::state<"bonusUpgrades", "shurikenCost">();
    auto& sentry_cost = randomizer::uber_states::state<"bonusUpgrades", "sentryCost">();
    auto& bow_cost = randomizer::uber_states::state<"bonusUpgrades", "bowCost">();
    auto& charged_bow_cost = randomizer::uber_states::state<"bonusUpgrades", "chargedBowCost">();
    auto& regeneration_cost = randomizer::uber_states::state<"bonusUpgrades", "regenerateCost">();
    auto& flash_initial_cost = randomizer::uber_states::state<"bonusUpgrades", "flashCostInitial">();
    auto& flash_per_second_cost = randomizer::uber_states::state<"bonusUpgrades", "flashCostPerSecond">();
    auto& grenade_cost = randomizer::uber_states::state<"bonusUpgrades", "grenadeCost">();
    auto& blaze_skill = randomizer::uber_states::state<"skills", "blaze">();
    auto& spear_skill = randomizer::uber_states::state<"skills", "spear">();
    auto& shuriken_skill = randomizer::uber_states::state<"skills", "spear">();
    auto& sentry_skill = randomizer::uber_states::state<"skills", "spear">();
    auto& bow_skill = randomizer::uber_states::state<"skills", "spear">();
    auto& regenerate_skill = randomizer::uber_states::state<"skills", "spear">();
    auto& flash_skill = randomizer::uber_states::state<"skills", "spear">();
    auto& grenade_skill = randomizer::uber_states::state<"skills", "spear">();


    void update_blaze() {
        const auto sein = core::api::game::player::sein();
        if (sein == nullptr) {
            return;
        }

        const auto blaze = sein->fields.Spells->fields.BlazeSpellWrapper;
        if (!blaze->fields.HasState) {
            return;
        }

        const auto balance = blaze->fields.State->fields.Balancing;
        balance->fields.BlazeSettingsLevel1->fields.BlazeCost = blaze_cost.get();
        balance->fields.BlazeSettingsLevel1->fields.FullBlazeCost = charge_blaze_cost.get();
    }

    void update_sentry() {
        const auto sein = core::api::game::player::sein();
        if (sein == nullptr) {
            return;
        }

        const auto sentry = sein->fields.Spells->fields.TurretSpell;
        if (sentry == nullptr) {
            return;
        }

        sentry->fields.BalancingData->fields.EnergyCost = sentry_cost.get();
    }

    void update_spear() {
        const auto sein = core::api::game::player::sein();
        if (sein == nullptr) {
            return;
        }

        const auto spear = sein->fields.Spells->fields.SpiritSpearSpellWrapper;
        if (!spear->fields.HasState) {
            return;
        }

        spear->fields.State->fields.Balancing->fields.EnergyCost = spear_cost.get();
    }

    void update_shuriken() {
        const auto sein = core::api::game::player::sein();
        if (sein == nullptr) {
            return;
        }

        const auto shuriken = sein->fields.Spells->fields.ChakramSpellWrapper;
        if (!shuriken->fields.HasState) {
            return;
        }

        const auto cost = shuriken_cost.get();
        shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel1->fields.EnergyCost = cost;
        shuriken->fields.State->fields.Balancing->fields.ChakramSettingsLevel2->fields.EnergyCost = cost;
    }

    void update_bow() {
        const auto sein = core::api::game::player::sein();
        if (sein == nullptr) {
            return;
        }

        const auto bow = sein->fields.Abilities->fields.BowWrapper;
        if (!bow->fields.HasState) {
            return;
        }

        bow->fields.State->fields.Balancing->fields.ArrowEnergyCost = bow_cost.get();
        bow->fields.State->fields.Balancing->fields.ChargeShotEnergyCost = charged_bow_cost.get();
    }

    void update_regenerate() {
        const auto sein = core::api::game::player::sein();
        if (sein == nullptr) {
            return;
        }

        const auto meditate = sein->fields.Spells->fields.MeditateSpellWrapper;
        if (!meditate->fields.HasState) {
            return;
        }

        const auto cost = regeneration_cost.get();
        meditate->fields.State->fields.Balancing->fields.m_energyPerHeal = cost;
        meditate->fields.State->fields.Balancing->fields.EnergyPerFullHeal = cost;
    }

    void update_flash() {
        const auto sein = core::api::game::player::sein();
        if (sein == nullptr) {
            return;
        }

        const auto flash = sein->fields.Spells->fields.GlowWrapper;
        if (!flash->fields.HasState) {
            return;
        }

        flash->fields.State->fields.Balancing->fields.QuickGlowEnergyCost = flash_initial_cost.get();
        flash->fields.State->fields.Balancing->fields.QuickGlowEnergyDrainPerSecond = flash_per_second_cost.get();
    }

    void update_grenade() {
        const auto sein = core::api::game::player::sein();
        if (sein == nullptr) {
            return;
        }

        const auto grenade = sein->fields.Abilities->fields.GrenadeWrapper;
        if (!grenade->fields.HasState) {
            return;
        }

        grenade->fields.State->fields.Balancing->fields.EnergyCost = grenade_cost.get();
    }

    std::vector<core::reactivity::ReactiveEffect::ptr_t> effects;

    [[maybe_unused]]
    auto on_game_ready = event_bus().on<modloader::events::GameReady>([](auto) {
        core::reactivity::watch_effect()
                .effect({blaze_skill, blaze_cost, charge_blaze_cost})
                .after([&] { update_blaze(); })
                .trigger_on_load()
                .finalize(effects);

        core::reactivity::watch_effect()
                .effect({spear_skill, spear_cost})
                .after([&] { update_spear(); })
                .trigger_on_load()
                .finalize(effects);

        core::reactivity::watch_effect()
                .effect({shuriken_skill, shuriken_cost})
                .after([&] { update_shuriken(); })
                .trigger_on_load()
                .finalize(effects);

        core::reactivity::watch_effect()
                .effect({sentry_skill, sentry_cost})
                .after([&] { update_sentry(); })
                .trigger_on_load()
                .finalize(effects);

        core::reactivity::watch_effect()
                .effect({bow_skill, bow_cost, charged_bow_cost})
                .after([&] { update_bow(); })
                .trigger_on_load()
                .finalize(effects);

        core::reactivity::watch_effect()
                .effect({regenerate_skill, regeneration_cost})
                .after([&] { update_regenerate(); })
                .trigger_on_load()
                .finalize(effects);

        core::reactivity::watch_effect()
                .effect({flash_skill, flash_initial_cost, flash_per_second_cost})
                .after([&] { update_flash(); })
                .trigger_on_load()
                .finalize(effects);

        core::reactivity::watch_effect()
                .effect({grenade_skill, grenade_cost})
                .after([&] { update_grenade(); })
                .trigger_on_load()
                .finalize(effects);
    });
} // namespace
