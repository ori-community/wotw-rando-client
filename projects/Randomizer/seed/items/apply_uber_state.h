#pragma once

#include <Core/api/uber_states/uber_state.h>

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class ApplyUberState final : public BaseItem {
    public:
        core::api::uber_states::UberState state;

        void grant() override;
        std::string to_string() const override;
    };
} // namespace randomizer::seed::items
