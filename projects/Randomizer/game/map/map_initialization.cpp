#include <game/map/map.h>

#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/settings.h>

#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/RuntimeGameWorldArea.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <Randomizer/randomizer.h>

#include <unordered_set>

namespace randomizer::game::map {
    namespace {
        struct IconData {
            std::shared_ptr<Icon> icon;
            std::string original_label;
            app::WorldMapIconType__Enum original_type;
        };

        std::unordered_map<core::api::uber_states::UberStateCondition, std::shared_ptr<Icon>> spoilers;
        std::unordered_map<core::api::uber_states::UberStateCondition, std::shared_ptr<Icon>> logics;

        std::unordered_set<app::GameWorldAreaID__Enum> initialized_areas;
        IL2CPP_INTERCEPT(RuntimeGameWorldArea, void, ctor, (app::RuntimeGameWorldArea * this_ptr, app::GameWorldArea* area)) {
            next::RuntimeGameWorldArea::ctor(this_ptr, area);

            // Make spoiler and in_logic icons of default icons.
            if (!initialized_areas.contains(area->fields.WorldMapAreaUniqueID)) {
                initialized_areas.emplace(area->fields.WorldMapAreaUniqueID);
                for (auto i = 0; i < this_ptr->fields.Icons->fields._size; ++i) {
                    auto* item = this_ptr->fields.Icons->fields._items->vector[i];
                    // TODO: Need to handle quests/wisps/shops
                    if (item->fields.IsCollectedState == nullptr) {
                        continue;
                    }

                    auto state = core::api::uber_states::UberState(item->fields.IsCollectedState);
                    auto condition = core::api::uber_states::UberStateCondition{ state, BooleanOperator::Greater, 0 };
                    auto in_logic = add_icon(FilterFlag::InLogic);

                    in_logic->icon(item->fields.Icon);
                    in_logic->position(item->fields.Position);
                    in_logic->name(fmt::format(
                        "in_logic: ({}, {}) {} {}",
                        static_cast<int>(condition.state.group()),
                        condition.state.state(),
                        static_cast<int>(condition.op),
                        condition.value
                    ));
                    add_icon_visibility_callback(in_logic, [condition](auto) {
                        // Don't show icon if it has been picked up.
                        if (condition.resolve()) {
                            return IconVisibilityResult::Hide;
                        }

                        // Show icon based on if it is reachable or not.
                        return randomizer::reach_check().reachable(condition)
                            ? IconVisibilityResult::Show
                            : (
                                eps_equals(core::settings::map_icon_transparency(), 0.f)
                                      ? IconVisibilityResult::Hide
                                      : IconVisibilityResult::ShowTransparent
                            );
                    });
                    logics[condition] = in_logic;

                    auto spoiler = add_icon(FilterFlag::Spoilers);
                    spoiler->icon(item->fields.Icon);
                    spoiler->position(item->fields.Position);
                    spoilers[{ state, BooleanOperator::Greater, 0 }] = spoiler;
                }
            }
        }

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            // TODO: Add in_logic versions of icons here as well.
            auto icon = add_icon(FilterFlag::Spoilers);
            icon->icon(app::WorldMapIconType__Enum::AbilityPedestal);
            icon->position({ -296.395905f, -4480.f });
            spoilers[{ core::api::uber_states::UberState(UberStateGroup::Tree, app::AbilityType__Enum::Sword), BooleanOperator::Equals, 1.0f }] = icon;

            // The Missing Key
            icon = add_icon(FilterFlag::All | FilterFlag::Collectibles | FilterFlag::Quests);
            icon->icon(app::WorldMapIconType__Enum::QuestItem);
            icon->position({ -695, -4417 });
            add_icon_visibility_callback(icon, [](auto) {
                return core::api::uber_states::UberState(static_cast<UberStateGroup>(48248), 51645).get() > 2.5f ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
            });

            icon = add_icon(FilterFlag::Spoilers);
            icon->icon(app::WorldMapIconType__Enum::QuestItem);
            icon->position({ -695, -4417 });
            spoilers[{ core::api::uber_states::UberState(static_cast<UberStateGroup>(48248), 51645), BooleanOperator::GreaterOrEquals, 3.0f }] = icon;

            // Into The Burrows
            icon = add_icon(FilterFlag::All | FilterFlag::Collectibles | FilterFlag::Quests);
            icon->icon(app::WorldMapIconType__Enum::QuestItem);
            icon->position({ -932, -4494 });
            add_icon_visibility_callback(icon, [](auto) {
                return core::api::uber_states::UberState(static_cast<UberStateGroup>(48248), 18458).get() > 3.5f ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
            });

