#pragma once

#include <Randomizer/seed/seed.h>

namespace randomizer::seed::legacy_parser {
    bool parse(std::string_view path, location_data::LocationCollection const& location_data, Seed::Data& data);
    ItemData parse_action(std::string_view action);
} // namespace randomizer::seed::legacy_parser
