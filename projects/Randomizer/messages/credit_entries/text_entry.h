#pragma once

#include <Randomizer/messages/credit_entries/base_entry.h>

#include <memory>
#include <string>
#include <unordered_set>

namespace randomizer::messages::credit_entries {

    struct TextEntry : public BaseEntry {
    public:
        TextEntry(float time, float timeout, int id);
        ~TextEntry() override = default;

        bool resolve(CreditsController* credits, float time) override;
        void reset(CreditsController* credits) override;

    private:
        int m_id = -1;
        bool m_started = false;
    };
} // namespace randomizer::messages::credit_entries