            icon = add_icon(FilterFlag::Spoilers);
            icon->icon(app::WorldMapIconType__Enum::QuestItem);
            icon->position({ -932, -4494 });
            spoilers[{ core::api::uber_states::UberState(static_cast<UberStateGroup>(48248), 18458), BooleanOperator::GreaterOrEquals, 4.0f }] = icon;

            // A Little Braver
            icon = add_icon(FilterFlag::All | FilterFlag::Collectibles | FilterFlag::Quests);
            icon->icon(app::WorldMapIconType__Enum::QuestItem);
            icon->position({ -391, -4414 });
            add_icon_visibility_callback(icon, [](auto) {
                return core::api::uber_states::UberState(static_cast<UberStateGroup>(14019), 15983).get() > 2.5f ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
            });

            icon = add_icon(FilterFlag::Spoilers);
            icon->icon(app::WorldMapIconType__Enum::QuestItem);
            icon->position({ -391, -4414 });
            spoilers[{ core::api::uber_states::UberState(static_cast<UberStateGroup>(14019), 15983), BooleanOperator::GreaterOrEquals, 3.0f }] = icon;

            // Marsh Keystone
            icon = add_icon(FilterFlag::All | FilterFlag::Collectibles);
            icon->icon(app::WorldMapIconType__Enum::Keystone);
            icon->position({ -461.027069f, -4195.8754808f });
            add_icon_visibility_callback(icon, [](auto) {
                return core::api::uber_states::UberState(static_cast<UberStateGroup>(21786), 27433).get() > 0.5f ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
            });

            icon = add_icon(FilterFlag::Spoilers);
            icon->icon(app::WorldMapIconType__Enum::Keystone);
            icon->position({ -461.027069f, -4195.8754808f });
            spoilers[{ core::api::uber_states::UberState(static_cast<UberStateGroup>(21786), 27433), BooleanOperator::Equals, 1.0f }] = icon;

            // Marsh Keystone
            icon = add_icon(FilterFlag::All | FilterFlag::Collectibles);
            icon->icon(app::WorldMapIconType__Enum::Keystone);
            icon->position({ -461.027069f, -4195.8754808f });
            add_icon_visibility_callback(icon, [](auto) {
                return core::api::uber_states::UberState(static_cast<UberStateGroup>(21786), 37225).get() > 0.5f ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
            });

            // Marsh Lupo
            icon = add_icon(FilterFlag::Spoilers);
            icon->icon(app::WorldMapIconType__Enum::Mapmaker);
            icon->position({ -589.f, -4348.f });
            add_icon_visibility_callback(icon, [](auto) {
                return core::api::uber_states::UberState(static_cast<UberStateGroup>(48248), 18767).get() > 0.5f ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
            });

            // Marsh Opher
            icon = add_icon(FilterFlag::Spoilers);
            icon->icon(app::WorldMapIconType__Enum::Weaponmaster);
            icon->position({ -597.f, -4293.f });
            add_icon_visibility_callback(icon, [](auto) {
                return core::api::uber_states::UberState(UberStateGroup::OpherWeapon, 20000).get() > 0.5f ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
            });

            // Marsh Trial
            icon = add_icon(FilterFlag::Spoilers);
            icon->icon(app::WorldMapIconType__Enum::RaceStart);
            icon->position({ -614.200012f, -4317.200195f });
            add_icon_visibility_callback(icon, [](auto) {
                return core::api::uber_states::UberState(static_cast<UberStateGroup>(44964), 45951).get() > 1.5f ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
            });

            // TODO: Finish this conversion.
            // extra_icons[app::GameWorldAreaID__Enum::KwoloksHollow] = {
            //     { app::WorldMapIconType__Enum::QuestItem, -110, -4220, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 1.f } }, // EastHollow.HandToHandMap
            //     { app::WorldMapIconType__Enum::QuestItem, 240, -4207, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 50597), Comparison::GreaterOrEquals, 4.f } }, // EastHollow.KwoloksWisdom,
            //     { app::WorldMapIconType__Enum::Mapmaker, -146.f, -4321.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 3638), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::Shardtrader, -281.f, -4239.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(UberStateGroup::TwillenShard, 20000), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::RaceStart, -115.000000f, -4257.200195f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 25545), Comparison::GreaterOrEquals, 2.f }, {} }, // WestHollow.SpiritTrial
            // };

