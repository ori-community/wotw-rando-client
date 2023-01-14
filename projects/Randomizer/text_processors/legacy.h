#pragma once

#include <Core/text/text_processor.h>

namespace randomizer::text_processors {
    class LegacyProcessor final : public core::text::ITextProcessor {
        void process(std::string& text) const final;
    };
} // namespace randomizer::text_processors
