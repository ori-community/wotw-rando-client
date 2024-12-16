
#include <Core/api/game/ui.h>
#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/settings.h>

#include <Randomizer/game/map/map.h>
#include <Randomizer/game/shops/shop.h>
#include <Randomizer/randomizer.h>

namespace randomizer::game::map {
    core::Property<bool> show_interactible_icons_property(true);
    core::Property<bool>& show_interactible_icons() {
        return show_interactible_icons_property;
    }

    namespace {
        std::string icon_label(const std::optional<location_data::Location>& location, const core::api::uber_states::UberStateCondition& condition) {
            auto name = location.has_value() && !location->name.empty() ? location->name : " ";
            return std::format("[if([state_bool(34543|11226)],[pickup_text({0})],{1})]", condition.serialize(), name);
        }

        MapIcon select_icon(const location_data::Location& location) {
            if (location.name.ends_with("SpiritTrial")) {
                return MapIcon::RaceEnd;
            }

            switch (location.type) {
                case location_data::LocationType::SpiritLight:
                    return MapIcon::Experience;
                case location_data::LocationType::Shard:
                    return MapIcon::SpiritShard;
                case location_data::LocationType::Life:
                    return MapIcon::HealthFragment;
                case location_data::LocationType::Energy:
                    return MapIcon::EnergyFragment;
                case location_data::LocationType::Ore:
                    return MapIcon::Ore;
                case location_data::LocationType::ShardSlot:
                    return MapIcon::ShardSlotUpgrade;
                case location_data::LocationType::Keystone:
                case location_data::LocationType::Eyestone:
                    return MapIcon::Keystone;
                case location_data::LocationType::Quest:
                    return MapIcon::QuestItem;
                case location_data::LocationType::Seed:
                    return MapIcon::Seed;
                case location_data::LocationType::Ability:
                    return MapIcon::AbilityPedestal;
                case location_data::LocationType::Shop:
                    return MapIcon::Mapmaker;
                case location_data::LocationType::Wisp:
                    return MapIcon::QuestItem;
                case location_data::LocationType::Unknown:
                    return MapIcon::Eyestone; // Invisible
                case location_data::LocationType::MapShop:
                    return MapIcon::Mapmaker;
                default:
                    throw std::exception("Unknown location type");
            }
        }

        IconVisibilityResult check_shop(std::vector<shops::ShopSlot*> const& slots) {
            if (active_filter() == Filters::Spoilers) {
                return IconVisibilityResult::Show;
            }

            bool in_logic = false;
            bool all_bought = true;
            for (auto const& slot: slots) {
                if (all_bought && !slot->state.get<bool>()) {
                    all_bought = false;
                }

                if (!in_logic && reach_check().reachable(core::api::uber_states::UberStateCondition(slot->state))) {
                    in_logic = true;
                }

                if (in_logic && !all_bought) {
                    break;
                }
            }

            if (all_bought) {
                return IconVisibilityResult::Hide;
            }

            return in_logic //
                ? IconVisibilityResult::Show
                : eps_equals(core::settings::map_icon_transparency(), 0.f) //
                    ? IconVisibilityResult::Hide
                    : IconVisibilityResult::ShowTransparent;
        }

        std::shared_ptr<Icon> make_npc_icon(
            const MapIcon map_icon,
            std::string const& label,
            std::string const& name,
            const app::Vector2 position,
            std::vector<shops::ShopSlot*> const& slots
        ) {
            auto icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
            icon->icon().set(map_icon);
            icon->label().set(label);
            icon->name().set(name);
            icon->position().set(position);
            add_icon_visibility_callback(icon, [slots](auto) { return check_shop(slots); });

            return icon;
        }

        std::shared_ptr<Icon> make_icon(
            const MapIcon map_icon,
            std::string const& label,
            std::string const& name,
            const app::Vector2 position,
            std::optional<core::api::uber_states::UberStateCondition> const& state = std::nullopt
        ) {
            auto icon = add_icon(FilterFlag::InLogic | FilterFlag::Spoilers);
            icon->icon().set(map_icon);
            icon->label().set(label);
            icon->name().set(name);
            icon->position().set(position);
            if (state.has_value()) {
                add_icon_visibility_callback(icon, [state](auto) {
                    return show_interactible_icons_property.get() && !state.value().resolve() ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
                });
            } else {
                add_icon_visibility_callback(icon, [](auto) {
                    return show_interactible_icons_property.get() ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
                });
            }

            return icon;
        }