            // extra_icons[app::GameWorldAreaID__Enum::WellspringGlades] = {
            //     { app::WorldMapIconType__Enum::QuestItem, -282, -4155, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 2.f } }, // GladesTown.HandToHandPouch
            //     { app::WorldMapIconType__Enum::QuestItem, -426, -4155, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 6.f } }, // GladesTown.HandToHandLantern
            //     { app::WorldMapIconType__Enum::QuestItem, -410, -4142, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 9.f } }, // GladesTown.HandToHandCanteen
            //     { app::WorldMapIconType__Enum::QuestItem, -110, -4090, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 4.f } }, // GladesTown.HandToHandSoup
            //     { app::WorldMapIconType__Enum::QuestItem, -385, -4161, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 27804), Comparison::GreaterOrEquals, 2.f } }, // GladesTown.FamilyReunionKey
            //     { app::WorldMapIconType__Enum::QuestItem, -366, -4185, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 2782), Comparison::Greater, -1.f } }, // GladesTown.AcornQI
            //     { app::WorldMapIconType__Enum::QuestItem, -358, -4185, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 33776), Comparison::GreaterOrEquals, 3.f } }, // GladesTown.IntoTheDarkness
            //     { app::WorldMapIconType__Enum::QuestItem, -320, -4152, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 44578), Comparison::GreaterOrEquals, 2.f } }, // GladesTown.RebuildTheGlades
            //     { app::WorldMapIconType__Enum::QuestItem, -408, -4162, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(23987), 14832), Comparison::Greater, -1.f } }, // GladesTown.ADiamondInTheRough
            //     { app::WorldMapIconType__Enum::QuestItem, -170, -4138, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26394), Comparison::GreaterOrEquals, 2.f } }, // GladesTown.RegrowTheGlades
            //     { app::WorldMapIconType__Enum::Weaponmaster, -204.f, -4147.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(UberStateGroup::OpherWeapon, 20000), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::Mapmaker, -209.f, -4163.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 20000), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::Shardtrader, -410.f, -4162.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(UberStateGroup::TwillenShard, 20000), Comparison::Greater, -1.f }, {} },
            // };

            // extra_icons[app::GameWorldAreaID__Enum::WaterMill] = {
            //     { app::WorldMapIconType__Enum::QuestItem, -811, -3973, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 20667), Comparison::GreaterOrEquals, 3.f } }, // OuterWellspring.TheLostCompass
            //     { app::WorldMapIconType__Enum::QuestItem, -1168, -3733, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 3.f } }, // InnerWellspring.HandToHandHerbs
            //     { app::WorldMapIconType__Enum::QuestItem, -1159, -3635, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(37858), 12379), Comparison::Greater, -1.f } }, // InnerWellspring.WaterEscape
            //     { app::WorldMapIconType__Enum::Mapmaker, -1190.f, -3861.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 1590), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::Weaponmaster, -1260.f, -3677.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(UberStateGroup::OpherWeapon, 20000), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::RaceStart, -668.349976f, -3935.040283f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 11512), Comparison::GreaterOrEquals, 2.f }, {} }, // OuterWellspring.SpiritTrial
            // };

            // extra_icons[app::GameWorldAreaID__Enum::LumaPools] = {
            //     { app::WorldMapIconType__Enum::QuestItem, -1173, -4154, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 53103), Comparison::Greater, -1.f } }, // EastPools.KwoloksWisdomAmulet
            //     { app::WorldMapIconType__Enum::QuestItem, -1284, -4126, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 8.f } }, // EastPools.HandToHandSpyglass
            //     { app::WorldMapIconType__Enum::QuestEnd, -1928, -4066, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(945), 49747), Comparison::Greater, -1.f } }, // WestPools.ForestsStrength
            //     { app::WorldMapIconType__Enum::Mapmaker, -1391.f, -4167.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 1557), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::RaceStart, -1416.753174f, -4124.448242f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 54686), Comparison::GreaterOrEquals, 2.f }, {} }, // EastPools.SpiritTrial
            // };

