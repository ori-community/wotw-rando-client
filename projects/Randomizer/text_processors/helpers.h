#pragma once

#include <Core/text/text_processor.h>

#include <functional>
#include <optional>
#include <string>
#include <string_view>

namespace randomizer::text_processors {
    using replacer = std::function<std::optional<std::string>(core::text::ITextProcessor const& base_processor, std::string_view content)>;
    void search_and_replace(core::text::ITextProcessor const& base_processor, std::string_view pattern, replacer func, std::string& text, std::string_view begin = "[", std::string_view end = ")]");
    void search_and_replace_full(core::text::ITextProcessor const& base_processor, std::string_view pattern, replacer func, std::string& text);
} // namespace randomizer::text_processors
