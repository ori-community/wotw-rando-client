#pragma once

#include <Core/api/uber_states/uber_state_condition.h>

#include <Randomizer/seed/items/item.h>

#include <vector>

namespace randomizer::seed::items {
    class CountingMessage final : public BaseItem {
    public:
        std::vector<core::api::uber_states::UberStateCondition> targets;
        bool show_items = true;

        void grant() final;
        std::string message_text();
    };
} // namespace randomizer::seed::items
