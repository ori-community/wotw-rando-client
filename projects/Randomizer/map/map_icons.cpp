#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/AreaMapIcon.h>
#include <Modloader/app/methods/AreaMapIconManager.h>
#include <Modloader/app/methods/QuestIconsUI.h>
#include <Modloader/app/methods/RuntimeWorldMapIcon.h>
#include <Modloader/app/methods/GameMapPins.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/types/AreaMapIcon.h>
#include <Modloader/app/types/GameMapPins.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/map/map_icons.h>
#include <Randomizer/randomizer.h>
#include <frozen/string.h>
#include <frozen/unordered_map.h>

#include <Core/api/game/ui.h>
#include <Modloader/app/methods/IconPlacementScaler.h>

namespace randomizer::map::icons {
    enum class Event {
        IconPositionUpdateRequested,  // Emitted when the vanilla map wants to update icon positions
    };

    common::EventBus<void, Event> local_event_bus;
    std::unordered_map<MapIcon::id_t, map_icon_handle_t> map_icons_that_can_be_teleported_to;

    namespace {
        using namespace app::classes;

        // We prevent any vanilla icons from showing up because we do icons ourselves.
        IL2CPP_INTERCEPT(void, AreaMapIconManager, ShowAreaIcons, app::AreaMapIconManager* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, QuestIconsUI, UpdateIcons, app::QuestIconsUI* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, QuestIconsUI, ShowObjectiveMarker, app::QuestIconsUI* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, RuntimeWorldMapIcon, Show, app::RuntimeWorldMapIcon* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, RuntimeWorldMapIcon, Hide, app::RuntimeWorldMapIcon* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, GameMapPins, UpdatePinsOnMap, app::GameMapPins* this_ptr, bool visible) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, IconPlacementScaler, UpdateIconPositions, app::IconPlacementScaler* this_ptr, bool force_update) {
            local_event_bus.trigger_event(Event::IconPositionUpdateRequested);
        }

        IL2CPP_INTERCEPT(bool, AreaMapIcon, ShouldShowAttentionMarker, app::AreaMapIcon* this_ptr, app::GameWorldAreaID__Enum area_id) { return false; }

