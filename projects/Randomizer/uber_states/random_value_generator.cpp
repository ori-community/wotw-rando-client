#include <Modloader/modloader.h>
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
        core::api::uber_states::register_virtual_state(
            {ValueType::Integer, UberStateGroup::RandomValueGenerator, 10, "randomInt", true, core::api::uber_states::VirtualStateInfo::UpdateMode::None},
            core::Property<double>(
                [](double) { modloader::error("uber_state_virtual", "Invalid operation: Uber State randomInt (31, 10) is read only."); },
                []() -> double {
                    std::mt19937 rng(get_next_seed());
                    return std::bit_cast<int32_t>(rng());
                }
            )
        );

        core::api::uber_states::register_virtual_state(
            {ValueType::Float, UberStateGroup::RandomValueGenerator, 11, "randomFloat", true, core::api::uber_states::VirtualStateInfo::UpdateMode::None},
            core::Property<double>(
                [](double) { modloader::error("uber_state_virtual", "Invalid operation: Uber State randomFloat (31, 11) is read only."); },
                []() -> double {
                    std::mt19937 rng(get_next_seed());
                    std::uniform_real_distribution<float> distribution(0.f, 1.f);
                    return distribution(rng);
                }
            )
        );

        core::api::uber_states::register_virtual_state(
            {ValueType::Boolean, UberStateGroup::RandomValueGenerator, 12, "randomBoolean", true, core::api::uber_states::VirtualStateInfo::UpdateMode::None},
            core::Property<double>(
                [](double) { modloader::error("uber_state_virtual", "Invalid operation: Uber State randomBoolean (31, 12) is read only."); },
                []() -> double {
                    std::mt19937 rng(get_next_seed());
                    return std::bit_cast<int32_t>(rng()) % 2 == 0;
                }
            )
        );
    }
}
