#pragma once

#include <Core/text/text_processor.h>

#include <optional>
#include <string>
#include <string_view>

namespace randomizer::text_processors {
    using replacer = std::optional<std::string> (*)(std::string_view content);
    void search_and_replace(std::string_view pattern, replacer func, std::string& text, std::string_view being = "[", std::string_view end = ")]");
} // namespace randomizer::text_processors
