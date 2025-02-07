#include <Core/api/scenes/scene_load.h>
#include <Core/api/system/message_provider.h>
#include <Core/property/reactivity.h>
#include <Modloader/app/methods/RuntimeSceneMetaData.h>
#include <Modloader/app/methods/ScenesManager.h>
#include <Modloader/app/methods/SeinDoorHandler.h>
#include <Modloader/app/types/LegacyDoor.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/modloader.h>
#include <Randomizer/features/door_randomizer.h>
#include <ranges>
#include <set>
#include <string>
#include <unordered_map>

namespace randomizer::doors {
    namespace {
        const int STATE_ID_DISABLED = 0;

        using namespace app::classes;

        std::vector<std::shared_ptr<core::reactivity::ReactiveEffect>> effects;

        const std::unordered_map<DoorId, int> DOOR_ID_TO_STATE_ID = {
            {"lupoShopDoorOutside", 1},
            {"lupoShopDoorInside", 2},
            {"hutBEntrance", 3},
            {"hutBExit", 4},
            {"hutCEntrance", 5},
            {"hutCExit", 6},
            {"hutDEntrance", 7},
            {"hutDExit", 8},
            {"hutEEntrance", 9},
            {"hutEExit", 10},
            {"hutFEntrance", 11},
            {"hutFExit", 12},
            {"caveEntrance", 13},
            {"caveExit", 14},
            {"waterMillOutsideDoorA", 15},
            {"waterMillInsideDoorA", 16},
            {"waterMillOutsideDoorB", 17},
            {"waterMillInsideDoorB", 18},
            {"waterMillOutsideDoorC", 19},
            {"waterMillInsideDoorC", 20},
            {"waterMillOutsideDoorD", 21},
            {"waterMillInsideDoorD", 22},
            {"baursReachHutEntrance", 23},
            {"baursReachHutExit", 24},
            {"petrifiedHutDoorOutside", 25},
            {"petrifiedHutDoorInside", 26},
            {"desertRuinsEntranceDoor", 27},
            {"doorB", 28},  // Outer ruins door
            {"willowsEndEntrance", 29},
            {"willowsEndExit", 30},
            {"powlArenaEntrance", 31},
            {"powlArenaExit", 32},
        };

        inline const std::unordered_map<int, DoorId> STATE_ID_TO_DOOR_ID = [] {
            std::unordered_map<int, DoorId> map;

            for (const auto& [id, state_id] : DOOR_ID_TO_STATE_ID) {
                map.emplace(state_id, id);
            }

            return map;
        }();

        // Default door configurations. The actual used doors are below.
        const std::unordered_map<std::string, DoorInfo> DEFAULT_DOORS{
            {"lupoShopDoorOutside",     {"wellspringGladesHubB", "lupoShopDoorInside"}               },
            {"lupoShopDoorInside",      {"hutInteriorA", "lupoShopDoorOutside"}                      },
            {"hutBEntrance",            {"wellspringGladesHub", "hutBExit"}                          },
            {"hutBExit",                {"hutInteriorB", "hutBEntrance"}                             },
            {"hutCEntrance",            {"wellspringGladesHub", "hutCExit"}                          },
            {"hutCExit",                {"hutInteriorC", "hutCEntrance"}                             },
            {"hutDEntrance",            {"wellspringGladesHubB", "hutDExit"}                         },
            {"hutDExit",                {"hutInteriorD", "hutDEntrance"}                             },
            {"hutEEntrance",            {"wellspringGladesHub", "hutEExit"}                          },
            {"hutEExit",                {"hutInteriorE", "hutEEntrance"}                             },
            {"hutFEntrance",            {"wellspringGladesHubB", "hutFExit"}                         },
            {"hutFExit",                {"hutInteriorF", "hutFEntrance"}                             },
            {"caveEntrance",            {"wellspringGladesHub", "caveExit"}                          },
            {"caveExit",                {"hubCaveInterior", "caveEntrance"}                          },
            {"waterMillOutsideDoorA",   {"waterMillEntrance", "waterMillInsideDoorA"}                },
            {"waterMillInsideDoorA",    {"wotwSaveRoomC__clone0__clone1", "waterMillOutsideDoorA"}   },
            {"waterMillOutsideDoorB",   {"waterMillEntrance", "waterMillInsideDoorB"}                },
            {"waterMillInsideDoorB",    {"waterMillAExit", "waterMillOutsideDoorB"}                  },
            {"waterMillOutsideDoorC",   {"waterMillEntrance", "waterMillInsideDoorC"}                },
            {"waterMillInsideDoorC",    {"waterMillBEntrance", "waterMillOutsideDoorC"}              },
            {"waterMillOutsideDoorD",   {"waterMillEntranceTop", "waterMillInsideDoorD"}             },
            {"waterMillInsideDoorD",    {"waterMillCEntrance", "waterMillOutsideDoorD"}              },
            {"baursReachHutEntrance",   {"baursReachGetAbility", "baursReachHutExit"}                },
            {"baursReachHutExit",       {"baursReachHutInterior", "baursReachHutEntrance"}           },
            {"petrifiedHutDoorOutside", {"petrifiedForestNewTransitionOri", "petrifiedHutDoorInside"}},
            {"petrifiedHutDoorInside",  {"petrifiedForestHutInterior", "petrifiedHutDoorOutside"}    },
            {"desertRuinsEntranceDoor", {"desertRuinsTowerEntranceA", "doorB"}                       },
            {"doorB",                   {"windtornRuinsA", "desertRuinsEntranceDoor"}                },
            {"willowsEndEntrance",      {"weepingRidgeWillowsEndEntrance", "willowsEndExit"}         },
            {"willowsEndExit",          {"willowsEndHub", "willowsEndEntrance"}                      },
            {"powlArenaEntrance",       {"willowsEndExit", "powlArenaExit"}                          },
            {"powlArenaExit",           {"willowCeremonyIntro", "powlArenaEntrance"}                 },
        };

