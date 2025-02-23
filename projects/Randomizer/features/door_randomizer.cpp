#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/scenes/scene_load.h>
#include <Core/api/system/message_provider.h>
#include <Core/events/task.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/CharacterPlatformMovement.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/RuntimeSceneMetaData.h>
#include <Modloader/app/methods/SceneMetaData.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinDoorHandler.h>
#include <Modloader/app/types/LegacyDoor.h>
#include <Modloader/app/types/ReverseSceneLoadingZone.h>
#include <Modloader/app/types/SceneMetaData.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>
#include <Randomizer/features/door_randomizer.h>
#include <ranges>
#include <set>
#include <string>
#include <unordered_map>

namespace randomizer::doors {
    namespace {
        using namespace app::classes;

        std::vector<std::shared_ptr<core::reactivity::ReactiveEffect>> effects;
        auto queue_placing_ori_on_ground = false;
        std::optional<app::Vector3> queued_ground_placement = std::nullopt;

        const std::unordered_map<DoorName, int> DOOR_NAME_TO_DOOR_ID = {
            {"lupoShopDoorOutside",     1 },
            {"lupoShopDoorInside",      2 },
            {"hutBEntrance",            3 },
            {"hutBExit",                4 },
            {"hutCEntrance",            5 },
            {"hutCExit",                6 },
            {"hutDEntrance",            7 },
            {"hutDExit",                8 },
            {"hutEEntrance",            9 },
            {"hutEExit",                10},
            {"hutFEntrance",            11},
            {"hutFExit",                12},
            {"caveEntrance",            13},
            {"caveExit",                14},
            {"waterMillOutsideDoorA",   15},
            {"waterMillInsideDoorA",    16},
            {"waterMillOutsideDoorB",   17},
            {"waterMillInsideDoorB",    18},
            {"waterMillOutsideDoorC",   19},
            {"waterMillInsideDoorC",    20},
            {"waterMillOutsideDoorD",   21},
            {"waterMillInsideDoorD",    22},
            {"baursReachHutEntrance",   23},
            {"baursReachHutExit",       24},
            {"petrifiedHutDoorOutside", 25},
            {"petrifiedHutDoorInside",  26},
            {"desertRuinsEntranceDoor", 27},
            {"doorB",                   28}, // Outer ruins door
            {"willowsEndEntrance",      29},
            {"willowsEndExit",          30},
            {"powlArenaEntrance",       31},
            {"powlArenaExit",           32},
        };

        inline const std::unordered_map<int, DoorName> DOOR_ID_TO_DOOR_NAME = [] {
            std::unordered_map<int, DoorName> map;

            for (const auto& [name, id]: DOOR_NAME_TO_DOOR_ID) {
                map.emplace(id, name);
            }

            return map;
        }();

