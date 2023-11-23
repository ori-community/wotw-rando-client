#include <game/map/filter.h>
#include <game/map/map.h>
#include <online/multiplayer.h>

#include <Core/api/game/ui.h>
#include <Core/settings.h>

#include <Modloader/app/methods/AreaMapIconManager.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAreaMapInformation.h>
#include <Modloader/app/methods/RuntimeWorldMapIcon.h>
#include <Modloader/app/structs/Boolean__Boxed.h>
#include <Modloader/app/types/AreaMapIconManager.h>
#include <Modloader/app/types/GameMapUI.h>
#include <Modloader/app/types/GameWorld.h>
#include <Modloader/app/types/PlayerUberStateGroup.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <atomic>
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

        app::WorldMapIconType__Enum get_base_icon(app::RuntimeWorldMapIcon* icon) {
            auto base_icons = icon->fields.Area->fields.Area->fields.Icons;
            for (auto i = 0; i < base_icons->fields._size; ++i) {
                auto base_icon = base_icons->fields._items->vector[i];
                if (base_icon->fields.Guid->fields.A == icon->fields.Guid->fields.A &&
                    base_icon->fields.Guid->fields.B == icon->fields.Guid->fields.B &&
                    base_icon->fields.Guid->fields.C == icon->fields.Guid->fields.C &&
                    base_icon->fields.Guid->fields.D == icon->fields.Guid->fields.D) {
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
            auto show_labels = core::api::game::ui::area_map_open() &&
                GameMapUI::get_ShowIconLabels(types::GameMapUI::get_class()->static_fields->Instance);

            for (auto filter : icons) {
                auto active = filter.first == active_filter();
                for (auto icon : filter.second) {
                    icon->label_visible(active && show_labels);
                }
            }
        }

        bool should_always_show_teleporters() {
            return core::settings::always_show_warps() && (active_filter() > Filters::Collectibles);
        }

        bool should_always_show_keystone_doors() {
            return core::settings::always_show_keystone_doors() && (active_filter() > Filters::Collectibles);
        }

        bool should_always_show(app::RuntimeWorldMapIcon* icon) {
            switch (icon->fields.Icon) {
                case app::WorldMapIconType__Enum::SavePedestal:
                    return should_always_show_teleporters();
                case app::WorldMapIconType__Enum::KeystoneDoorOpen:
                case app::WorldMapIconType__Enum::KeystoneDoorTwo:
                case app::WorldMapIconType__Enum::KeystoneDoorFour: {
                    auto is_open = il2cpp::unity::is_valid(icon->fields.IsCollectedState) && icon->fields.IsCollectedState->fields.m_value;
                    return !is_open && should_always_show_keystone_doors();
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

            const auto filter = active_filter();
            // If we are in original filters then use the original function.
            if (filter <= Filters::Collectibles) {
                return AreaMapIconManager::IsIconShownByFilter(icon->fields.Icon, manager->fields.Filter) ? IconVisibilityResult::Show : IconVisibilityResult::Hide;
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
            auto world = types::GameWorld::get_class()->static_fields->Instance;
            for (auto i = 0; i < world->fields.RuntimeAreas->fields._size; ++i) {
                auto runtime_area = world->fields.RuntimeAreas->fields._items->vector[i];
                for (auto j = 0; j < runtime_area->fields.Icons->fields._size; ++j) {
                    auto icon = runtime_area->fields.Icons->fields._items->vector[j];
                    RuntimeWorldMapIcon::Hide(icon);
                }

                if (il2cpp::unity::is_valid(runtime_area->fields.Area)) {
                    if (il2cpp::unity::is_valid(runtime_area->fields.Area->fields.VisitableCondition) &&
                        !il2cpp::invoke<app::Boolean__Boxed>(runtime_area->fields.Area->fields.VisitableCondition, "Validate", 0)->fields) {
                        continue;
                    }

                    for (auto j = 0; j < runtime_area->fields.Icons->fields._size; ++j) {
                        auto icon = runtime_area->fields.Icons->fields._items->vector[j];
                        handle_show_toggle(icon, should_show_icon_with_current_filter(this_ptr, icon));
                    }
                }
            }

            if (last_filter != active_filter() && last_filter != Filters::COUNT) {
                // Hide custom icons in old filter.
                auto& collection = icons[last_filter];
                for (auto& icon : collection) {
                    icon->visible(false);
                }
            }

            // Resolve icons for active filter.
            auto& collection = icons[active_filter()];
            for (auto& icon : collection) {
                const auto it = visibility_callbacks.find(icon);
                const auto visibility = it == visibility_callbacks.end() ? IconVisibilityResult::Show : it->second(icon);
                switch (visibility) {
                    case IconVisibilityResult::Show:
                        icon->visible(true);
                        icon->opacity(1.0);
                        break;
                    case IconVisibilityResult::ShowTransparent:
                        icon->visible(true);
                        icon->opacity(core::settings::map_icon_transparency());
                        break;
                    case IconVisibilityResult::Hide:
                        icon->visible(false);
                        break;
                }
            }

            last_filter = active_filter();
        }

        IL2CPP_INTERCEPT(AreaMapUI, void, OnInstantiate, (app::AreaMapUI* this_ptr)) {
            next::AreaMapUI::OnInstantiate(this_ptr);
            for (auto icon_set : icons | std::views::values) {
                for (const auto icon : icon_set) {
                    icon->apply_scaler();
                }
            }
        }

        IL2CPP_INTERCEPT(AreaMapUI, void, Init, (app::AreaMapUI* this_ptr)) {
            next::AreaMapUI::Init(this_ptr);
            for (auto icon_set : icons | std::views::values) {
                for (const auto icon : icon_set) {
                    icon->apply_scaler();
                }
            }
        }

        IL2CPP_INTERCEPT(AreaMapUI, void, OnDestroy, (app::AreaMapUI* this_ptr)) {
            for (auto icon_set : icons | std::views::values) {
                for (const auto icon : icon_set) {
                    icon->remove_scaler();
                }
            }

            next::AreaMapUI::OnDestroy(this_ptr);
        }

    } // namespace

    std::shared_ptr<Icon> add_icon(FilterFlag filter_mask) {
        auto icon = std::make_shared<Icon>(filter_mask);
        auto mask = static_cast<int>(filter_mask);
        for (auto i = 0; i < static_cast<int>(Filters::COUNT); ++i) {
            if ((mask & (1 << i)) != 0) {
                auto& collection = icons[static_cast<Filters>(i)];
                collection.emplace(icon);
            }
        }

        return icon;
    }

    void remove_icon(const std::shared_ptr<Icon>& icon) {
        for (auto& collection : icons) {
            collection.second.erase(icon);
        }
    }

    void clear_icons() {
        icons.clear();
    }

    void add_icon_visibility_callback(const std::shared_ptr<Icon>& icon, icon_visibility_callback callback) {
        visibility_callbacks[icon] = std::move(callback);
    }

    bool is_visited(app::GameWorldAreaID__Enum area, int index) {
        auto player_group = types::PlayerUberStateGroup::get_class()->static_fields->Instance;
        if (!il2cpp::unity::is_valid(player_group)) {
            return false;
        }

        auto area_map_info = player_group->fields.PlayerUberState->fields.m_state->fields.AreaMapInfo;
        return Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation::GetAreaState(area_map_info, area, index) == app::WorldMapAreaState__Enum::Visited;
    }
} // namespace randomizer::game::map