        void npc_icons() {
            make_npc_icon(MapIcon::Weaponmaster, "Opher", "MarshPastOpher.Opher", {-597.1f, -4291.3f}, shops::opher_shop().slots());
            make_npc_icon(MapIcon::Shardtrader, "Twillen", "WestHollow.Twillen", {-281.3f, -4236.4f}, shops::twillen_shop().slots());
            make_npc_icon(MapIcon::Weaponmaster, "Opher", "GladesTown.Opher", {-203.9f, -4146.4f}, shops::opher_shop().slots());
            make_npc_icon(MapIcon::Mapmaker, "Lupo", "GladesTown.Lupo", {-212.3f, -4158.8f}, shops::lupo_shop().slots());
            make_npc_icon(MapIcon::Shardtrader, "Twillen", "GladesTown.Twillen", {-410.5f, -4158.9f}, shops::twillen_shop().slots());
            make_npc_icon(MapIcon::Builder, "Grom", "GladesTown.Grom", {-319.1f, -4150.1f}, shops::grom_shop().slots());
            make_npc_icon(MapIcon::Gardener, "Tuley", "GladesTown.Tuley", {-170.0f, -4137.7f}, shops::tuley_shop().slots());
            make_npc_icon(MapIcon::Weaponmaster, "Opher", "InnerWellspring.Opher", {-1259.7f, -3675.5f}, shops::opher_shop().slots());
        }

