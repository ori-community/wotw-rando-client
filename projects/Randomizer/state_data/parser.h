#pragma once

#include <Randomizer/state_data/state.h>

#include <filesystem>
#include <string_view>
#include <vector>

namespace randomizer::state_data {
    bool parse_state_data(std::filesystem::path path, std::vector<State>& states);
} // namespace randomizer::location_data
