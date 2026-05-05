#include <Core/api/game/game.h>
#include <Modloader/app/methods/UnityEngine/Time.h>
#include <Randomizer/map/map_filter.h>
#include <Randomizer/map/player_icon.h>


namespace randomizer::map::player_icon {
    using namespace app::classes;

    PlayerIcon::PlayerIcon() {
        m_map_icon = std::make_shared<icons::MapIcon>(
            icons::MapIcon::Type::OriPlayer,
            "Player",
            m_live_position.value_or(app::Vector2{}),
            [this](filter::MapFilter) {
                return visible.get()
                    ? icons::MapIcon::Visibilities::visible
                    : icons::MapIcon::Visibilities::invisible;
            },
            icons::MapIcon::ScaleMode::Constant
        );
        m_map_icon->always_show_label.set(true);
    }

    void PlayerIcon::set_name(const std::string& name) const {
        m_map_icon->label_text.set(name);
    }

    void PlayerIcon::set_live_position(const app::Vector2& position) {
        m_live_position = position;
        m_map_icon->world_position.set(position);
    }

    void PlayerIcon::set_color(const SolidColor& color) const {
        m_map_icon->label_color.set({color.r, color.g, color.b, 1.f});
    }
} // namespace randomizer::map::player_icon
