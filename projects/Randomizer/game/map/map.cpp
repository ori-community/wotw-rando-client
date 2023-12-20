#include <Core/api/game/game.h>
#include <Core/api/game/ui.h>
#include <Core/settings.h>
#include <Modloader/app/methods/AreaMapIconManager.h>
#include <Modloader/app/methods/AreaMapNavigation.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAreaMapInformation.h>
#include <Modloader/app/methods/RuntimeWorldMapIcon.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/types/GameMapUI.h>
#include <Modloader/app/types/GameWorld.h>
#include <Modloader/app/types/PlayerUberStateGroup.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/game/map/filter.h>
#include <Randomizer/game/map/map.h>
#include <Randomizer/online/multiplayer.h>
#include <Randomizer/randomizer.h>
#include <random>
#include <unordered_map>

using namespace modloader;
using namespace modloader::win;
using namespace app::classes;

namespace randomizer::game::map {
    namespace {
        using icon_vector = std::unordered_set<std::shared_ptr<Icon>>;
        std::unordered_map<Filters, icon_vector> icons;
        std::unordered_map<std::shared_ptr<Icon>, icon_visibility_callback> visibility_callbacks;
        Filters last_filter = Filters::COUNT;

        app::WorldMapIconType__Enum get_base_icon(const app::RuntimeWorldMapIcon* icon) {
            for (const auto base_icon: il2cpp::ListIterator(icon->fields.Area->fields.Area->fields.Icons)) {
                if (base_icon->fields.Guid->fields.A == icon->fields.Guid->fields.A && base_icon->fields.Guid->fields.B == icon->fields.Guid->fields.B &&
                    base_icon->fields.Guid->fields.C == icon->fields.Guid->fields.C && base_icon->fields.Guid->fields.D == icon->fields.Guid->fields.D) {
                    return base_icon->fields.Icon;
                }
            }

            return app::WorldMapIconType__Enum::Keystone;
        }

        IL2CPP_INTERCEPT(RuntimeWorldMapIcon, void, Show, (app::RuntimeWorldMapIcon * this_ptr)) {
            // For some stupid reason they set icons to WorldMapIconType__Enum_Invisible when a pickup is picked up...
            if (this_ptr->fields.Icon == app::WorldMapIconType__Enum::Invisible) {
                this_ptr->fields.Icon = get_base_icon(this_ptr);
            }

            next::RuntimeWorldMapIcon::Show(this_ptr);
        }

        IL2CPP_INTERCEPT(AreaMapIconManager, void, UpdateLabelState, (app::AreaMapIconManager * this_ptr)) {
            next::AreaMapIconManager::UpdateLabelState(this_ptr);
            const auto show_labels = core::api::game::ui::area_map_open() &&
                GameMapUI::get_ShowIconLabels(types::GameMapUI::get_class()->static_fields->Instance);

            for (auto const& [filter, collection]: icons) {
                if (active_filter() == filter) {
                    continue;
                }

                for (auto const& icon: collection) {
                    icon->label_visible().set(false);
                }
            }

            for (auto const& icon: icons[active_filter()]) {
                icon->label_visible().set(show_labels);
            }
        }

        bool should_always_show_teleporters() { return core::settings::always_show_warps() && (active_filter() > Filters::Collectibles); }

        bool should_always_show_keystone_doors() { return core::settings::always_show_keystone_doors() && (active_filter() > Filters::Collectibles); }

        bool should_always_show(app::RuntimeWorldMapIcon* icon) {
            switch (icon->fields.Icon) {
                case app::WorldMapIconType__Enum::SavePedestal:
                    return should_always_show_teleporters();
                case app::WorldMapIconType__Enum::KeystoneDoorOpen:
                case app::WorldMapIconType__Enum::KeystoneDoorTwo:
                case app::WorldMapIconType__Enum::KeystoneDoorFour: {
                    if (icon->fields.IsCollectedState->fields._.m_id->fields.m_id == 64003) {
                        // Kwolok Statue
                        icon->fields.Position.x = -313.05f;
                        icon->fields.Position.y = -4220.38f;
                    }

                    return should_always_show_keystone_doors();
                }
                case app::WorldMapIconType__Enum::BreakableWall:
                case app::WorldMapIconType__Enum::BreakableWallBroken:
                case app::WorldMapIconType__Enum::StompableFloor:
                case app::WorldMapIconType__Enum::StompableFloorBroken:
                case app::WorldMapIconType__Enum::SmallDoor:
                case app::WorldMapIconType__Enum::TempleDoor:
                case app::WorldMapIconType__Enum::WatermillDoor: {
                    return active_filter() != Filters::Players;
                }
                default:
                    return false;
            }
        }