        void one_way_walls() {
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "WestPools.RightKwolokOneWayWall", {-1589.13f, -4141.08f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "EastPools.NextToLupoOreWall", {-1380.37f, -4162.27f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "PoolsApproach.MarshBreakableWallWall", {-819.22f, -4184.47f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "OuterWellspring.LifeHarvestEntryWall", {-974.01f, -4041.36f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "OuterWellspring.RightWallECWall", {-739.64f, -3987.75f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "InnerWellspring.DrainAreaExitWall", {-1089.87f, -3951.63f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "InnerWellspring.AboveSpinArenaEXWall", {-1226.80f, -3738.14f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "LowerReach.BreakWallEXWall", {-199.48f, -4042.06f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "LowerReach.EastFurnaceWall", {-74.44f, -3983.53f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "WestHollow.HiddenECWall", {-221.31f, -4301.87f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "WoodsMain.BehindWallOreWall", {983.44f, -4172.78f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "WindtornRuins.LowerExit", {1930.13f, -4003.15f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "UpperDepths.SwimECWall", {124.58f, -4424.03f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "LowerDepths.CombatShrineWall", {248.78f, -4511.68f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "LowerDepths.CentralUpperWall", {535.04f, -4505.11f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "UpperDepths.LightcatcherSeedWall", {473.51f, -4432.10f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "UpperDepths.OutsideMoraFightWall", {556.82f, -4374.07f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "MarshPastOpher.PoolsPathMiddleWall", {-736.73f, -4165.99f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "MarshPastOpher.SpiritTrialStartWall", {-573.51f, -4312.59f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "MarshPastOpher.SpiritTrialFinishWall", {-468.80f, -4322.70f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "MarshSpawn.PathToOpherWall", {-674.98f, -4307.18f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "MarshSpawn.BelowBridgeWall", {-736.80f, -4333.24f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "MarshSpawn.LeftTokkEXWall", {-749.05f, -4422.41f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "MarshSpawn.FightRoomEXWall", {-786.33f, -4451.45f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "MarshSpawn.RecklessShardWall", {-492.91f, -4409.03f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "HowlsDen.AboveBoneBridgeWall", {-447.81f, -4434.10f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "HowlsDen.UpperLoopEntranceWall", {-405.72f, -4433.38f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "HowlsDen.UpperLoopExitWall", {-403.44f, -4450.41f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "HowlsDen.SwordTreeLeftWall", {-351.03f, -4484.47f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "HowlsDen.SwordTreeRightWall", {-269.59f, -4477.27f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "HowlsDen.SwordTreeUpperLeftWall", {-245.13f, -4438.78f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "HowlsDen.SwordTreeUpperRightWall", {-296.10f, -4440.34f});
            make_icon(MapIcon::OneWayWallLeft, "Oneway Wall", "HowlsDen.AboveTPEXWall", {-382.45f, -4501.86f});
            make_icon(MapIcon::OneWayWallRight, "Oneway Wall", "MidnightBurrows.DenConnectionWall", {-575.90,-4544.80});
        }

        void purple_walls() {
            make_icon(MapIcon::PurpleWall, "Purple Wall", "EastHollow.GladesApproachOrePurpleWall", {-105.57f, -4188.93f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "Glades.GromsPurpleWall", {-161.21f, -4153.89f});
            make_icon(MapIcon::PurpleFloor, "Purple Floor", "EastHollow.AboveBashPurpleFloor", {-5.76f, -4267.23f});
            make_icon(MapIcon::PurpleFloor, "Purple Floor", "EastPools.LupoAreaPurpleFloor", {-1415.27f, -4165.21f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "EastPools.PurpleWallHCPurpleWall", {-1285.69f, -4086.48f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "LowerWastes.PurpleWallEXPurpleWall", {1543.66f, -3996.14f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "LowerWastes.LastStandShardPurpleWall", {1826.43f, -3934.01f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "UpperWastes.PurpleWallEXPurpleWall", {1994.33f, -3829.12f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "UpperWastes.LeverPurpleWall", {2016.79f, -3790.23f});
            make_icon(MapIcon::PurpleWall, "Purple Wall", "UpperWastes.PurpleWallHCPurpleWall", {2038.27f, -3840.74f});
        }

        void yellow_walls() {
            make_icon(MapIcon::YellowWall, "Yellow Wall", "WoodsMain.YellowWallEXYellowWall", {1066.15f, -4098.06f});
            make_icon(MapIcon::YellowWall, "Yellow Wall", "WoodsMain.FourKeystoneRoomYellowWall", {900.41f, -4144.29f});
        }

        void ice_walls() {
            make_icon(MapIcon::IceWall, "Ice Wall", "LowerReach.MeltIceEXWall", {-332.48f, -4033.75f});
            make_icon(MapIcon::IceWall, "Ice Wall", "LowerReach.SnowballWall", {-131.94f, -4000.67f});
            make_icon(MapIcon::IceWall, "Ice Wall", "LowerReach.TeleporterWall", {-288.84f, -3961.02f});
            make_icon(MapIcon::IceFloor, "Ice Floor", "UpperReach.TreeRoomFloor", {-149.95f, -3915.99f});
            make_icon(MapIcon::IceWall, "Ice Wall", "UpperReach.TreeRoomWall", {-138.69f, -3929.32f});
        }

        void interactive_doors() {
            make_icon(MapIcon::VerticalDoor, "Door", "UpperPools.RightBubbleSpamRoomDoor", {-1631.08f,-3999.65f});
            make_icon(MapIcon::VerticalDoor, "Door", "UpperPools.DrainPuzzleEntranceDoor", {-1394.21f,-4056.01f});
            make_icon(MapIcon::VerticalDoor, "Door", "UpperPools.DrainPuzzleExitDoor", {-1317.92f,-4076.12f});
            make_icon(MapIcon::VerticalDoor, "Door", "EastPools.BehindEntryDoorDoor", {-1236.84f,-4160.87f});
            make_icon(MapIcon::VerticalDoor, "Door", "MarshSpawn.LeverECDoor", {-630.00f,-4416.08f});
            make_icon(MapIcon::VerticalDoor, "Door", "MarshSpawn.FightRoomDoor", {-830.44f,-4449.56f});
            make_icon(MapIcon::VerticalDoor, "Door", "MarshSpawn.LifepactLedgeDoor", {-925.96f,-4396.51f});
            make_icon(MapIcon::VerticalDoor, "Door", "MarshSpawn.FightRoomDoor", {-508.83f,-4524.72f});
            make_icon(MapIcon::VerticalDoor, "Door", "MarshSpawn.BurrowsEntryDoorV", {-861.47f,-4489.63f});
            make_icon(MapIcon::VerticalDoor, "Door", "MarshPastOpher.UpperBowAreaLeftDoor", {-454.31f,-4194.12f});
            make_icon(MapIcon::VerticalDoor, "Door", "MarshPastOpher.UpperBowAreaRightDoor", {-401.21f,-4187.53f});
            make_icon(MapIcon::VerticalDoor, "Door", "WestHollow.InFrontPurpleDoorDoor", {-170.96f,-4234.85f});
            make_icon(MapIcon::VerticalDoor, "Door", "WestHollow.DashApproachDoor", {-96.46f,-4420.66f});
            make_icon(MapIcon::VerticalDoor, "Door", "WestHollow.QuickshotShardDoor", {-290.98f,-4324.42f});
            make_icon(MapIcon::VerticalDoor, "Door", "WestHollow.RockPuzzleDoor", {-319.09f,-4274.01f});
            make_icon(MapIcon::VerticalDoor, "Door", "EastHollow.VoiceDoorPlatformDoor", {-97.62f,-4220.52f});
            make_icon(MapIcon::VerticalDoor, "Door", "EastHollow.AboveDepthsDoor", {41.55f,-4300.00f});
            make_icon(MapIcon::VerticalDoor, "Door", "LowerReach.CentralDoor", {-353.98f,-4007.03f});
            make_icon(MapIcon::VerticalDoor, "Door", "LowerReach.TeleporterDoor", {-237.51f,-3959.39f});
            make_icon(MapIcon::VerticalDoor, "Door", "InnerWellspring.WaterSwitchEXDoor", {-1214.00f,-3968.16f});
            make_icon(MapIcon::VerticalDoor, "Door", "InnerWellspring.SpinPuzzleDoor", {-1197.57f,-3804.02f});
            make_icon(MapIcon::VerticalDoor, "Door", "UpperWastes.MissilePuzzleRightDoor", {2036.78f,-3817.48f});
            make_icon(MapIcon::VerticalDoor, "Door", "WindtornRuins.FallenPillarDoor", {2075.10f,-4010.31f});

            make_icon(MapIcon::HorizontalDoor, "Door", "MarshSpawn.BurrowsEntryDoorH", {-902.33f,-4495.88f});
            make_icon(MapIcon::HorizontalDoor, "Door", "HowlsDen.LaserKSDoor", {-422.10f,-4537.97f});
            make_icon(MapIcon::HorizontalDoor, "Door", "InnerWellspring.DrainAreaEntranceDoor", {-1132.65f,-3967.69f});
            make_icon(MapIcon::HorizontalDoor, "Door", "InnerWellspring.ShortcutWheelDoor", {-1227.78f,-3897.71f});
            make_icon(MapIcon::HorizontalDoor, "Door", "InnerWellspring.LaserOreDoor", {-1042.55f,-3905.18f});
            make_icon(MapIcon::HorizontalDoor, "Door", "InnerWellspring.TopSecondRoomWheelDoor", {-1168.16f,-3707.90f});
            make_icon(MapIcon::HorizontalDoor, "Door", "LowerReach.WindBottomEXDoor", {-214.43f,-4047.05f});
            make_icon(MapIcon::HorizontalDoor, "Door", "LowerReach.ArenaAreaDoor", {77.53f,-3995.44f});
            make_icon(MapIcon::HorizontalDoor, "Door", "UpperDepths.EntryDoor", {150.83f,-4304.75f});
            make_icon(MapIcon::HorizontalDoor, "Door", "DepthsShrineDoor", {236.26f,-4522.36f});
            make_icon(MapIcon::HorizontalDoor, "Door", "WindtornRuins.UpperRuinsDoorH", {2138.49f,-3873.16f});
            make_icon(MapIcon::HorizontalDoor, "Door", "WindtornRuins.EscapeRevisitECDoor", {2053.36f,-4024.47f});
            make_icon(MapIcon::HorizontalDoor, "Door", "WeepingRidge.BottomElevatorDoor", {1138.73f,-3797.06f});
            make_icon(MapIcon::HorizontalDoor, "Door", "WestHollow.FarLeftRoomDoorH", {-338.55f,-4281.97f});
        }

        void levers() {
            make_icon(MapIcon::Lever, "Lever", "UpperPools.RightBubbleSpamRoomLever", {-1556.88f, -3979.03f});
            make_icon(MapIcon::Lever, "Lever", "EastPools.LeverRoomLever", {-1226.78f,-4106.47f});
            make_icon(MapIcon::Lever, "Lever", "OuterWellspring.LifeHarvestEntryLever", {-1045.24f,-4078.18f});
            make_icon(MapIcon::Lever, "Lever", "InnerWellspring.BelowDrainLeverLever", {-1117.76f,-3877.37f});
            make_icon(MapIcon::Lever, "Lever", "InnerWellspring.ShortcutLeverLever", {-1264.12f,-3906.45f});
            make_icon(MapIcon::Lever, "Lever", "InnerWellspring.SpinPuzzleLever1", {-1128.94f,-3818.37f});
            make_icon(MapIcon::Lever, "Lever", "InnerWellspring.SpinPuzzleLever2", {-1128.94f,-3818.37f});
            make_icon(MapIcon::Lever, "Lever", "InnerWellspring.SpinPuzzleLever3", {-1161.77f,-3815.72f});
            make_icon(MapIcon::Lever, "Lever", "LowerReach.AboveEntryLever", {-392.37f,-3975.24f});
            make_icon(MapIcon::Lever, "Lever", "MidnightBurrows.LeverRoomLever", {-681.11f,-4616.88f});
            make_icon(MapIcon::Lever, "Lever", "HowlsDen.TeleporterLever", {-400.58f,-4549.77f});
            make_icon(MapIcon::Lever, "Lever", "MarshSpawn.CaveEntranceLever", {-584.78f,-4370.61f});
            make_icon(MapIcon::Lever, "Lever", "MarshPastOpher.BowAreaLever", {-322.66f,-4193.15f});
            make_icon(MapIcon::Lever, "Lever", "EastHollow.AboveBashLever", {-17.03f, -4265.35f});
            make_icon(MapIcon::Lever, "Lever", "WestHollow.InFrontPurpleDoorLever", {-166.30f,-4214.26f});
            make_icon(MapIcon::Lever, "Lever", "WestHollow.FarLeftRoomUpperLever", {-393.86f,-4271.03f});
            make_icon(MapIcon::Lever, "Lever", "WestHollow.FarLeftRoomLowerLever", {-399.11f,-4295.54f});
            make_icon(MapIcon::Lever, "Lever", "WestHollow.DashApproachLever", {-99.75f,-4439.03f});
            make_icon(MapIcon::Lever, "Lever", "DepthsShrineLever", {249.19f,-4531.24f});
            make_icon(MapIcon::Lever, "Lever", "LowerWastes.LeverAreaLever", {1868.59f,-3933.08f});
            make_icon(MapIcon::Lever, "Lever", "UpperWastes.MissilePuzzleMiddleLever", {2021.90f,-3791.81f});
            make_icon(MapIcon::Lever, "Lever", "WindtornRuins.UpperRuinsDoorLever", {2191.75f,-3868.96f});
        }

        auto initialized = false;
        auto on_ready = event_bus().register_handler(RandomizerEvent::LocationCollectionLoaded, EventTiming::After, [](auto, auto) {
            if (initialized) {
                return;
            }

            auto game_finished = core::api::uber_states::UberState(34543, 11226);
            initialized = true;
            for (auto i = 0; i < static_cast<int>(GameArea::TOTAL); ++i) {
                const auto area = static_cast<GameArea>(i);
                if (area == GameArea::Void) {
                    continue;
                }

                for (const auto& location: location_collection().locations(area)) {
                    if (!location.map_position.has_value() || location.type == location_data::LocationType::Shop) {
                        continue;
                    }

                    const auto in_logic_icon = add_icon(FilterFlag::InLogic);
                    const auto spoiler_icon = add_icon(FilterFlag::Spoilers);
                    const auto condition = location.condition;

                    in_logic_icon->icon().assign([](auto) {}, [condition, game_finished] {
                        const auto new_location = location_collection().location(condition);

                        if (active_filter() == Filters::Spoilers) {
                            return game_seed().icon(condition);
                        }

                        if (!new_location.has_value()) {
                            return MapIcon::Invisible;
                        }

                        return select_icon(new_location.value());
                    });
                    spoiler_icon->icon().assign([](auto) {}, [condition, game_finished] { return game_seed().icon(condition); });

                    in_logic_icon->position().set(location.map_position.value());
                    in_logic_icon->name().set(location.name);
                    in_logic_icon->label().set(icon_label(location, location.condition));
                    spoiler_icon->position().set(location.map_position.value());
                    spoiler_icon->name().set(location.name);
                    spoiler_icon->label().set(icon_label(location, location.condition));

                    add_icon_visibility_callback(in_logic_icon, [location](auto) {
                        // Don't show icon if it has been picked up.
                        if (location.condition.resolve()) {
                            return IconVisibilityResult::Hide;
                        }

                        // Show icon based on if it is reachable or not.
                        return reach_check().reachable(location.condition) //
                            ? IconVisibilityResult::Show
                            : eps_equals(core::settings::map_icon_transparency(), 0.f) //
                                ? IconVisibilityResult::Hide
                                : IconVisibilityResult::ShowTransparent;
                    });
                }
            }

            npc_icons();

            // TODO: Add conditions and then enable this again
            // one_way_walls();
            // purple_walls();
            // yellow_walls();
            // ice_walls();
            // interactive_doors();
            // levers();
        });

        auto on_after_reachable_items_changed = randomizer::event_bus().register_handler(RandomizerEvent::ReachableItemsChanged, EventTiming::After, [](auto, auto) {
            if (core::api::game::ui::area_map_open()) {
                refresh();
            }
        });
    } // namespace
} // namespace randomizer::game::map
