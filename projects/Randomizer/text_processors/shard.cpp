#include <text_processors/helpers.h>
#include <text_processors/shard.h>

#include <Common/ext.h>

#include <Modloader/app/structs/SpiritShardType__Enum.h>

#include <unordered_map>

namespace randomizer::text_processors {
    namespace {
        std::unordered_map<app::SpiritShardType__Enum, std::string> shard_to_string{
            { app::SpiritShardType__Enum::None, "$None$" },
            { app::SpiritShardType__Enum::GlassCannon, "$Overcharge$" },
            { app::SpiritShardType__Enum::TripleJump, "$Triple Jump$" },
            { app::SpiritShardType__Enum::AntiAir, "$Wingclip$" },
            { app::SpiritShardType__Enum::Focus, "$Bounty$" },
            { app::SpiritShardType__Enum::Swap, "$Swap$" },
            { app::SpiritShardType__Enum::CrescentShot_Deprecated, "$CrescentShot_Deprecated$" },
            { app::SpiritShardType__Enum::Pierce, "$Pierce$" },
            { app::SpiritShardType__Enum::SpiritMagnet, "$Magnet$" },
            { app::SpiritShardType__Enum::Splinter, "$Splinter$" },
            { app::SpiritShardType__Enum::Blaze_Deprecated, "$Blaze_Deprecated$" },
            { app::SpiritShardType__Enum::Frost_Deprecated, "$Frost_Deprecated$" },
            { app::SpiritShardType__Enum::LifeLeech_Deprecated, "$LifeLeech_Deprecated$" },
            { app::SpiritShardType__Enum::Reckless, "$Reckless$" },
            { app::SpiritShardType__Enum::Frenzy, "$Quickshot$" },
            { app::SpiritShardType__Enum::Explosive_Deprecated, "$Explosive_Deprecated$" },
            { app::SpiritShardType__Enum::Ricochet, "$Ricochet$" },
            { app::SpiritShardType__Enum::Climb_Deprecated, "$Climb_Deprecated$" },
            { app::SpiritShardType__Enum::Barrier, "$Resilience$" },
            { app::SpiritShardType__Enum::SpiritLightLuck, "$Light Harvest$" },
            { app::SpiritShardType__Enum::Compass_Deprecated, "$Compass_Deprecated$" },
            { app::SpiritShardType__Enum::Waterbreathing_Deprecated, "$Waterbreathing_Deprecated$" },
            { app::SpiritShardType__Enum::Vitality, "$Vitality$" },
            { app::SpiritShardType__Enum::VitalityLuck, "$Life Harvest$" },
            { app::SpiritShardType__Enum::SpiritWellShield_Deprecated, "$SpiritWellShield_Deprecated$" },
            { app::SpiritShardType__Enum::EnergyLuck, "$Energy Harvest$" },
            { app::SpiritShardType__Enum::Energy, "$Energy$" },
            { app::SpiritShardType__Enum::BloodPact, "$Life Pact$" },
            { app::SpiritShardType__Enum::LastResort, "$Last Stand$" },
            { app::SpiritShardType__Enum::HarvestOfLight_Deprecated, "$HarvestOfLight_Deprecated$" },
            { app::SpiritShardType__Enum::Sense, "$Secret$" },
            { app::SpiritShardType__Enum::UnderwaterEfficiency_Deprecated, "$UnderwaterEfficiency_Deprecated$" },
            { app::SpiritShardType__Enum::UltraBash, "$Ultra Bash$" },
            { app::SpiritShardType__Enum::UltraLeash, "$Ultra Grapple$" },
            { app::SpiritShardType__Enum::Recycler, "$Overflow$" },
            { app::SpiritShardType__Enum::Counterstrike, "$Thorn$" },
            { app::SpiritShardType__Enum::HollowEnergy, "$Catalyst$" },
            { app::SpiritShardType__Enum::Supressor, "$Supressor$" },
            { app::SpiritShardType__Enum::Aggressor, "$Turmoil$" },
            { app::SpiritShardType__Enum::Glue, "$Sticky$" },
            { app::SpiritShardType__Enum::CombatLuck, "$Finesse$" },
            { app::SpiritShardType__Enum::SpiritPower, "$Spirit Surge$" },
            { app::SpiritShardType__Enum::Overcharge_Deprecated, "$Overcharge_Deprecated$" },
            { app::SpiritShardType__Enum::Untouchable, "$Lifeforce$" },
            { app::SpiritShardType__Enum::MirrorStrike, "$Deflector$" },
            { app::SpiritShardType__Enum::Stinger, "$Stinger$" },
            { app::SpiritShardType__Enum::Fracture, "$Fracture$" },
            { app::SpiritShardType__Enum::ChainLightning, "$Arcing$" },
        };

        std::optional<std::string> shard(std::string_view content) {
            int shard_type_int;
            if (!string_convert(content, shard_type_int)) {
                return std::nullopt;
            }

            auto it = shard_to_string.find(static_cast<app::SpiritShardType__Enum>(shard_type_int));
            return it == shard_to_string.end() ? std::nullopt : std::optional(it->second);
        }

        std::optional<std::string> shard_no_color(std::string_view content) {
            int shard_type_int;
            if (!string_convert(content, shard_type_int)) {
                return std::nullopt;
            }

            auto it = shard_to_string.find(static_cast<app::SpiritShardType__Enum>(shard_type_int));
            return it == shard_to_string.end() ? std::nullopt : std::optional(it->second.substr(1, it->second.size() - 2));
        }
    } // namespace

    void ShardProcessor::process(std::string& text) const {
        search_and_replace("[shard(", shard, text);
        search_and_replace("[shard_no_color(", shard_no_color, text);
    }
} // namespace randomizer::text_processors