        IconVisibilityResult should_show_icon_with_current_filter(app::AreaMapIconManager* manager, app::RuntimeWorldMapIcon* icon) {
            if (icon == nullptr) {
                return IconVisibilityResult::Hide;
            }

            // Always show warps check
            if (should_always_show(icon)) {
                return IconVisibilityResult::Show;
            }

            // If we are in original filters then use the original function.
            if (active_filter() <= Filters::Collectibles) {
                return AreaMapIconManager::IsIconShownByFilter(icon->fields.Icon, manager->fields.Filter) //
                    ? IconVisibilityResult::Show
                    : IconVisibilityResult::Hide;
            }

            // Hide normal icons when in a rando filter.
            return IconVisibilityResult::Hide;
        }

        void handle_show_toggle(app::RuntimeWorldMapIcon* icon, IconVisibilityResult result) {
            if (icon == nullptr) {
                return;
            }

            switch (result) {
                case IconVisibilityResult::Show: {
                    RuntimeWorldMapIcon::Show(icon);
                    break;
                }
                default: {
                    RuntimeWorldMapIcon::Hide(icon);
                    break;
                }
            }
        }

        IL2CPP_INTERCEPT(AreaMapIconManager, void, ShowAreaIcons, (app::AreaMapIconManager * this_ptr)) {
            // Start ShowAreaIcons function.
            const auto world = types::GameWorld::get_class()->static_fields->Instance;
            for (const auto runtime_area: il2cpp::ListIterator(world->fields.RuntimeAreas)) {
                for (const auto icon: il2cpp::ListIterator(runtime_area->fields.Icons)) {
                    RuntimeWorldMapIcon::Hide(icon);
                }

                if (il2cpp::unity::is_valid(runtime_area->fields.Area)) {
                    if (il2cpp::unity::is_valid(runtime_area->fields.Area->fields.VisitableCondition) &&
                        !il2cpp::invoke<app::Boolean__Boxed>(runtime_area->fields.Area->fields.VisitableCondition, "Validate", 0)->fields) {
                        continue;
                    }

                    for (const auto icon: il2cpp::ListIterator(runtime_area->fields.Icons)) {
                        handle_show_toggle(icon, should_show_icon_with_current_filter(this_ptr, icon));
                    }
                }
            }

            if (last_filter != active_filter() && last_filter != Filters::COUNT) {
                // Hide custom icons in old filter.
                const auto& collection = icons[last_filter];
                for (auto& icon: collection) {
                    icon->visible().set(false);
                }
            }

            // Resolve icons for active filter.
            const auto& collection = icons[active_filter()];
            for (auto& icon: collection) {
                const auto it = visibility_callbacks.find(icon);
                switch (it == visibility_callbacks.end() ? IconVisibilityResult::Show : it->second(icon)) {
                    case IconVisibilityResult::Show:
                        icon->visible().set(true);
                        icon->opacity().set(1.0);
                        break;
                    case IconVisibilityResult::ShowTransparent:
                        icon->visible().set(true);
                        icon->opacity().set(core::settings::map_icon_transparency());
                        break;
                    case IconVisibilityResult::Hide:
                        icon->visible().set(false);
                        break;
                }
            }

            last_filter = active_filter();
        }

        IL2CPP_INTERCEPT(AreaMapUI, void, OnInstantiate, (app::AreaMapUI * this_ptr)) {
            next::AreaMapUI::OnInstantiate(this_ptr);
            for (auto const& icon_set: icons | std::views::values) {
                for (auto const& icon: icon_set) {
                    icon->apply_scaler(icon->position().get());
                }
            }
        }

        IL2CPP_INTERCEPT(AreaMapUI, void, Init, (app::AreaMapUI * this_ptr)) {
            next::AreaMapUI::Init(this_ptr);
            for (auto const& icon_set: icons | std::views::values) {
                for (auto const& icon: icon_set) {
                    icon->apply_scaler(icon->position().get());
                }
            }
        }

        auto on_area_map_destroyed = core::api::game::event_bus().register_handler(GameEvent::DestroyAreaMap, EventTiming::Before, [](auto, auto) {
            for (auto const& icon_set: icons | std::views::values) {
                for (auto const& icon: icon_set) {
                    icon->remove_scaler();
                }
            }
        });

