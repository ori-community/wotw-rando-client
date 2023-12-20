#pragma once

#include <Randomizer/seed/seed.h>

namespace randomizer::seed {
    enum class ParserError {
        FileNotFound,
        InvalidSeed,
        WrongVersion,
    };

    std::variant<SeedMetaData, ParserError> parse_meta_data(const std::filesystem::path& path);
    bool parse(const std::filesystem::path& path, location_data::LocationCollection const& location_data, const std::shared_ptr<SeedParseOutput>& output);
} // namespace randomizer::seed::modern_parser
