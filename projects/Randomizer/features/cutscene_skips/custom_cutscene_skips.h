#pragma once

#include <optional>

namespace custom_cutscene_skips {
    struct CustomCutsceneSkip {
        struct Metadata {
            bool fade_on_automatic_skip = true;
        };

        struct InvokeParameters {
            bool is_automatic_skip = false;
        };

        bool (*is_available)(){};
        void (*invoke)(const InvokeParameters& parameters){};
        std::optional<Metadata> (*get_metadata)() = [] { return static_cast<std::optional<Metadata>>(std::nullopt); };
    };

    void register_cutscene_skip(const CustomCutsceneSkip& skip);
} // namespace custom_cutscene_skips
