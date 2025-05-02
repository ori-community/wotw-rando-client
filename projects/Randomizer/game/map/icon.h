#pragma once

#include <Core/enums/map_icon.h>
#include <Core/mood_guid.h>
#include <Core/property.h>
#include <Core/property/reactivity.h>

#include <Modloader/app/structs/RuntimeWorldMapIcon.h>

#include <Randomizer/game/map/filter.h>

namespace randomizer::game::map {
    struct Icon {
        explicit Icon(FilterFlag filter_mask);

        Icon(Icon&& other) noexcept;

        Icon(Icon const& other);

        ~Icon();

        core::Property<std::string>& name() { return m_name; }
        core::Property<std::string>& label() { return m_label; }
        core::Property<MapIcon>& icon() { return m_icon; }
        core::Property<app::Vector2>& position() { return m_position; }
        core::Property<bool>& visible() { return m_visible; }
        core::Property<bool>& label_visible() { return m_label_visible; }
        core::Property<float>& opacity() { return m_opacity; }
        core::Property<bool>& can_teleport() { return m_can_teleport; }

        void remove_scaler() const;
        void apply_scaler(app::Vector2 const& position) const;

        FilterFlag filter_mask() const { return m_filter_mask; }
        core::MoodGuid guid() const { return m_guid; }

    private:
        void initialize_game_object();
        void initialize_reactives();
        void update_opacity(float opacity) const;

        std::vector<std::shared_ptr<core::reactivity::ReactiveEffect>> m_reactive_effects;

        core::Property<std::string> m_name;
        core::Property<std::string> m_label;
        core::Property<MapIcon> m_icon;
        core::Property<app::Vector2> m_position;
        core::Property<float> m_opacity;
        core::Property<bool> m_visible;
        core::Property<bool> m_label_visible;
        core::Property<bool> m_can_teleport;

        core::Property<std::optional<il2cpp::WeakGCRef<app::GameObject>>> m_game_object;
        core::Property<std::optional<il2cpp::WeakGCRef<app::AreaMapIcon>>> m_map_icon;

        MapIcon m_current_icon = MapIcon::Keystone;
        core::MoodGuid m_guid;
        std::vector<app::Color> m_original_color;
        FilterFlag m_filter_mask = FilterFlag::InLogic | FilterFlag::Spoilers;
        bool m_initialized = false;
    };
} // namespace randomizer::game::map