        // Actual door configuration
        std::unordered_map<DoorId, DoorInfo> doors = DEFAULT_DOORS;

        /**
         * This is a mapping from scene name -> loading boundary indexes that will be removed from the game.
         * We remove them because we create custom loading boundaries on the fly.
         */
        std::unordered_map<DoorId, std::set<int>> scene_loading_zones_related_to_doors{
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

        void setup_door(DoorInfo& from_door, app::LegacyDoor* door) {
            from_door.clear_target_loading_zone();

            if (!from_door.target_door_id.has_value()) {
                door->fields.OverrideEnterDoorMessage = core::api::system::create_message_provider("This door is closed");
                return;
            }

            door->fields.OverrideEnterDoorMessage = nullptr;

            const auto& to_door = doors.at(*from_door.target_door_id);
            const auto door_position = modloader::math::convert(il2cpp::unity::get_position(door));

            DoorLoadingZone zone{
                to_door.scene_name,
                {
                    door_position.x - 20.f,
                    door_position.y - 20.f,
                    40.f, 40.f,
                }
            };

            const auto scenes_manager = core::api::scenes::get_scenes_manager();
            for (auto& scene: il2cpp::ListIterator(scenes_manager->fields.AllScenes)) {
                if (il2cpp::convert_csstring(scene->fields.Scene) == to_door.scene_name) {
                    il2cpp::invoke(scene->fields.SceneLoadingBoundaries, "Add", &zone.rect);

                    // Recalculate total scene rectangle
                    scene->fields.m_doneTotal = false;
                    RuntimeSceneMetaData::DoTotal(scene);

                    from_door.target_loading_zone_cache = zone;

                    ScenesManager::GenerateGuidToRuntimeSceneMetaDataDictionaryAndQuadTree(scenes_manager, true);
                    return;
                }
            }

            modloader::warn("door_randomizer", std::format("Could not setup target loading zone for target door '{}'", *from_door.target_door_id));
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

                if (door_it->second.has_target_loading_zone()) {
                    continue;
                }

                setup_door(door_it->second, door);
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

        IL2CPP_INTERCEPT(SeinDoorHandler, void, EnterIntoDoor, (app::SeinDoorHandler * this_ptr, app::LegacyDoor* door)) {
            const auto door_name = il2cpp::unity::get_object_name(door);

            const auto it = doors.find(door_name);
            if (it == doors.end()) {
                modloader::warn("door_randomizer", std::format("Unknown door '{}'", door_name));
            } else {
                if (!it->second.target_door_id.has_value()) {
                    return;
                }

                door->fields.OtherDoorName = il2cpp::string_new(*it->second.target_door_id);
            }

            next::SeinDoorHandler::EnterIntoDoor(this_ptr, door);
        }

        IL2CPP_INTERCEPT(SeinDoorHandler, app::LegacyDoor*, GetTargetDoor, (app::SeinDoorHandler * this_ptr, app::LegacyDoor* door)) {
            const auto door_name = il2cpp::unity::get_object_name(door);

            const auto current_it = doors.find(door_name);
            if (current_it == doors.end()) {
                modloader::warn("door_randomizer", std::format("Unknown door '{}'", door_name));
            } else {
                if (!current_it->second.target_door_id.has_value()) {
                    return nullptr;
                }

                const auto target_it = doors.find(*current_it->second.target_door_id);
                if (target_it == doors.end()) {
                    modloader::warn("door_randomizer", std::format("Unknown door '{}'", door_name));
                } else {
                    const auto target_door_scene_name = target_it->second.scene_name;
                    const auto scene_root = core::api::scenes::get_scene_root(target_door_scene_name);

                    if (scene_root != nullptr) {
                        const auto found_doors = il2cpp::unity::get_components_in_children<app::LegacyDoor>(scene_root, types::LegacyDoor::get_class(), true);
                        for (const auto& found_door: found_doors) {
                            if (il2cpp::unity::get_object_name(found_door) == *current_it->second.target_door_id) {
                                return found_door;
                            }
                        }
                    }
                }
            }

            return next::SeinDoorHandler::GetTargetDoor(this_ptr, door);
        }

        void connect_door(const DoorId& from_door_id, const std::optional<DoorId>& to_door_id) {
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
            from_door.target_door_id = to_door_id;

            from_door.clear_target_loading_zone();

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
                        setup_door(from_door, door);
                    }
                }
            }
        }

