#pragma once

#include <Randomizer/seed/seed.h>

namespace randomizer::seed::legacy_parser {
    enum class ParserError {
        WrongVersion,
    };

    std::variant<Seed::SeedMetaData, ParserError> parse_meta_data(const std::string_view content);
    bool parse(const std::string_view content, location_data::LocationCollection const& location_data, std::shared_ptr<Seed::Data> data);
    std::optional<ItemData> parse_action(std::string_view action);
} // namespace randomizer::seed::legacy_parser
