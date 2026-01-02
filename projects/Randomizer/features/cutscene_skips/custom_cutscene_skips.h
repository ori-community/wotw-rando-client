#pragma once

#include <optional>

namespace custom_cutscene_skips {
    struct CustomCutsceneSkip {
        struct Metadata {
            bool fade_on_automatic_skip = true;
        };

        bool (*is_available)(){};
        void (*invoke)(){};
        std::optional<Metadata> (*get_metadata)() = [] { return static_cast<std::optional<Metadata>>(std::nullopt); };
    };

    void register_cutscene_skip(const CustomCutsceneSkip& skip);
} // namespace custom_cutscene_skips
