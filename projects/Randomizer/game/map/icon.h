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

        app::WorldMapIconType__Enum icon() const { return m_icon; }
        void icon(app::WorldMapIconType__Enum value);
        app::Vector2 position() const { return m_position; }
        void position(app::Vector2 value);
        bool can_teleport() const { return m_can_teleport; }
        void can_teleport(bool value);

        FilterFlag filter_mask() const { return m_filter_mask; }
        core::MoodGuid guid() const { return m_guid; }

    private:
        void initialize_game_object();

        //core::DynamicValue<bool> m_visible;
        //core::DynamicValue<bool> m_label_visible;
        //core::DynamicValue<float> m_opacity;
        //core::DynamicValue<app::WorldMapIconType__Enum> m_icon;

        bool m_visible = false;
        bool m_label_visible = false;
        core::MoodGuid m_guid;
        app::WorldMapIconType__Enum m_icon = app::WorldMapIconType__Enum::Keystone;
        app::Vector2 m_position;
        bool m_can_teleport = false;
        FilterFlag m_filter_mask = FilterFlag::InLogic | FilterFlag::Spoilers;
        app::GameObject* m_game_object = nullptr;
        // TODO: Handle text.
    };
} // namespace randomizer::game::map
