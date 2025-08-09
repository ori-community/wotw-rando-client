#include <Core/api/game/game.h>
#include <Core/api/system/message_provider.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/types/AreaMapIconFilterFooterLabel.h>
#include <Modloader/app/types/AreaMapIconManager.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/constants.h>
#include <Randomizer/game/map/filter.h>
#include <Randomizer/randomizer.h>

#include "map.h"

namespace randomizer::game::map {
    namespace {
        bool filter_enabled(Filters filter);
    }

    FilterFlag operator|(FilterFlag lhs, FilterFlag rhs) { return static_cast<FilterFlag>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs)); }

    Filters increment(Filters flag) {
        auto prev = static_cast<int>(flag);
        auto value = prev;
        do {
            value = (static_cast<int>(value) + 1) % static_cast<int32_t>(Filters::COUNT);
        } while (!filter_enabled(static_cast<Filters>(value)) && value != prev);
        return static_cast<Filters>(value);
    }

    using namespace modloader;
    using namespace modloader::win;
    using namespace app::classes;

    namespace {
        core::api::uber_states::UberState inlogic_toggle(UberStateGroup::RandoConfig, IN_LOGIC_FILTER_ENABLED_ID);

        Filters current_filter = Filters::All;
        bool start_in_logic_filter_done_since_new_game = false;

        bool filter_enabled(Filters filter) {
            switch (filter) {
                case Filters::Quests:
                    return !core::settings::hide_quest_filter();
                case Filters::Teleports:
                    return !core::settings::hide_warp_filter();
                case Filters::Collectibles:
                    return !core::settings::hide_collectible_filter();
                case Filters::InLogic:
                    return inlogic_toggle.get<bool>();
                case Filters::Spoilers:
                    return core::api::uber_states::UberState(34543, 11226).get<bool>();
                case Filters::Players:
                    // TODO: Change this to if we want a connection instead of if we are connected.
                    return network_client().websocket_connected() && multiplayer_universe().player_count() > 1;
                default:
                    return true;
            }
        }

        app::AreaMapIconFilterFooterLabel create_filter_label(Filters filter, const std::string& message) {
            return {
                .Filter = static_cast<app::AreaMapIconFilter__Enum>(filter),
                .Footer = core::api::system::create_message_provider("[MapCycleFilter] Filter: " + message),
            };
        }

        bool ignore_filter_input = false;
        IL2CPP_INTERCEPT(void, AreaMapUI, set_IconFilter, app::AreaMapUI * this_ptr, app::AreaMapIconFilter__Enum value) {
            if (!ignore_filter_input) {
                next::AreaMapUI::set_IconFilter(this_ptr, value);
            }
        }

        void check_and_initialize_filter_labels(app::AreaMapIconManager* icon_manager) {
            if (il2cpp::is_assignable(icon_manager, types::AreaMapIconManager::get_class()) &&
                icon_manager->fields.Labels->max_length < static_cast<int>(Filters::COUNT)) {
                auto arr = types::AreaMapIconFilterFooterLabel::create_array(static_cast<int>(Filters::COUNT));
                for (auto i = 0; i < static_cast<int>(app::AreaMapIconFilter__Enum::COUNT); ++i) {
                    arr->vector[i] = icon_manager->fields.Labels->vector[i];
                }

                // Add extra labels.
                arr->vector[static_cast<int>(Filters::InLogic)] = create_filter_label(Filters::InLogic, "In Logic");
                arr->vector[static_cast<int>(Filters::Spoilers)] = create_filter_label(Filters::Spoilers, "Spoilers");
                arr->vector[static_cast<int>(Filters::Players)] = create_filter_label(Filters::Players, "Players");

                icon_manager->fields.Labels = arr;
            }
        }

        bool dirty_filter = false;
        IL2CPP_INTERCEPT(void, AreaMapUI, CycleFilter, app::AreaMapUI * this_ptr) {
            auto icon_manager = this_ptr->fields._IconManager_k__BackingField;
            check_and_initialize_filter_labels(icon_manager);

            current_filter = increment(current_filter);
            AreaMapUI::set_IconFilter(this_ptr, static_cast<app::AreaMapIconFilter__Enum>(current_filter));
            dirty_filter = true;
        }

        IL2CPP_INTERCEPT(void, AreaMapUI, Show, app::AreaMapUI * this_ptr, bool set_menu_audio_state) {
            next::AreaMapUI::Show(this_ptr, set_menu_audio_state);
            auto icon_manager = this_ptr->fields._IconManager_k__BackingField;
            check_and_initialize_filter_labels(icon_manager);
            if (!start_in_logic_filter_done_since_new_game && core::settings::start_in_logic_filter() && filter_enabled(Filters::InLogic)) {
                current_filter = Filters::InLogic;
                AreaMapUI::set_IconFilter(this_ptr, static_cast<app::AreaMapIconFilter__Enum>(Filters::InLogic));
                dirty_filter = true;
                start_in_logic_filter_done_since_new_game = true;
            }
        }

        IL2CPP_INTERCEPT(void, GameMapUI, NormalInput, app::GameMapUI * this_ptr) {
            {
                modloader::ScopedSetter set(ignore_filter_input, true);
                next::GameMapUI::NormalInput(this_ptr);
            }

            auto input_cmd = types::Input_Cmd::get_class();
            if (input_cmd->static_fields->MapFilter->fields.IsPressed && !input_cmd->static_fields->MapFilter->fields.WasPressed) {
                AreaMapUI::CycleFilter(this_ptr->fields.m_areaMap);
            }

            if (dirty_filter) {
                GameMapUI::UpdateFilterText(this_ptr);
                GameMapUI::UpdateQuests(this_ptr);
                dirty_filter = false;
            }
        }

        void on_area_map_open(GameEvent game_event, EventTiming timing) {
            auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
            auto prev = current_filter;
            while (!filter_enabled(current_filter) && current_filter != prev) {
                current_filter = static_cast<Filters>((static_cast<int>(current_filter) + 1) % static_cast<int32_t>(Filters::COUNT));
            }

            AreaMapUI::set_IconFilter(area_map, static_cast<app::AreaMapIconFilter__Enum>(current_filter));
            dirty_filter = true;
        }

        void on_new_game(GameEvent game_event, EventTiming timing) { start_in_logic_filter_done_since_new_game = false; }

        std::shared_ptr<const core::reactivity::ReactiveEffect> inlogic_toggle_reactive;
        auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            inlogic_toggle_reactive = //
                core::reactivity::watch_effect()
                    .effect({inlogic_toggle})
                    .trigger_on_load()
                    .after([] {
                        if (!inlogic_toggle.get<bool>() && active_filter() == Filters::InLogic) {
                            const auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
                            AreaMapUI::CycleFilter(area_map);
                        }
                    })
                    .finalize();
        });

        auto on_area_map_open_handle = core::api::game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::After, &on_area_map_open);
        auto on_new_game_handle = core::api::game::event_bus().register_handler(GameEvent::NewGame, EventTiming::Before, &on_new_game);
    } // namespace

    Filters active_filter() { return current_filter; }
} // namespace randomizer::game::map
