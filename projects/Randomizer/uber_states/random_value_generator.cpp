#include <Modloader/modloader.h>
#include <Randomizer/uber_states/random_value_generator.h>
#include <random>

namespace randomizer::uber_states::random_value_generator {
    const core::api::uber_states::UberState SEED_STATE(UberStateGroup::RandomValueGenerator, 0);
    const core::api::uber_states::UberState RANDOMIZE_SEED_NEXT_TIME(UberStateGroup::RandomValueGenerator, 1);

    std::random_device random_device;

    int get_next_seed() {
        if (RANDOMIZE_SEED_NEXT_TIME.get<bool>()) {
            const auto value = std::bit_cast<int32_t>(random_device());
            SEED_STATE.set(value);
            RANDOMIZE_SEED_NEXT_TIME.set<bool>(false);
            return value;
        }

        return SEED_STATE.get<int>();
    }

    void register_virtual_uber_states() {
        core::api::uber_states::register_virtual_state(
            {ValueType::Integer, UberStateGroup::RandomValueGenerator, 10, "randomInt", true, core::api::uber_states::VirtualStateInfo::UpdateMode::None},
            core::Property<double>(
                [](double) { modloader::error("uber_state_virtual", "Invalid operation: Uber State randomInt (31, 10) is read only."); },
                []() -> double {
                    std::mt19937 rng(get_next_seed());
                    const auto value = std::bit_cast<int32_t>(rng());
                    SEED_STATE.set(value);
                    return value;
                }
            )
        );

        core::api::uber_states::register_virtual_state(
            {ValueType::Float, UberStateGroup::RandomValueGenerator, 11, "randomFloat", true, core::api::uber_states::VirtualStateInfo::UpdateMode::None},
            core::Property<double>(
                [](double) { modloader::error("uber_state_virtual", "Invalid operation: Uber State randomFloat (31, 11) is read only."); },
                []() -> double {
                    const auto seed = get_next_seed();

                    // Set next seed
                    std::mt19937 rng(seed);
                    const auto next_seed = std::bit_cast<int32_t>(rng());
                    SEED_STATE.set(next_seed);

                    // Get float value
                    rng.seed(seed);
                    std::uniform_real_distribution<float> distribution(0.f, 1.f);
                    const float value = distribution(rng);

                    return value;
                }
            )
        );

        core::api::uber_states::register_virtual_state(
            {ValueType::Boolean, UberStateGroup::RandomValueGenerator, 12, "randomBoolean", true, core::api::uber_states::VirtualStateInfo::UpdateMode::None},
            core::Property<double>(
                [](double) { modloader::error("uber_state_virtual", "Invalid operation: Uber State randomBoolean (31, 12) is read only."); },
                []() -> double {
                    std::mt19937 rng(get_next_seed());
                    const auto value = std::bit_cast<int32_t>(rng());
                    SEED_STATE.set(value);
                    return value % 2 == 0;
                }
            )
        );
    }
}
