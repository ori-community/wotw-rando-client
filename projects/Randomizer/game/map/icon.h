#pragma once

#include <Core/api/uber_states/uber_state.h>
#include <Core/mood_guid.h>

#include <Modloader/app/structs/RuntimeWorldMapIcon.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/WorldMapIconType__Enum.h>

#include <Randomizer/game/map/filter.h>

namespace randomizer::game::map {
    struct Icon {
    public:
        Icon(FilterFlag filter_mask);
        Icon(Icon&& other);
        Icon(Icon const& other);
        ~Icon();

        void visible(bool value);
        void label_visible(bool value);
        void opacity(float value);

        std::string name() const { return m_name; }
        void name(std::string value);
        std::string label() const { return m_label.has_value() ? m_label.value() : ""; }
        void label(std::string value);
        app::WorldMapIconType__Enum icon() const { return m_icon; }
        void icon(app::WorldMapIconType__Enum value);
        app::Vector2 position() const { return m_position; }
        void position(app::Vector2 value);
        bool can_teleport() const { return m_can_teleport; }
        void can_teleport(bool value);

        void remove_scaler() const;
        void apply_scaler() const;

        FilterFlag filter_mask() const { return m_filter_mask; }
        core::MoodGuid guid() const { return m_guid; }

    private:
        void initialize_game_object();

        //core::DynamicValue<bool> m_visible;
        //core::DynamicValue<bool> m_label_visible;
        //core::DynamicValue<float> m_opacity;
        //core::DynamicValue<app::WorldMapIconType__Enum> m_icon;

        std::string m_name;
        std::optional<std::string> m_label;
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
        app::TextBox* m_text_box = nullptr;
        // TODO: Handle text.
    };
} // namespace randomizer::game::map
