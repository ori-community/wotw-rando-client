#pragma once

#include <Randomizer/seed/seed.h>

namespace randomizer::seed::legacy_parser {
    std::optional<Seed::SeedMetaData> parse_meta_data(const std::filesystem::path& path);
    bool parse(const std::filesystem::path& path, location_data::LocationCollection const& location_data, Seed::Data& data);
    std::optional<ItemData> parse_action(std::string_view action);
} // namespace randomizer::seed::legacy_parser
