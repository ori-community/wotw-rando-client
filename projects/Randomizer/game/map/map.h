#pragma once

#include <Randomizer/game/map/icon.h>

namespace randomizer::game::map {
    enum class IconVisibilityResult {
        Show,
        ShowTransparent,
        Hide
    };

    std::shared_ptr<Icon> add_icon(FilterFlag filter_mask);
    void remove_icon(const std::shared_ptr<Icon>& icon);
    void clear_icons();

    using icon_visibility_callback = std::function<IconVisibilityResult(std::shared_ptr<Icon> icon)>;
    void add_icon_visibility_callback(const std::shared_ptr<Icon>& icon, icon_visibility_callback callback);

    bool is_visited(app::GameWorldAreaID__Enum area, int index);

    void refresh();
    core::Property<bool>& show_interactible_icons();

    void set_spoiler_data(const std::string& location, MapIcon icon, const std::string& text);
} // namespace randomizer::game::map
