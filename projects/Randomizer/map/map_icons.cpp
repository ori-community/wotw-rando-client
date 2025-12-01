#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Modloader/app/methods/AreaMapIcon.h>
#include <Modloader/app/methods/AreaMapIconManager.h>
#include <Modloader/app/methods/QuestIconsUI.h>
#include <Modloader/app/methods/RuntimeWorldMapIcon.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/map/map_icons.h>
#include <Randomizer/randomizer.h>
#include <frozen/string.h>
#include <frozen/unordered_map.h>

#include <Core/api/game/ui.h>

namespace randomizer::map::icons {
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

        IL2CPP_INTERCEPT(bool, AreaMapIcon, ShouldShowAttentionMarker, app::AreaMapIcon* this_ptr, app::GameWorldAreaID__Enum area_id) { return false; }
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

    std::optional<app::GameObject*> get_vanilla_icon_prefab(const app::WorldMapIconType__Enum type) {
        const auto area_map = core::api::game::ui::area_map();

        if (area_map == nullptr) {
            return std::nullopt;
        }

        return AreaMapIconManager::GetIcon(area_map->fields._IconManager_k__BackingField, type);
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
} // namespace randomizer::map::icons
