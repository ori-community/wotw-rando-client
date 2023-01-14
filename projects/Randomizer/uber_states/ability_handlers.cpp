#include <Core/api/game/player.h>
#include <Core/api/uber_states/uber_state_handlers.h>

#include <Modloader/modloader.h>

namespace randomizer::uber_states {
    namespace {
        using namespace core::api::uber_states;

        void handle_ability(app::AbilityType__Enum type, bool value) {
            auto equip = core::api::game::player::ability_to_equip_type(type);
            if (!value && equip.has_value()) {
                core::api::game::player::unbind(equip.value());
            }

            core::api::game::player::set_ability(type, value);
            if (equip.has_value()) {
                core::api::game::player::set_equipment(equip.value(), value);
            }
        }

        std::vector<common::registration_handle> handlers;
        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            std::vector<std::tuple<UberState, app::AbilityType__Enum>> abilities = {
                { UberState(6, 1000), app::AbilityType__Enum::Bash },
                { UberState(6, 1003), app::AbilityType__Enum::WallJump },
                { UberState(6, 1005), app::AbilityType__Enum::DoubleJump },
                { UberState(6, 1008), app::AbilityType__Enum::Launch },
                { UberState(6, 1014), app::AbilityType__Enum::Glide },
                { UberState(6, 1023), app::AbilityType__Enum::WaterBreath },
                { UberState(6, 1051), app::AbilityType__Enum::Grenade },
                { UberState(6, 1057), app::AbilityType__Enum::SpiritLeash },
                { UberState(6, 1062), app::AbilityType__Enum::GlowSpell },
                { UberState(6, 1074), app::AbilityType__Enum::SpiritSpearSpell },
                { UberState(6, 1077), app::AbilityType__Enum::Regenerate },
                { UberState(6, 1097), app::AbilityType__Enum::Bow },
                { UberState(6, 1098), app::AbilityType__Enum::Hammer },
                { UberState(6, 1099), app::AbilityType__Enum::Torch },
                { UberState(6, 1100), app::AbilityType__Enum::Sword },
                { UberState(6, 1101), app::AbilityType__Enum::Digging },
                { UberState(6, 1102), app::AbilityType__Enum::Dash },
                { UberState(6, 1104), app::AbilityType__Enum::WaterDash },
                { UberState(6, 1106), app::AbilityType__Enum::ChakramSpell },
                { UberState(6, 1108), app::AbilityType__Enum::GoldenSein },
                { UberState(6, 1115), app::AbilityType__Enum::Blaze },
                { UberState(6, 1116), app::AbilityType__Enum::TurretSpell },
                { UberState(6, 1118), app::AbilityType__Enum::FeatherFlap },
                { UberState(6, 1120), app::AbilityType__Enum::DamageUpgradeA },
                { UberState(6, 1121), app::AbilityType__Enum::DamageUpgradeB },

                { UberState(6, 1015), app::AbilityType__Enum::SpiritFlame },
                { UberState(6, 1031), app::AbilityType__Enum::UltraDefense },
                { UberState(6, 1032), app::AbilityType__Enum::HealthEfficiency },
                { UberState(6, 1039), app::AbilityType__Enum::EnergyEfficiency },
                { UberState(6, 1109), app::AbilityType__Enum::BowCharge },
                { UberState(6, 1112), app::AbilityType__Enum::SpiritMagnet },
                { UberState(6, 1119), app::AbilityType__Enum::WeaponCharge },
            };

            for (auto& [state, type] : abilities) {
                auto actual_type = type;
                handlers.push_back(single_notification_bus().register_handler(state, [actual_type](auto params, auto) {
                    handle_ability(actual_type, params.state.get());
                }));
            }
        });
    } // namespace
} // namespace randomizer::uber_states