        // Default door configurations. The actual used doors are below.
        const std::unordered_map<DoorName, DoorInfo> DEFAULT_DOORS{
            {"lupoShopDoorOutside",     {"lupoShopEntrance", {"wellspringGladesHubB"}, "lupoShopDoorInside"}                                               },
            {"lupoShopDoorInside",      {"lupoShopExit", {"hutInteriorA"}, "lupoShopDoorOutside"}                                                          },
            {"hutBEntrance",            {"lastHutEntrance", {"wellspringGladesHub"}, "hutBExit"}                                                           },
            {"hutBExit",                {"lastHutExit", {"hutInteriorB"}, "hutBEntrance"}                                                                  },
            {"hutCEntrance",            {"hutAboveMotayEntrance", {"wellspringGladesHub", "wellspringGladesHubSetups"}, "hutCExit"}                        },
            {"hutCExit",                {"hutAboveMotayExit", {"hutInteriorC"}, "hutCEntrance"}                                                            },
            {"hutDEntrance",            {"holeHutEntrance", {"wellspringGladesHubB"}, "hutDExit"}                                                          },
            {"hutDExit",                {"holeHutExit", {"hutInteriorD"}, "hutDEntrance"}                                                                  },
            {"hutEEntrance",            {"mokiFatherHutEntrance", {"wellspringGladesHub"}, "hutEExit"}                                                     },
            {"hutEExit",                {"mokiFatherHutExit", {"hutInteriorE"}, "hutEEntrance"}                                                            },
            {"hutFEntrance",            {"hutAboveOpherEntrance", {"wellspringGladesHubB", "wellspringGladesHubSetups"}, "hutFExit"}                       },
            {"hutFExit",                {"hutAboveOpherExit", {"hutInteriorF"}, "hutFEntrance"}                                                            },
            {"caveEntrance",            {"caveEntrance", {"wellspringGladesHub"}, "caveExit"}                                                              },
            {"caveExit",                {"caveExit", {"hubCaveInterior"}, "caveEntrance"}                                                                  },
            {"waterMillOutsideDoorA",   {"wellspringFirstFloorEntranceBottom", {"waterMillEntrance"}, "waterMillInsideDoorA"}                              },
            {"waterMillInsideDoorA",    {"wellspringFirstFloorExitBottom", {"wotwSaveRoomC__clone0__clone1", "naruGumoBuildRaft"}, "waterMillOutsideDoorA"}},
            {"waterMillOutsideDoorB",   {"wellspringFirstFloorEntranceTop", {"waterMillEntrance"}, "waterMillInsideDoorB"}                                 },
            {"waterMillInsideDoorB",    {"wellspringFirstFloorExitTop", {"waterMillAExit"}, "waterMillOutsideDoorB"}                                       },
            {"waterMillOutsideDoorC",   {"wellspringSecondFloorEntrance", {"waterMillEntrance"}, "waterMillInsideDoorC"}                                   },
            {"waterMillInsideDoorC",    {"wellspringSecondFloorExit", {"waterMillBEntrance", "waterMillBCorridorB"}, "waterMillOutsideDoorC"}                                     },
            {"waterMillOutsideDoorD",   {"wellspringThirdFloorEntrance", {"waterMillEntranceTop", "waterMillEntrance"}, "waterMillInsideDoorD"}                                 },
            {"waterMillInsideDoorD",    {"wellspringThirdFloorExit", {"waterMillCEntrance"}, "waterMillOutsideDoorD"}                                      },
            {"baursReachHutEntrance",   {"reachSeedHutEntrance", {"baursReachGetAbility"}, "baursReachHutExit"}                                            },
            {"baursReachHutExit",       {"reachSeedHutExit", {"baursReachHutInterior"}, "baursReachHutEntrance"}                                           },
            {"petrifiedHutDoorOutside", {"teddyHutEntrance", {"petrifiedForestNewTransitionOri"}, "petrifiedHutDoorInside"}                                },
            {"petrifiedHutDoorInside",  {"teddyHutExit", {"petrifiedForestHutInterior"}, "petrifiedHutDoorOutside"}                                        },
            {"desertRuinsEntranceDoor", {"ruinsEntrance", {"desertRuinsTowerEntranceA"}, "doorB"}                                                          },
            {"doorB",                   {"ruinsExit", {"windtornRuinsA", "desertRuinsEnterMaster"}, "desertRuinsEntranceDoor"}                             },
            {"willowsEndEntrance",      {"willowsEndEntrance", {"weepingRidgeWillowsEndEntrance"}, "willowsEndExit"}                                       },
            {"willowsEndExit",          {"willowsEndExitBottom", {"willowsEndHub", "flyToTree", "willowCeremonyQuarterViewCloseUp"}, "willowsEndEntrance"} },
            {"powlArenaEntrance",       {"willowsEndExitTop", {"willowsEndExit"}, "powlArenaExit"}                                                         },
            {"powlArenaExit",           {"shriekRoomExit", {"willowCeremonyIntro"}, "powlArenaEntrance"}                                                   },
        };

        // Actual door configuration
        std::unordered_map<DoorName, DoorInfo> doors = DEFAULT_DOORS;

