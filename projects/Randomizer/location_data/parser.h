#pragma once

#include <Randomizer/location_data/location_collection.h>

#include <string_view>
#include <vector>

namespace randomizer::location_data {
    bool parse_location_data(std::string_view path, location_data_emitter emitter);
} // namespace randomizer::location_data