        [[maybe_unused]] auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            for (const auto& state_id: STATE_ID_TO_DOOR_ID | std::views::keys) {
                core::api::uber_states::UberState uber_state(UberStateGroup::Doors, state_id);

                effects.push_back(
                    core::reactivity::watch_effect()
                    .effect({uber_state})
                    .after([=] {
                        const auto state_value = uber_state.get<int>();

                        const auto self_door_id = get_door_id_from_state_id(state_id);
                        const auto self_door_info = get_door_info(self_door_id);

                        if (!has_door_state_id(state_value)) {
                            connect_door(self_door_id, std::nullopt);
                            return;
                        }

                        const auto target_door_id = get_door_id_from_state_id(state_value);
                        if (self_door_info.target_door_id != target_door_id) {
                            connect_door(self_door_id, target_door_id);
                        }
                    })
                    .trigger_on_load()
                    .finalize()
                );
            }
        });
    } // namespace

    void DoorInfo::clear_target_loading_zone() {
        if (!target_loading_zone_cache.has_value()) {
            return;
        }

        const auto scenes_manager = core::api::scenes::get_scenes_manager();
        for (auto& scene: il2cpp::ListIterator(scenes_manager->fields.AllScenes)) {
            if (il2cpp::convert_csstring(scene->fields.Scene) == target_loading_zone_cache->scene_name) {
                il2cpp::invoke(scene->fields.SceneLoadingBoundaries, "Remove", &target_loading_zone_cache->rect);
                break;
            }
        }

        target_loading_zone_cache = std::nullopt;
    }

    bool DoorInfo::has_target_loading_zone() const {
        return target_loading_zone_cache.has_value();
    }

    std::vector<DoorId> get_door_ids() {
        return DOOR_ID_TO_STATE_ID | std::views::keys | std::ranges::to<std::vector>();
    }

    const DoorInfo& get_door_info(const DoorId& id) {
        return doors.at(id);
    }

    const DoorInfo& get_default_door_info(const DoorId& id) {
        return DEFAULT_DOORS.at(id);
    }

    int get_state_id_from_door_id(const DoorId& id) {
        return DOOR_ID_TO_STATE_ID.at(id);
    }

    const DoorId& get_door_id_from_state_id(const int state_id) {
        return STATE_ID_TO_DOOR_ID.at(state_id);
    }

    bool has_door_id(const DoorId& id) {
        return DOOR_ID_TO_STATE_ID.contains(id);
    }

    bool has_door_state_id(const int state_id) {
        return STATE_ID_TO_DOOR_ID.contains(state_id);
    }

    std::unordered_map<DoorId, int> get_door_id_to_state_id_map() {
        return DOOR_ID_TO_STATE_ID;
    }
} // namespace randomizer::doors
