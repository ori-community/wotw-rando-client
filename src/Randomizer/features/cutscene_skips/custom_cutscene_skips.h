#pragma once

#include <optional>

namespace custom_cutscene_skips {
    struct CustomCutsceneSkip {
        struct Metadata {
            bool fade_on_automatic_skip = true;
            bool never_skip_automatically = false;
        };

        struct InvokeParameters {
            bool is_automatic_skip = false;
        };

        bool (*is_available)(){};
        void (*invoke)(const InvokeParameters& parameters){};
        std::optional<Metadata> (*get_metadata)() = [] { return static_cast<std::optional<Metadata>>(std::nullopt); };
    };

    enum class AutomaticCutsceneSkipInvocationResult {
        NoSkipExecuted,
        SkipExecutedDelayed,
        SkipExecutedImmediately,
    };

    void register_cutscene_skip(const CustomCutsceneSkip& skip);
    AutomaticCutsceneSkipInvocationResult execute_automatic_cutscene_skip_if_enabled();
} // namespace custom_cutscene_skips