        IL2CPP_INTERCEPT(bool, GameMapUI, IsCursorOverTeleporter, app::GameMapUI * this_ptr, app::Vector2* target) {
            const auto cursor = GameMapUI::get_FocusLocation(this_ptr);

            auto min_distance = 1.02 * 1.02;
            bool found_icon_in_range = false;
            for (auto const& icon: map_icons_that_can_be_teleported_to | std::views::values) {
                const auto position = AreaMapNavigation::WorldToMapPosition(
                    this_ptr->fields.m_areaMap->fields._Navigation_k__BackingField, icon->world_position.get()
                );

                const auto difference = cursor - app::Vector2{position.x, position.y};
                const auto magnitude_squared = difference.x * difference.x + difference.y * difference.y;
                if (magnitude_squared < min_distance) {
                    found_icon_in_range = true;
                    *target = icon->world_position.get();
                    min_distance = magnitude_squared;
                }
            }

            return found_icon_in_range;
        }
    } // namespace

    enum class VanillaIconPrefabType {
        Keystone,
        Eyestone,
        Mapstone,
        BreakableWall,
        BreakableWallBroken,
        StompableFloor,
        StompableFloorBroken,
        EnergyGateOpen,
        KeystoneDoorTwo,
        KeystoneDoorFour,
        KeystoneDoorOpen,
        AbilityPedestal,
        HealthUpgrade,
        EnergyUpgrade,
        SavePedestal,
        AbilityPoint,
        Experience,
        MapstonePickup,
        EnergyGateTwelve,
        EnergyGateTen,
        EnergyGateEight,
        EnergyGateSix,
        EnergyGateFour,
        EnergyGateTwo,
        NPC,
        QuestItem,
        Shard,
        ShardSlot,
        TeleportPrefab,
        QuestStart,
        QuestEnd,
        RaceStart,
        RaceEnd,
        WatermillDoor,
        TempleDoor,
        SmallDoor,
        Shrine,
        Loremaster,
        Weaponmaster,
        Gardener,
        Mapmaker,
        Shardtrader,
        Wanderer,
        Treekeeper,
        Builder,
        Kwolok,
        Statistician,
        CreepHeart,
        HealthFragment,
        EnergyFragment,
        Ore,
        Seed,
        Miner,
        Spiderling,
        Moki,
        MokiBrave,
        MokiAdventurer,
        MokiArtist,
        MokiDarkness,
        MokiFashionable,
        MokiFisherman,
        MokiFrozen,
        MokiKwolokAmulet,
        MokiSpyglass,
        Ku,
        IceFisher,
        Siira,
    };

    enum class VanillaIconPrefabVariant {
        Active,
        Inactive,
        Special,
    };

    std::optional<app::GameObject*> instantiate_vanilla_map_icon(const app::WorldMapIconType__Enum type) {
        const auto area_map = core::api::game::ui::area_map();

        if (area_map == nullptr) {
            return std::nullopt;
        }

        return il2cpp::unity::instantiate_object(AreaMapIconManager::GetIcon(area_map->fields._IconManager_k__BackingField, type));
    }

    /**
     * Defines the information needed for building a GameObject
     * from a MapIcon::Type.
     */
    struct IconRecipe {
        /** The vanilla icon prefab to instantiate this icon from */
        app::WorldMapIconType__Enum vanilla_icon_prefab_type;

        /** If set, override the icon texture with this texture identifier */
        std::optional<frozen::string> override_texture_identifier = std::nullopt;

        /** Icon scale that is applied after instantiating the vanilla icon prefab */
        float scale = 1.f;

        /** Some icons have multiple variants; specifies which variant to use when instantiating the vanilla icon prefab */
        VanillaIconPrefabVariant variant = VanillaIconPrefabVariant::Active;
    };

    // clang-format off
    constexpr frozen::unordered_map<MapIcon::Type, IconRecipe, 84> MAP_ICON_RECIPES = {
        {MapIcon::Type::Keystone,             {app::WorldMapIconType__Enum::Keystone}                                                          },
        {MapIcon::Type::Mapstone,             {app::WorldMapIconType__Enum::Mapstone}                                                          },
        {MapIcon::Type::BreakableWall,        {app::WorldMapIconType__Enum::BreakableWall}                                                     },
        {MapIcon::Type::BreakableWallBroken,  {app::WorldMapIconType__Enum::BreakableWallBroken}                                               },
        {MapIcon::Type::StompableFloor,       {app::WorldMapIconType__Enum::StompableFloor}                                                    },
        {MapIcon::Type::StompableFloorBroken, {app::WorldMapIconType__Enum::StompableFloorBroken}                                              },
        {MapIcon::Type::EnergyGateTwo,        {app::WorldMapIconType__Enum::EnergyGateTwo}                                                     },
        {MapIcon::Type::EnergyGateOpen,       {app::WorldMapIconType__Enum::EnergyGateOpen}                                                    },
        {MapIcon::Type::KeystoneDoorFour,     {app::WorldMapIconType__Enum::KeystoneDoorFour}                                                  },
        {MapIcon::Type::KeystoneDoorOpen,     {app::WorldMapIconType__Enum::KeystoneDoorOpen}                                                  },
        {MapIcon::Type::AbilityPedestal,      {app::WorldMapIconType__Enum::AbilityPedestal}                                                   },
        {MapIcon::Type::HealthUpgrade,        {app::WorldMapIconType__Enum::HealthUpgrade}                                                     },
        {MapIcon::Type::EnergyUpgrade,        {app::WorldMapIconType__Enum::EnergyUpgrade}                                                     },
        {MapIcon::Type::SavePedestal,         {app::WorldMapIconType__Enum::SavePedestal}                                                      },
        {MapIcon::Type::AbilityPoint,         {app::WorldMapIconType__Enum::AbilityPoint}                                                      },
        {MapIcon::Type::KeystoneDoorTwo,      {app::WorldMapIconType__Enum::KeystoneDoorTwo}                                                   },
        {MapIcon::Type::Experience,           {app::WorldMapIconType__Enum::Experience}                                                        },
        {MapIcon::Type::MapstonePickup,       {app::WorldMapIconType__Enum::MapstonePickup}                                                    },
        {MapIcon::Type::EnergyGateTwelve,     {app::WorldMapIconType__Enum::EnergyGateTwelve}                                                  },
        {MapIcon::Type::EnergyGateTen,        {app::WorldMapIconType__Enum::EnergyGateTen}                                                     },
        {MapIcon::Type::EnergyGateEight,      {app::WorldMapIconType__Enum::EnergyGateEight}                                                   },
        {MapIcon::Type::EnergyGateSix,        {app::WorldMapIconType__Enum::EnergyGateSix}                                                     },
        {MapIcon::Type::EnergyGateFour,       {app::WorldMapIconType__Enum::EnergyGateFour}                                                    },
        {MapIcon::Type::SpiritShard,          {app::WorldMapIconType__Enum::SpiritShard}                                                       },
        {MapIcon::Type::NPC,                  {app::WorldMapIconType__Enum::NPC}                                                               },
        {MapIcon::Type::QuestItem,            {app::WorldMapIconType__Enum::QuestItem}                                                         },
        {MapIcon::Type::ShardSlotUpgrade,     {app::WorldMapIconType__Enum::ShardSlotUpgrade}                                                  },
        {MapIcon::Type::Teleporter,           {app::WorldMapIconType__Enum::SavePedestal}                                                      },
        {MapIcon::Type::Ore,                  {app::WorldMapIconType__Enum::Ore}                                                               },
        {MapIcon::Type::QuestStart,           {app::WorldMapIconType__Enum::QuestStart}                                                        },
        {MapIcon::Type::QuestEnd,             {app::WorldMapIconType__Enum::QuestEnd}                                                          },
        {MapIcon::Type::RaceStart,            {app::WorldMapIconType__Enum::RaceStart}                                                         },
        {MapIcon::Type::HealthFragment,       {app::WorldMapIconType__Enum::HealthFragment}                                                    },
        {MapIcon::Type::EnergyFragment,       {app::WorldMapIconType__Enum::EnergyFragment}                                                    },
        {MapIcon::Type::Seed,                 {app::WorldMapIconType__Enum::Seed}                                                              },
        {MapIcon::Type::RaceEnd,              {app::WorldMapIconType__Enum::RaceEnd}                                                           },
        {MapIcon::Type::Eyestone,             {app::WorldMapIconType__Enum::Eyestone}                                                          },
        {MapIcon::Type::WatermillDoor,        {app::WorldMapIconType__Enum::WatermillDoor}                                                     },
        {MapIcon::Type::TempleDoor,           {app::WorldMapIconType__Enum::TempleDoor}                                                        },
        {MapIcon::Type::SmallDoor,            {app::WorldMapIconType__Enum::SmallDoor}                                                         },
        {MapIcon::Type::Shrine,               {app::WorldMapIconType__Enum::Shrine}                                                            },
        {MapIcon::Type::Loremaster,           {app::WorldMapIconType__Enum::Loremaster}                                                        },
        {MapIcon::Type::Weaponmaster,         {app::WorldMapIconType__Enum::Weaponmaster}                                                      },
        {MapIcon::Type::Gardener,             {app::WorldMapIconType__Enum::Gardener}                                                          },
        {MapIcon::Type::Mapmaker,             {app::WorldMapIconType__Enum::Mapmaker}                                                          },
        {MapIcon::Type::Shardtrader,          {app::WorldMapIconType__Enum::Shardtrader}                                                       },
        {MapIcon::Type::Wanderer,             {app::WorldMapIconType__Enum::Wanderer}                                                          },
        {MapIcon::Type::Treekeeper,           {app::WorldMapIconType__Enum::Treekeeper}                                                        },
        {MapIcon::Type::Builder,              {app::WorldMapIconType__Enum::Builder}                                                           },
        {MapIcon::Type::Kwolok,               {app::WorldMapIconType__Enum::Kwolok}                                                            },
        {MapIcon::Type::Statistician,         {app::WorldMapIconType__Enum::Statistician}                                                      },
        {MapIcon::Type::CreepHeart,           {app::WorldMapIconType__Enum::CreepHeart}                                                        },
        {MapIcon::Type::Miner,                {app::WorldMapIconType__Enum::Miner}                                                             },
        {MapIcon::Type::Spiderling,           {app::WorldMapIconType__Enum::Spiderling}                                                        },
        {MapIcon::Type::Moki,                 {app::WorldMapIconType__Enum::Moki}                                                              },
        {MapIcon::Type::MokiBrave,            {app::WorldMapIconType__Enum::MokiBrave}                                                         },
        {MapIcon::Type::MokiAdventurer,       {app::WorldMapIconType__Enum::MokiAdventurer}                                                    },
        {MapIcon::Type::MokiArtist,           {app::WorldMapIconType__Enum::MokiArtist}                                                        },
        {MapIcon::Type::MokiDarkness,         {app::WorldMapIconType__Enum::MokiDarkness}                                                      },
        {MapIcon::Type::MokiFashionable,      {app::WorldMapIconType__Enum::MokiFashionable}                                                   },
        {MapIcon::Type::MokiFisherman,        {app::WorldMapIconType__Enum::MokiFisherman}                                                     },
        {MapIcon::Type::MokiFrozen,           {app::WorldMapIconType__Enum::MokiFrozen}                                                        },
        {MapIcon::Type::MokiKwolokAmulet,     {app::WorldMapIconType__Enum::MokiKwolokAmulet}                                                  },
        {MapIcon::Type::MokiSpyglass,         {app::WorldMapIconType__Enum::MokiSpyglass}                                                      },
        {MapIcon::Type::Ku,                   {app::WorldMapIconType__Enum::Ku}                                                                },
        {MapIcon::Type::IceFisher,            {app::WorldMapIconType__Enum::IceFisher}                                                         },
        {MapIcon::Type::Siira,                {app::WorldMapIconType__Enum::Siira}                                                             },
        {MapIcon::Type::SavePedestalInactive, {app::WorldMapIconType__Enum::HealthFragment, "file:assets/map_icons/clean_water.png", 1.f, VanillaIconPrefabVariant::Inactive}},
        {MapIcon::Type::RaceStartUnfinished,  {app::WorldMapIconType__Enum::HealthFragment, "file:assets/map_icons/clean_water.png", 1.f, VanillaIconPrefabVariant::Inactive}},
        {MapIcon::Type::CleanWater,           {app::WorldMapIconType__Enum::HealthFragment, "file:assets/map_icons/clean_water.png", 1.f}      },
        {MapIcon::Type::BonusItem,            {app::WorldMapIconType__Enum::HealthFragment, "file:assets/map_icons/bonus_item.png", 1.f}       },
        {MapIcon::Type::LaunchFragment,       {app::WorldMapIconType__Enum::HealthFragment, "file:assets/map_icons/launch_fragment.png", 1.f}  },
        {MapIcon::Type::PurpleFloor,          {app::WorldMapIconType__Enum::StompableFloor, "file:assets/map_icons/purple_floor.png", 0.8f}    },
        {MapIcon::Type::PurpleWall,           {app::WorldMapIconType__Enum::BreakableWall, "file:assets/map_icons/purple_wall.png", 0.8f}      },
        {MapIcon::Type::YellowWall,           {app::WorldMapIconType__Enum::BreakableWall, "file:assets/map_icons/yellow_wall.png", 0.8f}      },
        {MapIcon::Type::OneWayWallLeft,       {app::WorldMapIconType__Enum::BreakableWall, "file:assets/map_icons/oneway_wall_left.png", 0.8f} },
        {MapIcon::Type::OneWayWallRight,      {app::WorldMapIconType__Enum::BreakableWall, "file:assets/map_icons/oneway_wall_right.png", 0.8f}},
        {MapIcon::Type::IceFloor,             {app::WorldMapIconType__Enum::StompableFloor, "file:assets/map_icons/ice_floor.png", 0.8f}       },
        {MapIcon::Type::IceWall,              {app::WorldMapIconType__Enum::BreakableWall, "file:assets/map_icons/ice_wall.png", 0.8f}         },
        {MapIcon::Type::VerticalDoor,         {app::WorldMapIconType__Enum::BreakableWall, "file:assets/map_icons/blocked_wall.png", 0.8f}     },
        {MapIcon::Type::HorizontalDoor,       {app::WorldMapIconType__Enum::StompableFloor, "file:assets/map_icons/blocked_floor.png", 0.8f}   },
        {MapIcon::Type::Lever,                {app::WorldMapIconType__Enum::BreakableWall, "file:assets/map_icons/lever.png", 0.6f}            },
        {MapIcon::Type::Door,                 {app::WorldMapIconType__Enum::WatermillDoor, "file:assets/map_icons/door.png", 1.4f}             },
        {MapIcon::Type::DoorUnknown,          {app::WorldMapIconType__Enum::WatermillDoor, "file:assets/map_icons/door_unknown.png", 1.4f}     },
    };
    // clang-format on

    MapIcon::id_t next_icon_id = 0;
    MapIcon::MapIcon() : m_id(++next_icon_id) {
        m_handles.visible_effect = core::reactivity::watch_effect()
            .effect(visible)
            .after([&] {
                const auto game_object = get_game_object();

                if (visible.get()) {
                    if (game_object.has_value()) {
                        il2cpp::unity::set_active(*game_object, true);
                    }

                    // Set up effects that are only needed when the icon is visible
                    m_handles.type_effect = core::reactivity::watch_effect()
                        .effect(type)
                        .after([&] {
                            try_recreate_game_object();
                        })
                        .finalize();

                    m_handles.position_effect = core::reactivity::watch_effect()
                        .effect(world_position)
                        .after([&] {
                            if (!try_create_game_object_if_not_exists()) {
                                return;
                            }

                            try_update_map_position_and_scale();
                        })
                        .finalize();

                    m_handles.position_update_requested_event = local_event_bus.register_handler(Event::IconPositionUpdateRequested, [&](auto) {
                        try_update_map_position_and_scale();
                    });

                    m_handles.area_map_opened_event = core::api::game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::Before, [&](auto, auto) {
                        try_create_game_object_if_not_exists();
                    });
                } else {
                    if (game_object.has_value()) {
                        il2cpp::unity::set_active(*game_object, false);
                    }

                    // Remove reactive effects because we don't need to update icons that are invisible
                    m_handles.type_effect = nullptr;
                    m_handles.position_effect = nullptr;
                    m_handles.position_update_requested_event = nullptr;
                    m_handles.area_map_opened_event = nullptr;
                }
            })
            .finalize();

        m_handles.can_teleport_to_effect = core::reactivity::watch_effect()
            .effect(can_be_teleported_to)
            .after([&] {
                if (can_be_teleported_to.get()) {
                    map_icons_that_can_be_teleported_to.emplace(m_id, shared_from_this());
                    m_handles.remove_from_map_icons_that_can_be_teleported_to_list = common::Droppable::create([&] {
                         map_icons_that_can_be_teleported_to.erase(m_id);
                    });
                } else {
                    m_handles.remove_from_map_icons_that_can_be_teleported_to_list = nullptr;
                }
            })
            .finalize();
    }

    MapIcon::~MapIcon() {
        destroy_game_object_if_exists();
    }

    MapIcon::id_t MapIcon::get_id() const {
        return m_id;
    }

    void MapIcon::destroy_game_object_if_exists() {
        const auto game_object = get_game_object();
        if (!game_object.has_value()) {
            return;
        }

        il2cpp::unity::destroy_object(*game_object);
        m_game_object.reset();
    }

    void MapIcon::try_update_map_position_and_scale() {
        const auto area_map_ui = core::api::game::ui::area_map();

        if (area_map_ui == nullptr || !m_game_object.has_value()) {
            return;
        }

        const auto map_position = AreaMapNavigation::WorldToMapPosition(area_map_ui->fields._Navigation_k__BackingField, world_position.get());
        il2cpp::unity::set_local_position(**m_game_object, map_position);

        // TODO: Calculate and apply scale based on map zoom
    }

    std::optional<app::GameObject*> MapIcon::get_game_object() {
        if (!m_game_object.has_value()) {
            return std::nullopt;
        }

        const auto game_object = **m_game_object;

        if (!il2cpp::unity::is_valid(game_object)) {
            return std::nullopt;
        }

        return game_object;
    }

    bool MapIcon::try_add_icon_to_map_if_missing() {
        const auto game_object = get_game_object();

        if (!game_object.has_value()) {
            return false;
        }

        if (il2cpp::unity::get_parent(*game_object) != nullptr) {
            return true;
        }

        const auto game_map_pins = types::GameMapPins::get_class()->static_fields->Instance;

        if (game_map_pins == nullptr) {
            return false;
        }

        // This is where the vanilla map places its icons
        il2cpp::unity::set_parent(*game_object, game_map_pins->fields.MapPinHolder);

        return true;
    }

    bool MapIcon::try_recreate_game_object() {
        destroy_game_object_if_exists();

        const auto& recipe = MAP_ICON_RECIPES.at(type.get());
        const auto game_object = instantiate_vanilla_map_icon(recipe.vanilla_icon_prefab_type);

        if (!game_object.has_value()) {
            return false;
        }

        const auto area_map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(*game_object, types::AreaMapIcon::get_class());
        il2cpp::unity::set_active(area_map_icon->fields.MapIconActive, recipe.variant == VanillaIconPrefabVariant::Active);
        il2cpp::unity::set_active(area_map_icon->fields.MapIconInactive, recipe.variant == VanillaIconPrefabVariant::Inactive);
        il2cpp::unity::set_active(area_map_icon->fields.MapIconSpecial, recipe.variant == VanillaIconPrefabVariant::Special);

        // TODO: Apply label offsets
        // TODO: Load custom textures

        m_game_object = il2cpp::WeakGCRef(*game_object);
        try_add_icon_to_map_if_missing();

        return true;
    }

    bool MapIcon::try_create_game_object_if_not_exists() {
        const auto game_object = get_game_object();

        if (game_object.has_value()) {
            return try_add_icon_to_map_if_missing();
        }

        return try_recreate_game_object();
    }
} // namespace randomizer::map::icons