            // extra_icons[app::GameWorldAreaID__Enum::SilentWoodland] = {
            //     { app::WorldMapIconType__Enum::Keystone, 907.865112f, -4121.716309f, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(58674), 19769), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::QuestItem, 513, -4158, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 59708), Comparison::GreaterOrEquals, 1.f } }, // WoodsEntry.LastTreeBranch
            //     { app::WorldMapIconType__Enum::QuestItem, 469, -4180, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 57399), Comparison::Greater, -1.f } }, // WoodsEntry.DollQI
            //     { app::WorldMapIconType__Enum::QuestItem, 513, -4159, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 7470), Comparison::Greater, -1.f } }, // WoodsEntry.TreeSeed
            //     { app::WorldMapIconType__Enum::RaceStart, 819.549988f, -4045.100098f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 22703), Comparison::GreaterOrEquals, 2.f }, {} }, // WoodsMain.SpiritTrial
            // };

            // extra_icons[app::GameWorldAreaID__Enum::BaursReach] = {
            //     { app::WorldMapIconType__Enum::Experience, 68.761978f, -3730.634521f, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(28895), 46404), Comparison::Greater, -1.f }, {} }, // UpperReach.RevisitEX
            //     { app::WorldMapIconType__Enum::QuestItem, -244, -3989, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 5.f } }, // LowerReach.HandToHandHat
            //     { app::WorldMapIconType__Enum::QuestEnd, -31, -3711, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(28895), 25522), Comparison::Greater, -1.f } }, // UpperReach.ForestsMemory
            //     { app::WorldMapIconType__Enum::Mapmaker, -275.f, -3996.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 29604), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::RaceStart, 76.593750f, -4035.282715f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 23661), Comparison::GreaterOrEquals, 2.f }, {} }, // LowerReach.SpiritTrial
            // };

            // extra_icons[app::GameWorldAreaID__Enum::MouldwoodDepths] = {
            //     { app::WorldMapIconType__Enum::QuestItem, 317, -4508, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 7.f } }, // LowerDepths.HandToHandSilk
            //     { app::WorldMapIconType__Enum::QuestEnd, 687, -4386, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(18793), 63291), Comparison::Greater, -1.f } }, // UpperDepths.ForestsEyes
            //     { app::WorldMapIconType__Enum::Mapmaker, 682.f, -4576.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 48423), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::RaceStart, 478.299988f, -4515.700195f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 28552), Comparison::GreaterOrEquals, 2.f }, {} }, // LowerDepths.SpiritTrial
            // };

            // extra_icons[app::GameWorldAreaID__Enum::WindsweptWastes] = {
            //     { app::WorldMapIconType__Enum::QuestItem, 1641, -4003, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 58342), Comparison::Greater, -1.f } }, // LowerWastes.EerieGem
            //     { app::WorldMapIconType__Enum::QuestItem, 1685, -3923, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 10.f } }, // LowerWastes.HandToHandMapstone
            //     { app::WorldMapIconType__Enum::Mapmaker, 1647.f, -3899.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 61146), Comparison::Greater, -1.f }, {} },
            //     { app::WorldMapIconType__Enum::RaceStart, 1526.199951f, -4007.700195f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(44964), 30767), Comparison::GreaterOrEquals, 2.f }, {} }, // LowerWastes.SpiritTrial
            // };

            // extra_icons[app::GameWorldAreaID__Enum::WindtornRuins] = {
            //     { app::WorldMapIconType__Enum::QuestItem, 1969, -4024, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(14019), 26318), Comparison::GreaterOrEquals, 11.f } }, // WindtornRuins.HandToHandComplete
            //     { app::WorldMapIconType__Enum::QuestEnd, 2056, -3568, false, ExtraIconDisplayCondition::SpoilerAndNormal, false, L"", {}, { true, uber_states::UberState(static_cast<UberStateGroup>(10289), 22102), Comparison::Greater, -1.f } }, // UpperDepths.WindtornRuins.Seir
            // };

            // extra_icons[app::GameWorldAreaID__Enum::MidnightBurrow] = {
            //     { app::WorldMapIconType__Enum::Mapmaker, -870.f, -4555.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 45538), Comparison::Greater, -1.f }, {} }
            // };

            // extra_icons[app::GameWorldAreaID__Enum::WillowsEnd] = {
            //     { app::WorldMapIconType__Enum::Mapmaker, 474.f, -3859.f, false, ExtraIconDisplayCondition::Spoiler, false, L"", { true, uber_states::UberState(static_cast<UberStateGroup>(48248), 4045), Comparison::Greater, -1.f }, {} }
            // };
        });
    } // namespace

    std::shared_ptr<Icon> get_spoiler_icon(core::api::uber_states::UberStateCondition state) {
        return spoilers[state];
    }

    void show_location_on_labels(bool value) {
    }
} // namespace randomizer::game::map
