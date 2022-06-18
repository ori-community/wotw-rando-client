#pragma once

namespace custom_cutscene_skips {
    struct CustomCutsceneSkip {
        bool (*is_available)();
        void (*invoke)();
    };

    void register_cutscene_skip(const CustomCutsceneSkip& skip);
} // namespace custom_cutscene_skips