#pragma once

#include <Randomizer/location_data/location.h>
#include <nlohmann/json.hpp>
#include <variant>

namespace randomizer::archipelago::ids {
    using archipelago_id_t = int64_t;

    /**
     * Prefix (18 bits): "101111110010101001"
     *
     * Locations (34 bits):       "00", 8 bits group, 16 bits state, 8 bits value (operator is implied, 0 ^= greater, everything else ^= greater or equal)
     * Boolean items (34 bits):   "01", 16 bits group, 16 bits state
     * Resource items (34 bits):  "10", 16 bits resource type, 16 bits resource value (spirit light only)
     *
     * Resource Types:
     * 0b001: Spirit Light (specify value in the resource value area)
     * 0b010: Gorlek Ore
     * 0b011: Keystones
     * 0b100: Shard Slots
     * 0b101: Health Fragments
     * 0b110: Energy Fragments
     *
     * Decimal range: 3363010932375552 - 3363028112244735
     */

    constexpr archipelago_id_t BASE_ID = 0b101111110010101001LL << 34; // ori (18 bit)

    enum class IdType : uint8_t {
        Location = 0b00,
        BooleanItem = 0b01,
        ResourceItem = 0b10,
        UpgradeItem = 0b11,
    };

    enum class ResourceType : uint16_t {
        Nothing = 0b000,
        SpiritLight = 0b001,
        GorlekOre = 0b010,
        Keystone = 0b011,
        ShardSlot = 0b100,
        HealthFragment = 0b101,
        EnergyFragment = 0b110,
    };

    struct Location {
        uint8_t uber_group;
        uint16_t uber_state;
        uint8_t value;
    };

    struct BooleanItem {
        uint16_t uber_group;
        uint16_t uber_state;
    };

    struct ResourceItem {
        ResourceType type;
        uint16_t value; // Only used for Spirit Light
    };

    struct UpgradeItem {
        uint16_t uber_group;
        uint16_t uber_state;
    };

    archipelago_id_t get_boolean_item_id(int uber_group, int uber_state);
    archipelago_id_t get_resource_item_id(ResourceType type, int16_t value);
    archipelago_id_t get_location_id(const core::api::uber_states::UberState& state, double value);
    archipelago_id_t get_location_id(const location_data::Location& location);
    archipelago_id_t get_upgrade_item_id(int uber_group, int uber_state);
    std::variant<Location, BooleanItem, ResourceItem, UpgradeItem> get_item(archipelago_id_t id);
    location_data::Location get_location_from_id(archipelago_id_t location_id);
} // namespace randomizer::archipelago::ids