        IL2CPP_INTERCEPT(GameMapUI, bool, IsCursorOverTeleporter, (app::GameMapUI * this_ptr, app::Vector2* target)) {
            const auto cursor = GameMapUI::get_FocusLocation(this_ptr);

            // TODO: We might want to use a separate map for icons that can be teleported to.
            //       Needs to handle icons changing that property.
            const auto& current_icons = icons[active_filter()];
            auto min_distance = 1.02 * 1.02;
            std::shared_ptr<Icon> closest_icon;
            for (auto const& icon: current_icons) {
                if (icon->can_teleport().get()) {
                    const auto position = AreaMapNavigation::WorldToMapPosition(
                        this_ptr->fields.m_areaMap->fields._Navigation_k__BackingField, icon->position().get()
                    );
                    ;
                    const auto difference = cursor - app::Vector2{position.x, position.y};
                    const auto magnitude_squared = difference.x * difference.x + difference.y * difference.y;
                    if (magnitude_squared < min_distance) {
                        closest_icon = icon;
                        *target = icon->position().get();
                        min_distance = magnitude_squared;
                    }
                }
            }

            app::Vector2 original_target{};
            if (next::GameMapUI::IsCursorOverTeleporter(this_ptr, &original_target)) {
                const auto position = AreaMapNavigation::WorldToMapPosition(this_ptr->fields.m_areaMap->fields._Navigation_k__BackingField, original_target);
                ;
                const auto difference = cursor - app::Vector2{position.x, position.y};
                const auto magnitude_squared = difference.x * difference.x + difference.y * difference.y;
                if (magnitude_squared < min_distance) {
                    *target = original_target;
                    return true;
                }
            }

            return closest_icon != nullptr;
        }

        IL2CPP_INTERCEPT(GameMapUI, void, set_ShowObjective, (app::GameMapUI * this_ptr, app::GameMapShowObjective* objective)) {
            // NOOP
        }
    } // namespace

    std::shared_ptr<Icon> add_icon(FilterFlag filter_mask) {
        auto icon = std::make_shared<Icon>(filter_mask);
        const auto mask = static_cast<int>(filter_mask);
        for (auto i = 0; i < static_cast<int>(Filters::COUNT); ++i) {
            if ((mask & (1 << i)) != 0) {
                auto& collection = icons[static_cast<Filters>(i)];
                collection.emplace(icon);
            }
        }

        return icon;
    }

    void remove_icon(const std::shared_ptr<Icon>& icon) {
        for (auto& icon_data: icons | std::views::values) {
            icon_data.erase(icon);
        }
    }

    void clear_icons() { icons.clear(); }

    void add_icon_visibility_callback(const std::shared_ptr<Icon>& icon, icon_visibility_callback callback) {
        visibility_callbacks[icon] = std::move(callback);
    }

    bool is_visited(app::GameWorldAreaID__Enum area, int index) {
        const auto player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
        if (!il2cpp::unity::is_valid(player_group)) {
            return false;
        }

        const auto area_map_info = player_group->fields.PlayerUberState->fields.m_state->fields.AreaMapInfo;
        return Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation::GetAreaState(area_map_info, area, index) ==
            app::WorldMapAreaState__Enum::Visited;
    }

    auto on_load_seed = event_bus().register_handler(RandomizerEvent::SeedLoadedPostGrant, EventTiming::After, [](auto, auto) {
        if (!core::api::game::ui::area_map_open()) {
            return;
        }

        const auto instance = types::GameMapUI::get_class()->static_fields->Instance;
        if (instance == nullptr || instance->fields.m_areaMap == nullptr || instance->fields.m_areaMap->fields._IconManager_k__BackingField == nullptr) {
            return;
        }

        const auto icon_manager = instance->fields.m_areaMap->fields._IconManager_k__BackingField;
        AreaMapIconManager::ShowAreaIcons(icon_manager);
    });

    void refresh() {
        const auto instance = types::GameMapUI::get_class()->static_fields->Instance;
        if (instance == nullptr || instance->fields.m_areaMap == nullptr || instance->fields.m_areaMap->fields._IconManager_k__BackingField == nullptr) {
            return;
        }

        const auto icon_manager = instance->fields.m_areaMap->fields._IconManager_k__BackingField;
        AreaMapIconManager::ShowAreaIcons(icon_manager);
    }
} // namespace randomizer::game::map
