#include <magic_enum.hpp>
#include <seed/items/refill.h>

#include <Core/api/game/player.h>

namespace randomizer::seed::items {
    void Refill::grant() {
        const auto refill_both = core::api::uber_states::UberState(4, 150).get<bool>() &&
            core::api::game::player::is_shard_equipped(app::SpiritShardType__Enum::Recycler);
        const auto actual_type = refill_both ? RefillType::HealthAndEnergy : type;

        if (actual_type != RefillType::Energy) {
            core::api::game::player::refill_health();
        }

        if (actual_type != RefillType::Health) {
            core::api::game::player::refill_energy();
        }
    }

    std::string Refill::to_string() const {
        return std::format("refill {}", magic_enum::enum_name(type));
    }
} // namespace randomizer::seed::items
