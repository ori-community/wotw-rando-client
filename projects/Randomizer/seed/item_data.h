#pragma once

#include <Core/enums/map_icon.h>
#include <Core/property.h>

#include <Randomizer/seed/items/item.h>

#include <memory>
#include <unordered_map>
#include <vector>

namespace randomizer::seed {
    struct ItemData {
        using name_entry = core::Property<std::string>;
        using icon_entry = core::Property<MapIcon>;
        using item_entry = std::shared_ptr<items::BaseItem>;

        // The int here is used internally to order grants that satisfy multiple inner_location_entries.
        std::unordered_map<int, item_entry> always_granted_items;
        std::unordered_map<int, item_entry> items;
        std::vector<name_entry> names;
        std::vector<icon_entry> icons;
    };
} // namespace randomizer::seed
