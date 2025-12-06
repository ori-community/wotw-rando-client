#pragma once

#include <optional>
#include <Modloader/il2cpp_helpers.h>
#include <Core/property.h>

namespace randomizer::map::icons {
    struct MapIcon : public std::enable_shared_from_this<MapIcon> {
    public:
        using ptr_t = std::shared_ptr<MapIcon>;
        using id_t = std::size_t;

        enum class Type {
            Keystone = 0,
            Mapstone = 1,
            BreakableWall = 2,
            BreakableWallBroken = 3,
            StompableFloor = 4,
            StompableFloorBroken = 5,
            EnergyGateTwo = 6,
            EnergyGateOpen = 7,
            KeystoneDoorFour = 8,
            KeystoneDoorOpen = 9,
            AbilityPedestal = 10,
            HealthUpgrade = 11,
            EnergyUpgrade = 12,
            SavePedestal = 13,
            AbilityPoint = 14,
            KeystoneDoorTwo = 15,
            Invisible = 16,
            Experience = 17,
            MapstonePickup = 18,
            EnergyGateTwelve = 19,
            EnergyGateTen = 20,
            EnergyGateEight = 21,
            EnergyGateSix = 22,
            EnergyGateFour = 23,
            SpiritShard = 24,
            NPC = 25,
            QuestItem = 26,
            ShardSlotUpgrade = 27,
            Teleporter = 28,
            Ore = 29,
            QuestStart = 30,
            QuestEnd = 31,
            RaceStart = 32,
            HealthFragment = 33,
            EnergyFragment = 34,
            Seed = 35,
            RaceEnd = 36,
            Eyestone = 37,
            WatermillDoor = 40,
            TempleDoor = 41,
            SmallDoor = 42,
            Shrine = 43,
            Loremaster = 50,
            Weaponmaster = 51,
            Gardener = 52,
            Mapmaker = 53,
            Shardtrader = 54,
            Wanderer = 55,
            Treekeeper = 56,
            Builder = 57,
            Kwolok = 58,
            Statistician = 59,
            CreepHeart = 60,
            Miner = 61,
            Spiderling = 62,
            Moki = 63,
            MokiBrave = 64,
            MokiAdventurer = 65,
            MokiArtist = 66,
            MokiDarkness = 67,
            MokiFashionable = 68,
            MokiFisherman = 69,
            MokiFrozen = 70,
            MokiKwolokAmulet = 71,
            MokiSpyglass = 72,
            Ku = 73,
            IceFisher = 74,
            Siira = 75,
            SavePedestalInactive = 76,
            RaceStartUnfinished = 77,
            CleanWater = 100,
            BonusItem = 101,
            LaunchFragment = 102,
            PurpleFloor = 103,
            PurpleWall = 104,
            YellowWall = 105,
            OneWayWallLeft = 106,
            OneWayWallRight = 107,
            IceWall = 108,
            IceFloor = 109,
            VerticalDoor = 110,
            HorizontalDoor = 111,
            Lever = 112,
            Door = 113,
            DoorUnknown = 114,
        };

        /** Must be constructed as a shared_ptr */
        MapIcon();
        ~MapIcon();

        /** The icon type */
        core::Property<Type> type{Type::HealthFragment};

        /** Whether the icon is visible on the map */
        core::Property<bool> visible{false};

        /** The position of the icon in world coordinates */
        core::Property<app::Vector2> world_position{{0.f, 0.f}};

        /** Whether the player can teleport to this icon */
        core::Property<bool> can_be_teleported_to{false};

        /** The text displayed below the icon when labels are shown */
        core::Property<std::string> label_text{""};

        /** Returns the unique ID of this icon */
        id_t get_id() const;

    private:
        struct Handles {
            core::reactivity::ReactiveEffect::ptr_t visible_effect;
            core::reactivity::ReactiveEffect::ptr_t type_effect;
            core::reactivity::ReactiveEffect::ptr_t position_effect;
            core::reactivity::ReactiveEffect::ptr_t can_teleport_to_effect;
            common::Droppable::ptr_t position_update_requested_event;
            common::Droppable::ptr_t label_update_requested_event;
            common::Droppable::ptr_t area_map_opened_event;
            common::Droppable::ptr_t remove_from_map_icons_that_can_be_teleported_to_list;
        };

        /** The ID of the icon. Unique and is not reused. */
        const id_t m_id;

        /** The cached game object */
        std::optional<il2cpp::WeakGCRef<app::GameObject>> m_game_object = std::nullopt;

        /** Reactive effects for this map icon */
        Handles m_handles;

        /** Add the game object to the map if it doesn't have a parent currently but exists */
        bool try_add_icon_to_map_if_missing();

        /** Destroy the current game object if exists and try to recreate it. Returns true if successful. */
        bool try_recreate_game_object();

        /** If there is no current game object, try to create one. Returns true if already exists or successful. */
        bool try_create_game_object_if_not_exists();

        /** Destroy the game object if it exists */
        void destroy_game_object_if_exists();

        /** Sets the icon's actual map position and scale (resembling vanilla IconPlacementScaler) if the game object exists */
        void try_update_map_position_and_scale();

        /** Shows/Hides the icon label if the game object exists. If visible, also updates the label text */
        void try_update_label() const;

        /** Returns the game object or nullopt if it doesn't exit or is invalid */
        std::optional<app::GameObject*> get_game_object();
    };

    using map_icon_handle_t = std::shared_ptr<MapIcon>;
} // namespace randomizer::map::icons
