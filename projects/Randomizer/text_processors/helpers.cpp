#include <text_processors/helpers.h>

#include <Common/ext.h>

namespace randomizer::text_processors {
    void search_and_replace(core::text::ITextProcessor const& base_processor, std::string_view pattern, replacer func, std::string& text, std::string_view begin, std::string_view end) {
        const size_t search_pattern_size = pattern.size();
        auto start = text.find(pattern);
        while (start != std::string::npos) {
            std::string contents(find_next_unbalanced({ text.begin() + static_cast<long long>(start + search_pattern_size), text.end() }, begin, end));
            if (contents == text) {
                return;
            }

            size_t next = start + search_pattern_size + static_cast<int>(contents.size()) + end.size();
            auto value = func(base_processor, contents);
            if (value.has_value()) {
                text.replace(start, next - start, value.value());
                next = start + value.value().size();
            }

            start = text.find(pattern, next);
        }
    }

    void search_and_replace_full(core::text::ITextProcessor const& base_processor, std::string_view pattern, replacer func, std::string& text) {
        for (auto i = text.find(pattern); i != std::wstring_view::npos; i = text.find(pattern, i + 1)) {
            if (auto replacement = func(base_processor, {}); replacement.has_value()) {
                text.replace(
                    text.begin() + i,
                    text.begin() + i + pattern.size(),
                    replacement.value()
                );
            }
        }
    }
} // namespace randomizer::text_processors
