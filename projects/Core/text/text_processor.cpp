#include <Core/text/text_processor.h>

namespace core::text {
    void CompositeTextProcessor::process(ITextProcessor const& base_processor, std::string& text) const {
        std::string last_text;
        do {
            last_text = text;
            for (auto const& processor : m_processors) {
                processor->process(base_processor, text);
            }
        } while (last_text != text);
    }

    CompositeTextProcessor& CompositeTextProcessor::compose(std::shared_ptr<ITextProcessor> const& processor) {
        m_processors.push_back(processor);
        return *this;
    }
} // namespace core::text
