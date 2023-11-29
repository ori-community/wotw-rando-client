#include <text_processors/ability.h>
#include <text_processors/helpers.h>

#include <Common/ext.h>

#include <Modloader/app/structs/AbilityType__Enum.h>

#include <unordered_map>

namespace randomizer::text_processors {
    namespace {
        std::unordered_map<app::AbilityType__Enum, std::string> ability_to_string{
            {app::AbilityType__Enum::Bash, "*Bash*"},
            {app::AbilityType__Enum::WallJump, "*Wall Jump*"},
            {app::AbilityType__Enum::DoubleJump, "*Double Jump*"},
            {app::AbilityType__Enum::ChargeJump, "*Launch*"},
            {app::AbilityType__Enum::Glide, "*Glide*"},
            {app::AbilityType__Enum::WaterBreath, "*Water Breath*"},
            {app::AbilityType__Enum::Grenade, "*Grenade*"},
            {app::AbilityType__Enum::SpiritLeash, "*Grapple*"},
            {app::AbilityType__Enum::GlowSpell, "*Flash*"},
            {app::AbilityType__Enum::SpiritSpearSpell, "*Spear*"},
            {app::AbilityType__Enum::Regenerate, "*Regenerate*"},
            {app::AbilityType__Enum::MeditateSpell, "*Regenerate*"},
            {app::AbilityType__Enum::Bow, "*Bow*"},
            {app::AbilityType__Enum::Hammer, "*Hammer*"},
            {app::AbilityType__Enum::Torch, "*Torch*"},
            {app::AbilityType__Enum::Sword, "*Sword*"},
            {app::AbilityType__Enum::Digging, "*Burrow*"},
            {app::AbilityType__Enum::Dash, "*Dash*"},
            {app::AbilityType__Enum::DashNew, "*Dash*"},
            {app::AbilityType__Enum::WaterDash, "*Water Dash*"},
            {app::AbilityType__Enum::ChakramSpell, "*Shuriken*"},
            {app::AbilityType__Enum::GoldenSein, "*Sein*"},
            {app::AbilityType__Enum::Blaze, "*Blaze*"},
            {app::AbilityType__Enum::TurretSpell, "*Sentry*"},
            {app::AbilityType__Enum::FeatherFlap, "*Flap*"},
            {app::AbilityType__Enum::DamageUpgradeA, "#Ancestral Light#"},
            {app::AbilityType__Enum::DamageUpgradeB, "#Ancestral Light#"},
        };

        std::optional<std::string> ability(core::text::ITextProcessor const& base_processor, std::string_view content) {
            int ability_type_int;
            if (!string_convert(content, ability_type_int)) {
                return std::nullopt;
            }

            auto it = ability_to_string.find(static_cast<app::AbilityType__Enum>(ability_type_int));
            return it == ability_to_string.end() ? std::nullopt : std::optional(it->second);
        }

        std::optional<std::string> ability_no_color(core::text::ITextProcessor const& base_processor, std::string_view content) {
            int ability_type_int;
            if (!string_convert(content, ability_type_int)) {
                return std::nullopt;
            }

            auto it = ability_to_string.find(static_cast<app::AbilityType__Enum>(ability_type_int));
            return it == ability_to_string.end() ? std::nullopt : std::optional(it->second.substr(1, it->second.size() - 2));
        }
    } // namespace

    void AbilityProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        search_and_replace(base_processor, "[ability(", ability, text);
        search_and_replace(base_processor, "[ability_no_color(", ability_no_color, text);
    }
} // namespace randomizer::text_processors