        /**
         * This is a mapping from scene name -> loading boundary indexes that will be removed from the game.
         * We remove them because we create custom loading boundaries on the fly.
         */
        std::unordered_map<DoorName, std::set<int>> scene_loading_zones_related_to_doors{
            // Glades
            {"wellspringGladesHub",             {2, 3, 4, 5}         },
            {"wellspringGladesHubB",            {1, 2, 3}            },
            {"hutInteriorA",                    {0}                  },
            {"hutInteriorB",                    {0}                  },
            {"hutInteriorC",                    {0}                  },
            {"hutInteriorD",                    {0}                  },
            {"hutInteriorE",                    {0}                  },
            {"hutInteriorF",                    {0}                  },
            {"hubCaveInterior",                 {0}                  },

            // Wellspring
            {"waterMillEntrance",               {2, 3, 4, 5, 6, 7, 8}},
            {"waterMillEntranceTop",            {0, 1}               },
            {"wotwSaveRoomC__clone0__clone1",   {0}                  },
            {"waterMillAExit",                  {0}                  },
            {"waterMillBEntrance",              {0}                  },
            {"waterMillCEntrance",              {0, 1}               },

            // Reach
            {"baursReachGetAbility",            {0}                  },
            {"baursReachHutInterior",           {0}                  },

            // Woods
            {"petrifiedForestNewTransitionOri", {2}                  },
            {"petrifiedForestHutInterior",      {0}                  },

            // Ruins
            {"desertRuinsTowerEntranceA",       {0}                  },
            {"windtornRuinsA",                  {0, 1}               },

            // Willow
            {"weepingRidgeWillowsEndEntrance",  {0}                  },
            {"willowsEndHub",                   {0}                  },
            {"willowsEndExit",                  {8}                  },
            {"willowCeremonyIntro",             {0}                  },
        };

        void setup_door_target_loading_zone(DoorInfo& from_door, app::LegacyDoor* door) {
            from_door.clear_target_loading_zones();

            if (!from_door.target_door_name.has_value()) {
                door->fields.OverrideEnterDoorMessage = core::api::system::create_message_provider("This door is closed");
                return;
            }

            door->fields.OverrideEnterDoorMessage = nullptr;

            const auto& to_door = doors.at(*from_door.target_door_name);
            const auto door_position = modloader::math::convert(il2cpp::unity::get_position(door));

            for (auto& scene_name: to_door.scene_names) {
                DoorLoadingZone zone{
                    scene_name,
                    {
                        door_position.x - 20.f,
                        door_position.y - 20.f,
                        40.f, 40.f,
                    }
                };

                const auto scenes_manager = core::api::scenes::get_scenes_manager();
                for (auto& scene: il2cpp::ListIterator(scenes_manager->fields.AllScenes)) {
                    if (il2cpp::convert_csstring(scene->fields.Scene) == scene_name) {
                        il2cpp::invoke(scene->fields.SceneLoadingBoundaries, "Add", &zone.rect);

                        // Recalculate total scene rectangle
                        scene->fields.m_doneTotal = false;
                        RuntimeSceneMetaData::DoTotal(scene);

                        from_door.target_loading_zones_cache.push_back(zone);

                        ScenesManager::GenerateGuidToRuntimeSceneMetaDataDictionaryAndQuadTree(scenes_manager, true);
                        goto next_scene;
                    }
                }

                modloader::warn("door_randomizer", std::format("Could not setup target loading zone '{}' for target door '{}'", scene_name, *from_door.target_door_name));

                next_scene:;
            }
        }

