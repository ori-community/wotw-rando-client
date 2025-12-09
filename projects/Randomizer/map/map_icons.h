#pragma once

#include <optional>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/app/types/Renderer.h>
#include <Core/property.h>
#include <Randomizer/map/map_filter.h>

namespace randomizer::map::icons {
    struct IconScale;

    struct MapIcon : std::enable_shared_from_this<MapIcon> {
        using ptr_t = std::shared_ptr<MapIcon>;
        using id_t = std::size_t;
        using visibility_t = std::optional<float>;  // nullopt = invisible, float = opacity
        using visibility_effect_fn_t = std::function<visibility_t(filter::MapFilter)>;

        /** Convenience values and functions for common icon visibilities */
        struct Visibilities {
            static constexpr visibility_t visible = 1.f;
            static constexpr visibility_t invisible = std::nullopt;
            static visibility_t out_of_logic();
        };

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
            RaceStartFinished = 77,
            RaceEndFinished = 78,
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
            DoorSmall = 115,
            DoorSmallUnknown = 116,
            Wisp = 117,
        };

        enum class ScaleMode {
            /** Make this icon appear larger when zoomed out (default) */
            Adaptive,

            /** Scale this icon linearly when zooming out */
            Linear,
        };

        /** Must be constructed as a shared_ptr */
        MapIcon();
        MapIcon(Type type, const std::string& label_text, const app::Vector2& world_position);
        MapIcon(Type type, const std::string& label_text, const app::Vector2& world_position, const visibility_effect_fn_t& visibility_effect_fn);
        MapIcon(
            Type type,
            const std::string& label_text,
            const app::Vector2& world_position,
            const visibility_effect_fn_t& visibility_effect_fn,
            bool can_be_teleported_to
        );
        MapIcon(
            Type type,
            const std::string& label_text,
            const app::Vector2& world_position,
            const visibility_effect_fn_t& visibility_effect_fn,
            float rotation
        );
        MapIcon(
            Type type,
            const std::string& label_text,
            const app::Vector2& world_position,
            const visibility_effect_fn_t& visibility_effect_fn,
            ScaleMode scale_mode
        );
        MapIcon(
            Type type,
            const std::string& label_text,
            const app::Vector2& world_position,
            const visibility_effect_fn_t& visibility_effect_fn,
            ScaleMode scale_mode,
            float rotation
        );
        MapIcon(
            Type type,
            const std::string& label_text,
            const app::Vector2& world_position,
            const visibility_effect_fn_t& visibility_effect_fn,
            ScaleMode scale_mode,
            float rotation,
            bool can_be_teleported_to
        );
        ~MapIcon();

        /** The icon type */
        core::Property<Type> type;

        /** Whether the icon is visible on the map */
        core::Property<visibility_effect_fn_t> visibility_effect_fn;

        /** The position of the icon in world coordinates */
        core::Property<app::Vector2> world_position{{0.f, 0.f}};

        /** The rotation of the icon in degrees */
        core::Property<float> rotation;

        /** The scale mode of this icon */
        core::Property<ScaleMode> scale_mode;

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
            core::reactivity::ReactiveEffect::ptr_t rotation_effect;
            core::reactivity::ReactiveEffect::ptr_t scale_mode_effect;
            core::reactivity::ReactiveEffect::ptr_t can_teleport_to_effect;
            common::Droppable::ptr_t position_update_requested_event;
            common::Droppable::ptr_t label_update_requested_event;
            common::Droppable::ptr_t area_map_opened_event;
            common::Droppable::ptr_t remove_from_map_icons_that_can_be_teleported_to_list;
            common::Droppable::ptr_t icon_scale_update_requested_event;
        };

        /** The ID of the icon. Unique and is not reused. */
        const id_t m_id;

        /** The cached game object */
        std::optional<il2cpp::WeakGCRef<app::GameObject>> m_game_object = std::nullopt;

        /** Reactive effects for this map icon */
        Handles m_handles;

        /** Add the game object to the map if it doesn't have a parent currently but exists */
        bool try_add_icon_to_map_if_missing() const;

        /** Destroy the current game object if exists and try to recreate it. Returns true if successful. */
        bool try_recreate_game_object();

        /** If there is no current game object, try to create one. Returns true if already exists or successful. */
        bool try_create_game_object_if_not_exists();

        /** Destroy the game object if it exists */
        void destroy_game_object_if_exists();

        /** Sets the icon's actual map position if the game object exists */
        void try_update_map_position() const;

        /** Sets the icon's rotation if the game object exists */
        void try_update_rotation() const;

        /** Sets the icon scale if the game object exists */
        void try_set_scale(const IconScale& scale) const;

        /** Shows/Hides the icon label if the game object exists. If visible, also updates the label text */
        void try_update_label() const;

        /** Sets the icon opacity if the game object exists */
        void try_set_opacity(float opacity) const;

        /** Returns the game object or nullopt if it doesn't exit or is invalid */
        std::optional<app::GameObject*> get_game_object() const;

        /** The currently cached result of visibility_effect_fn */
        core::Property<visibility_t> m_visibility{std::nullopt};

        /** Colors (MainColor shader property) of all renderers in the game object. Populated on instantiation. */
        std::unordered_map<app::Renderer*, app::Color> m_original_renderer_colors;
    };

    using map_icon_handle_t = std::shared_ptr<MapIcon>;

    namespace utils {
        /** Creates a teleporter icon tuple (active and inactive) based on an uber state */
        std::tuple<MapIcon::ptr_t, MapIcon::ptr_t> create_warp_icon(
            const app::Vector2& world_position,
            const core::api::uber_states::UberState& is_active_state,
            const std::string& label_text = "Teleporter"
        );
    }
} // namespace randomizer::map::icons
