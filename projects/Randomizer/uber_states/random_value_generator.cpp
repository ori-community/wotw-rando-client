#include <Randomizer/uber_states/random_value_generator.h>
#include <random>

namespace randomizer::uber_states::random_value_generator {
    const core::api::uber_states::UberState SEED_STATE(UberStateGroup::RandomValueGenerator, 0);
    const core::api::uber_states::UberState USE_SEED_STATE(UberStateGroup::RandomValueGenerator, 1);

    std::random_device random_device;

    int32_t get_next_seed() {
        if (USE_SEED_STATE.get<bool>()) {
            return SEED_STATE.get<int>();
        }

        return std::bit_cast<int32_t>(random_device());
    }

    void register_virtual_uber_states() {
        core::api::uber_states::register_virtual_uber_state(
            UberStateGroup::RandomValueGenerator,
            10,
            ValueType::Integer,
            "randomInt",
            []() -> double {
                std::mt19937 rng(get_next_seed());
                return std::bit_cast<int32_t>(rng());
            },
            std::nullopt,
            core::api::uber_states::VirtualUberState::ChangeDetectionMode::Manual
        );

        core::api::uber_states::register_virtual_uber_state(
            UberStateGroup::RandomValueGenerator,
            11,
            ValueType::Float,
            "randomFloat",
            []() -> double {
                std::mt19937 rng(get_next_seed());
                std::uniform_real_distribution<float> distribution(0.f, 1.f);
                return distribution(rng);
            },
            std::nullopt,
            core::api::uber_states::VirtualUberState::ChangeDetectionMode::Manual
        );

        core::api::uber_states::register_virtual_uber_state(
            UberStateGroup::RandomValueGenerator,
            12,
            ValueType::Boolean,
            "randomBoolean",
            []() -> double {
                std::mt19937 rng(get_next_seed());
                return std::bit_cast<int32_t>(rng()) % 2 == 0;
            },
            std::nullopt,
            core::api::uber_states::VirtualUberState::ChangeDetectionMode::Manual
        );
    }
} // namespace randomizer::uber_states::random_value_generator
