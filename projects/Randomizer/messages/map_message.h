#pragma once

#include <string_view>

namespace randomizer::messages {
    void show_map_message(std::string_view text);
    void hide_map_message();
}