        void setup_door_reverse_scene_loading_zones(const DoorInfo& from_door, app::LegacyDoor* door) {
            if (!from_door.target_door_name.has_value()) {
                return;
            }

            const auto& to_door = doors.at(*from_door.target_door_name);

            // We need to override the target of the first ReverseSceneLoadingZone component in a door because
            // it *may* be used to determine a scene to preload in case the normal loading zone is not fast enough
            // with loading the actual target door.
            const auto reverse_loading_zones = il2cpp::unity::get_components_in_children<app::ReverseSceneLoadingZone>(
                il2cpp::unity::get_game_object(door), types::ReverseSceneLoadingZone::get_class(), true
            );

            const auto runtime_scene_meta = core::api::scenes::get_runtime_scene_metadata(to_door.scene_names.at(0));
            const auto scene_meta = types::SceneMetaData::create();
            SceneMetaData::ctor(scene_meta);
            scene_meta->fields.SceneMoonGuid = runtime_scene_meta->fields.SceneMoonGuid;

            for (auto& reverse_loading_zone: reverse_loading_zones) {
                reverse_loading_zone->fields.SceneToLoad = scene_meta;
            }
        }

        [[maybe_unused]] auto on_scene_load = core::api::scenes::event_bus().register_handler([](core::api::scenes::SceneLoadEventMetadata* metadata) {
            if (metadata->state != app::SceneState__Enum::Loaded) {
                return;
            }

            const auto doors_in_scene = il2cpp::unity::get_components_in_children<app::LegacyDoor>(
                metadata->scene->fields.SceneRoot, types::LegacyDoor::get_class(), true
            );

            for (auto door: doors_in_scene) {
                const auto door_name = il2cpp::unity::get_object_name(door);
                const auto door_it = doors.find(door_name);

                if (door_it == doors.end()) {
                    modloader::warn("door_randomizer", std::format("Encountered unknown door '{}'", door_name));
                    continue;
                }

                setup_door_reverse_scene_loading_zones(door_it->second, door);

                if (door_it->second.has_target_loading_zones()) {
                    continue;
                }

                setup_door_target_loading_zone(door_it->second, door);
            }
        });

        IL2CPP_INTERCEPT(ScenesManager, void, Awake, (app::ScenesManager * this_ptr)) {
            for (auto& scene: il2cpp::ListIterator(this_ptr->fields.AllScenes)) {
                auto it = scene_loading_zones_related_to_doors.find(il2cpp::convert_csstring(scene->fields.Scene));
                if (it != scene_loading_zones_related_to_doors.end()) {
                    for (auto& index: it->second | std::views::reverse) {
                        int index_copy = index;
                        il2cpp::invoke(scene->fields.SceneLoadingBoundaries, "RemoveAt", &index_copy);
                    }
                }
            }

            next::ScenesManager::Awake(this_ptr);
        }

        IL2CPP_INTERCEPT(SeinDoorHandler, void, OnGoneThroughDoor, (app::SeinDoorHandler * this_ptr)) {
            next::SeinDoorHandler::OnGoneThroughDoor(this_ptr);
            core::api::game::save();
        }

        IL2CPP_INTERCEPT(SeinDoorHandler, void, FadeOutOnTimelineEnd, (app::SeinDoorHandler * this_ptr)) {
            next::SeinDoorHandler::FadeOutOnTimelineEnd(this_ptr);
            core::api::game::save();
        }

        IL2CPP_INTERCEPT(SeinDoorHandler, void, FixedUpdate, (app::SeinDoorHandler * this_ptr)) {
            if (this_ptr->fields.m_state == app::SeinDoorHandler_State__Enum::WaitingForScene) {
                // Make sure the target door has z = 0, otherwise the downwards raycast
                // fails on some doors because Moon jank
                if (this_ptr->fields.m_targetDoor != nullptr) {
                    auto target_door_position = il2cpp::unity::get_position(this_ptr->fields.m_targetDoor);
                    target_door_position.z = 0.f;
                    il2cpp::unity::set_position(this_ptr->fields.m_targetDoor, target_door_position);
                }
            }

            if (queued_ground_placement.has_value()) {
                const auto sein = core::api::game::player::sein();
                CharacterPlatformMovement::TeleportAndPlaceOnGround_1(
                    sein->fields.PlatformBehaviour->fields.PlatformMovement, *queued_ground_placement, 0.1f, 5.f
                );

                queued_ground_placement = std::nullopt;
            }

            modloader::ScopedSetter _1(queue_placing_ori_on_ground, true);
            next::SeinDoorHandler::FixedUpdate(this_ptr);
        }

