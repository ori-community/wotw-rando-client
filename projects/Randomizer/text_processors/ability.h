#pragma once

#include <Core/text/text_processor.h>

namespace randomizer::text_processors {
    class AbilityProcessor final : public core::text::ITextProcessor {
        void process(std::string& text) const final;
    };
} // namespace randomizer::text_processors
