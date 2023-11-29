#pragma once

#include <Core/mood_guid.h>
#include <Core/property.h>

#include <Modloader/app/structs/RuntimeWorldMapIcon.h>

#include <Randomizer/game/map/filter.h>

namespace randomizer::game::map {
    struct Icon {
        explicit Icon(FilterFlag filter_mask);

        Icon(Icon&& other) noexcept;

        Icon(Icon const& other);

        ~Icon();

        void visible(bool value);

        void label_visible(bool value);

        void opacity(float value);

        std::string name() const { return m_name; }

        void name(std::string value);

        core::Property<std::string> label() const { return m_label; }

        void label(const std::string& value);

        app::WorldMapIconType__Enum icon() const;

        void icon(app::WorldMapIconType__Enum value);

        app::Vector2 position() const { return m_position; }

        void position(app::Vector2 value);

        bool can_teleport() const;

        void can_teleport(bool value);

        void remove_scaler() const;

        void apply_scaler() const;

        FilterFlag filter_mask() const { return m_filter_mask; }
        core::MoodGuid guid() const { return m_guid; }

    private:
        void initialize_game_object();

        std::shared_ptr<std::function<void()>> m_on_text_changed;
        core::Property<std::string> m_label;

        std::string m_name;
        bool m_visible = false;
        bool m_label_visible = false;
        float m_opacity;
        core::MoodGuid m_guid;
        std::vector<app::Color> m_original_color;
        app::WorldMapIconType__Enum m_icon = app::WorldMapIconType__Enum::Keystone;
        app::Vector2 m_position;
        bool m_can_teleport = false;
        FilterFlag m_filter_mask = FilterFlag::InLogic | FilterFlag::Spoilers;
        app::GameObject* m_game_object = nullptr;
        app::AreaMapIcon* m_map_icon = nullptr;
    };
} // namespace randomizer::game::map