        IL2CPP_INTERCEPT(
            CharacterPlatformMovement,
            bool,
            TeleportAndPlaceOnGround_2,
            (app::CharacterPlatformMovement * this_ptr, app::Vector3 target, app::RaycastHit* hit, float lift, float distance)
        ) {
            if (queue_placing_ori_on_ground) {
                queued_ground_placement = target;
                distance = 5.f; // For our beloved Glades hut
            }

            return next::CharacterPlatformMovement::TeleportAndPlaceOnGround_2(this_ptr, target, hit, lift, distance);
        }

        IL2CPP_INTERCEPT(SeinDoorHandler, void, EnterIntoDoor, (app::SeinDoorHandler * this_ptr, app::LegacyDoor* door)) {
            const auto door_name = il2cpp::unity::get_object_name(door);

            const auto it = doors.find(door_name);
            if (it == doors.end()) {
                modloader::warn("door_randomizer", std::format("Unknown door '{}'", door_name));
            } else {
                if (!it->second.target_door_name.has_value()) {
                    return;
                }

                door->fields.OtherDoorName = il2cpp::string_new(*it->second.target_door_name);

                if (it->second.target_door_name.has_value()) {
                    const auto to_it = doors.find(*it->second.target_door_name);

                    if (to_it == doors.end()) {
                        modloader::warn("door_randomizer", std::format("Unknown door '{}'", *it->second.target_door_name));
                        return;
                    }

                    door->fields.AdditionalScenesToBlockOn = types::SceneMetaData::create_array(to_it->second.scene_names.size() - 1);

                    for (int i = 0; i < to_it->second.scene_names.size() - 1; ++i) {
                        const auto runtime_scene_meta = core::api::scenes::get_runtime_scene_metadata(to_it->second.scene_names.at(i));
                        const auto scene_meta = types::SceneMetaData::create();
                        scene_meta->fields.SceneMoonGuid = runtime_scene_meta->fields.SceneMoonGuid;

                        door->fields.AdditionalScenesToBlockOn->vector[i] = scene_meta;
                    }

                    core::api::uber_states::UberState visited_uber_state(UberStateGroup::DoorsVisited, DOOR_NAME_TO_DOOR_ID.at(it->first));
                    visited_uber_state.set<bool>(true);
                }
            }

            next::SeinDoorHandler::EnterIntoDoor(this_ptr, door);

            // We always create a checkpoint in our OnGoneThroughDoor intercept
            this_ptr->fields.m_createCheckpoint = false;
        }

        IL2CPP_INTERCEPT(SeinDoorHandler, app::LegacyDoor*, GetTargetDoor, (app::SeinDoorHandler * this_ptr, app::LegacyDoor* door)) {
            const auto door_name = il2cpp::unity::get_object_name(door);

            const auto current_it = doors.find(door_name);
            if (current_it == doors.end()) {
                modloader::warn("door_randomizer", std::format("Unknown door '{}'", door_name));
            } else {
                if (!current_it->second.target_door_name.has_value()) {
                    return nullptr;
                }

                const auto target_it = doors.find(*current_it->second.target_door_name);
                if (target_it == doors.end()) {
                    modloader::warn("door_randomizer", std::format("Unknown door '{}'", door_name));
                } else {
                    const auto target_door_scene_name = target_it->second.scene_names.at(0);
                    const auto scene_root = core::api::scenes::get_scene_root(target_door_scene_name);

                    if (scene_root != nullptr && il2cpp::unity::is_valid(scene_root)) {
                        const auto found_doors = il2cpp::unity::get_components_in_children<app::LegacyDoor>(scene_root, types::LegacyDoor::get_class(), true);
                        for (const auto& found_door: found_doors) {
                            if (il2cpp::unity::get_object_name(found_door) == *current_it->second.target_door_name) {
                                return found_door;
                            }
                        }
                    }
                }
            }

            return next::SeinDoorHandler::GetTargetDoor(this_ptr, door);
        }

