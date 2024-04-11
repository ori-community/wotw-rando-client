#pragma once

#include <Randomizer/seed/seed.h>

namespace randomizer::seed {
    enum class ParserError {
        FileNotFound,
        InvalidSeed,
        WrongVersion,
    };

    std::variant<SeedMetaData, ParserError> parse_meta_data(const std::shared_ptr<SeedArchive>& path);
    bool parse(const std::shared_ptr<SeedArchive>& content, location_data::LocationCollection const& location_data, const std::shared_ptr<SeedParseOutput>& output);
} // namespace randomizer::seed::modern_parser
