#pragma once

#include <Core/macros.h>

#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace core::text {
    class ITextProcessor {
    public:
        virtual ~ITextProcessor() = default;
        virtual void process(std::string& text) const = 0;
    };

    class CORE_DLLEXPORT CompositeTextProcessor final : public ITextProcessor {
    public:
        ~CompositeTextProcessor() override = default;

        void process(std::string& text) const final;
        CompositeTextProcessor& compose(std::shared_ptr<ITextProcessor> const& processor);

        template <typename T, typename... Args>
        CompositeTextProcessor& compose(Args&&... args) {
            return compose(std::make_shared<T>(std::forward<Args>(args)...));
        }

    private:
        std::vector<std::shared_ptr<ITextProcessor>> m_processors;
    };
} // namespace core::text