        void connect_door(const DoorName& from_door_id, const std::optional<DoorName>& to_door_id) {
            const auto from_it = doors.find(from_door_id);
            if (from_it == doors.end()) {
                modloader::warn("door_randomizer", std::format("Door '{}' not found", from_door_id));
                return;
            }

            if (to_door_id.has_value()) {
                const auto to_it = doors.find(*to_door_id);
                if (to_it == doors.end()) {
                    modloader::warn("door_randomizer", std::format("Door '{}' not found", *to_door_id));
                    return;
                }
            }

            auto& from_door = from_it->second;
            from_door.target_door_name = to_door_id;

            from_door.clear_target_loading_zones();

            const auto scenes_manager = core::api::scenes::get_scenes_manager();

            for (auto& scene: il2cpp::ListIterator(scenes_manager->fields.ActiveScenes)) {
                if (scene->fields.SceneRoot == nullptr) {
                    continue;
                }

                const auto doors_in_scene = il2cpp::unity::get_components_in_children<app::LegacyDoor>(
                    scene->fields.SceneRoot, types::LegacyDoor::get_class(), true
                );

                for (auto door: doors_in_scene) {
                    const auto door_name = il2cpp::unity::get_object_name(door);
                    if (door_name == from_door_id) {
                        setup_door_target_loading_zone(from_door, door);
                    }
                }
            }
        }

        [[maybe_unused]] auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            for (const auto& state_id: DOOR_ID_TO_DOOR_NAME | std::views::keys) {
                core::api::uber_states::UberState uber_state(UberStateGroup::Doors, state_id);

                effects.push_back(
                    core::reactivity::watch_effect()
                        .effect({uber_state})
                        .after([=] {
                            const auto state_value = uber_state.get<int>();

                            const auto self_door_id = get_door_name_from_door_id(state_id);
                            const auto self_door_info = get_door_info(self_door_id);

                            if (!hast_door_id(state_value)) {
                                connect_door(self_door_id, std::nullopt);
                                return;
                            }

                            const auto target_door_id = get_door_name_from_door_id(state_value);
                            if (self_door_info.target_door_name != target_door_id) {
                                connect_door(self_door_id, target_door_id);
                            }
                        })
                        .trigger_on_load()
                        .finalize()
                );
            }
        });
    } // namespace

    void DoorInfo::clear_target_loading_zones() {
        for (auto& target_loading_zone_cache: target_loading_zones_cache) {
            const auto scenes_manager = core::api::scenes::get_scenes_manager();
            for (auto& scene: il2cpp::ListIterator(scenes_manager->fields.AllScenes)) {
                if (il2cpp::convert_csstring(scene->fields.Scene) == target_loading_zone_cache.scene_name) {
                    il2cpp::invoke(scene->fields.SceneLoadingBoundaries, "Remove", &target_loading_zone_cache.rect);
                    break;
                }
            }
        }

        target_loading_zones_cache.clear();
    }

    bool DoorInfo::has_target_loading_zones() const { return !target_loading_zones_cache.empty(); }

    std::vector<DoorName> get_door_names() { return DOOR_NAME_TO_DOOR_ID | std::views::keys | std::ranges::to<std::vector>(); }

    const DoorInfo& get_door_info(const DoorName& name) { return doors.at(name); }

    const DoorInfo& get_default_door_info(const DoorName& name) { return DEFAULT_DOORS.at(name); }

    int get_door_id_from_door_name(const DoorName& name) { return DOOR_NAME_TO_DOOR_ID.at(name); }

    const DoorName& get_door_name_from_door_id(const int door_id) { return DOOR_ID_TO_DOOR_NAME.at(door_id); }

    bool has_door_name(const DoorName& name) { return DOOR_NAME_TO_DOOR_ID.contains(name); }

    bool hast_door_id(const int door_id) { return DOOR_ID_TO_DOOR_NAME.contains(door_id); }

    std::unordered_map<DoorName, int> get_door_name_to_door_id_map() { return DOOR_NAME_TO_DOOR_ID; }
} // namespace randomizer::doors
