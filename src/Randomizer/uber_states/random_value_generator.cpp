#include <Randomizer/uber_states/random_value_generator.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>
#include <random>

namespace randomizer::uber_states::random_value_generator {
    auto& seed_state = state<"randomValueGenerator", "seed">();
    auto& use_seed_state = state<"randomValueGenerator", "useSeed">();

    std::random_device random_device;

    int32_t get_next_seed() {
        if (use_seed_state.get()) {
            return seed_state.get();
        }

        return std::bit_cast<int32_t>(random_device());
    }

    void register_virtual_uber_states() {
        core::api::uber_states::register_virtual_uber_state(
            group_id<"randomValueGenerator">(),
            10,
            core::api::uber_states::VirtualUberState::ValueType::Integer,
            "randomInt",
            []() -> double {
                if (!modloader::is_game_ready()) {
                    return 0;
                }

                std::mt19937 rng(get_next_seed());
                return std::bit_cast<int32_t>(rng());
            },
            std::nullopt,
            core::api::uber_states::VirtualUberState::ChangeDetectionMode::Manual
        );

        core::api::uber_states::register_virtual_uber_state(
            group_id<"randomValueGenerator">(),
            11,
            core::api::uber_states::VirtualUberState::ValueType::Float,
            "randomFloat",
            []() -> double {
                if (!modloader::is_game_ready()) {
                    return 0;
                }

                std::mt19937 rng(get_next_seed());
                std::uniform_real_distribution<float> distribution(0.f, 1.f);
                return distribution(rng);
            },
            std::nullopt,
            core::api::uber_states::VirtualUberState::ChangeDetectionMode::Manual
        );

        core::api::uber_states::register_virtual_uber_state(
            group_id<"randomValueGenerator">(),
            12,
            core::api::uber_states::VirtualUberState::ValueType::Boolean,
            "randomBoolean",
            []() -> double {
                if (!modloader::is_game_ready()) {
                    return 0;
                }

                std::mt19937 rng(get_next_seed());
                return std::bit_cast<int32_t>(rng()) % 2 == 0;
            },
            std::nullopt,
            core::api::uber_states::VirtualUberState::ChangeDetectionMode::Manual
        );
    }
} // namespace randomizer::uber_states::random_value_generator
