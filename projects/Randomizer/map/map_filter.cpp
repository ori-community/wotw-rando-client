#include <Randomizer/map/map_filter.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/QuestIconsUI.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/app/types/GameMapUI.h>
#include <frozen/unordered_map.h>
#include <Core/settings.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>


namespace randomizer::map::filter {
    core::Property<MapFilter>& current_map_filter() {
        static core::Property<MapFilter> value{MapFilter::InLogic};
        return value;
    }

    core::Property<bool>& show_interactables() {
        static core::Property<bool> value{false};
        return value;
    }

    core::reactivity::ReactiveEffect::ptr_t map_filter_updated_effect;
    bool map_filter_label_and_quests_ui_dirty = true;

    struct MapIconFilterMetadata {
        frozen::string label;
        MapFilter next;
    };

    constexpr frozen::unordered_map<MapFilter, MapIconFilterMetadata, 6> MAP_ICON_FILTER_METADATA = {
        {MapFilter::InLogic,      {"In Logic", MapFilter::Collectibles}},
        {MapFilter::Collectibles, {"Collectibles", MapFilter::Quests}  },
        {MapFilter::Quests,       {"Quests", MapFilter::Warps}         },
        {MapFilter::Warps,        {"Warps", MapFilter::Players}        },
        {MapFilter::Players,      {"Players", MapFilter::Spoiler}      },
        {MapFilter::Spoiler,      {"Spoilers", MapFilter::InLogic}     },
    };

    bool is_filter_available(const MapFilter filter) {
        switch (filter) {
            case MapFilter::InLogic:
                return true;  // TODO: Disable in-logic filter?
            case MapFilter::Collectibles:
                return !core::settings::hide_collectible_filter();
            case MapFilter::Quests:
                return !core::settings::hide_quest_filter();
            case MapFilter::Warps:
                return !core::settings::hide_warp_filter();
            case MapFilter::Players:
                return multiplayer_universe().player_count() > 1;
            case MapFilter::Spoiler:
                return core::api::uber_states::UberState(UberStateGroup::RandoState, 100).get<bool>();
        }

        return true;
    }

    core::reactivity::ReactiveEffect::ptr_t filter_availability_effect;

    /** Switch to the next available filter */
    void cycle_filter() {
        const auto current_filter_cache = current_map_filter().get();

        // Start with current filter and search the next available one...
        MapFilter next_filter = current_filter_cache;

        do {
            next_filter = MAP_ICON_FILTER_METADATA.at(next_filter).next;

            if (next_filter == current_filter_cache) {
                // We looped...
                return;
            }
        } while (!is_filter_available(next_filter));

        filter_availability_effect = core::reactivity::watch_effect()
            .effect([=] {
                if (!is_filter_available(next_filter)) {
                    core::reactivity::run_after_effects([] {
                        cycle_filter();
                    });
                }
            })
            .finalize();

        current_map_filter().set(next_filter);
    }

    bool quests_ui_should_be_visible() {
        return current_map_filter().get() == MapFilter::Quests;
    }

    void try_update_map_filter_label_and_quests_ui_if_dirty() {
        if (!map_filter_label_and_quests_ui_dirty) {
            return;
        }

        const auto game_map_ui = types::GameMapUI::get_class()->static_fields->Instance;

        if (game_map_ui == nullptr) {
            return;
        }

        GameMapUI::UpdateFilterText(game_map_ui);
        GameMapUI::UpdateQuests(game_map_ui);

        map_filter_label_and_quests_ui_dirty = false;
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        map_filter_updated_effect = core::reactivity::watch_effect()
            .effect(current_map_filter())
            .after([] {
                map_filter_label_and_quests_ui_dirty = true;
                try_update_map_filter_label_and_quests_ui_if_dirty();
            })
            .finalize();
    });

    [[maybe_unused]]
    auto on_area_map_opened = core::api::game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::Before, [](auto, auto) {
        try_update_map_filter_label_and_quests_ui_if_dirty();
    });

    namespace {
        IL2CPP_INTERCEPT(void, AreaMapUI, set_IconFilter, app::AreaMapUI* this_ptr, app::AreaMapIconFilter__Enum value) {
            // NOOP
        }

        IL2CPP_INTERCEPT(void, AreaMapUI, OnIconFilterChange, app::AreaMapUI* this_ptr) {
            // NOOP
        }

        IL2CPP_INTERCEPT_WITH_ORDER(0, void, GameMapUI, NormalInput, app::GameMapUI* this_ptr) {
            const auto map_filter_input = types::Input_Cmd::get_class()->static_fields->MapFilter;

            if (map_filter_input->fields.IsPressed && !map_filter_input->fields.WasPressed) {
                cycle_filter();
            }
        }

        IL2CPP_INTERCEPT(void, GameMapUI, UpdateFilterText, app::GameMapUI* this_ptr) {
            const auto label = MAP_ICON_FILTER_METADATA.at(current_map_filter().get()).label;
            this_ptr->fields.FilterMessageBox->fields.MessageProvider = core::api::system::create_message_provider(
                std::format(
                    "[MapCycleFilter] {}",
                    std::string(label.begin(), label.end())
                )
            );
            MessageBox::RefreshText_1(this_ptr->fields.FilterMessageBox);
        }

        IL2CPP_INTERCEPT(void, GameMapUI, OnInstantiate, app::GameMapUI* this_ptr) {
            next::GameMapUI::OnInstantiate(this_ptr);
            QuestIconsUI::Show(this_ptr->fields.QuestIcons);
            QuestsUI::Show(this_ptr->fields.m_questsUI);
        }

        IL2CPP_INTERCEPT(void, GameMapUI, UpdateQuests, app::GameMapUI* this_ptr) {
            if (quests_ui_should_be_visible()) {
                QuestsUI::Show(this_ptr->fields.m_questsUI);
            } else {
                QuestsUI::Hide(this_ptr->fields.m_questsUI, false);
            }
        }
    } // namespace
} // namespace randomizer::map::filter
