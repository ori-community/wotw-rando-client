#pragma once

#include <Core/text/text_processor.h>

namespace randomizer::text_processors {
    class ActionProcessor final : public core::text::ITextProcessor {
        void process(ITextProcessor const& base_processor, std::string& text) const final;
    };
} // namespace randomizer::text_processors
