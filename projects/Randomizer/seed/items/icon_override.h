#pragma once

#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/enums/map_icon.h>
#include <Randomizer/seed/item_data.h>
#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class SetIconOverride final : public BaseItem {
    public:
        core::api::uber_states::UberStateCondition location;
        ItemData* data;
        MapIcon icon;

        void grant() override;
        std::string to_string() const override;
    };

    class ClearIconOverride final : public BaseItem {
    public:
        core::api::uber_states::UberStateCondition location;
        ItemData* data;

        void grant() override;
        std::string to_string() const override;
    };
} // namespace randomizer::seed::items
